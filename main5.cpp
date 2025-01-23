#include <stdlib.h>
#include <curses.h>
#include <signal.h>

static void finish(int sig);

int
main(int argc, char *argv[])
{
    (void) initscr();      /* initialize the curses library */
	
	for (int i=0;i<20;i++){
        clear();
	mvprintw(i, 30, ">rocket>");
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
