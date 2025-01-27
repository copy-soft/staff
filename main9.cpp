#include <stdlib.h>
#include <string.h>
#include <X11/Xlib.h>
#include <X11/Xutil.h>
#include <cstdio>

unsigned long _RGB(int r,int g, int b)
{
    return b + (g<<8) + (r<<16);
}

int
main(int argc, char **argv) {
    Display  *dpy;
    Window    root;
    Screen   *screen;
    GC        gc;
    int  h, w;
    char *img;
    dpy = XOpenDisplay(0);
    screen = DefaultScreenOfDisplay(dpy);
    h = HeightOfScreen(screen);
    w = WidthOfScreen(screen);
    root = DefaultRootWindow(dpy);
    //depth = DefaultDepth(dpy, DefaultScreen(dpy));
    gc = XCreateGC(dpy, pm 	, 0, NULL);
    XSetForeground (dpy, gc, _RGB(255, 255, 0));
	int j=0;
	for(int i=0;i<=20;i++){
	if(i>5)j=i-5;
	XDrawLine(dpy, root, gc, 100, 100+i, 200-j, 100+i);
	


	}
    
    XMapWindow(dpy, root);

    XFlush(dpy);
    XCloseDisplay(dpy);
    return 0;
}
