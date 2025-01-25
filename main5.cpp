#include <stdlib.h>
#include <curses.h>
#include <signal.h>

static void finish(int sig);

int
main(int argc, char *argv[])
{
    (void) initscr();      /* initialize the curses library */
	
	curs_set(0);
	for (int i=0;i<20;i++){
        clear();
	start_color();
	init_pair(1, COLOR_BLACK, COLOR_BLUE);
	init_pair(2, COLOR_BLACK, COLOR_RED);
	init_pair(3, COLOR_BLACK, COLOR_WHITE);
        attron(COLOR_PAIR(3));
	mvprintw(i, 30, ">ro");
        attron(COLOR_PAIR(1));
	mvprintw(i, 33,	"ck");
        attron(COLOR_PAIR(2));
	mvprintw(i, 35,	"et>");
	sleep(1);
	//clear();
	refresh();
	}
        clear();
	mvprintw(20, 30, "BAAM!");
	refresh();	
	getch();
	

    finish(0);               /* we are done */
}

static void finish(int sig)
{
    endwin();

    /* do your non-curses wrapup here */

    exit(0);
}
