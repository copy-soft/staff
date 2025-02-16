#include <stdlib.h>
#include <string.h>
#include <X11/Xlib.h>
#include <X11/Xutil.h>
#include <cstdio>
#include <string>

struct Point {
  int x, y;
  Point(int a, int b) { this->x = a; this->y = b; }
};

struct Button{
Point lu;
Point ld;
Point ru;
Point rd;
  Button();
};


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
    Pixmap    pm;
    int depth,  h, w;
    char *img;
    dpy = XOpenDisplay(0);
    screen = DefaultScreenOfDisplay(dpy);
    h = HeightOfScreen(screen);
    w = WidthOfScreen(screen);
    root = DefaultRootWindow(dpy);
    depth = DefaultDepth(dpy, DefaultScreen(dpy));
    //gc = XCreateGC(dpy, pm 	, 0, NULL);
    pm = XCreatePixmap(dpy, root, w, h, depth);
    gc = XCreateGC(dpy, pm, 0, NULL);

	XSetForeground (dpy, gc, _RGB(255, 255, 0));
	//штабель
	//int j=0;
	for(int i=-100;i<=100;i++){
	//if(i>12)j=i-12;
	//XDrawLine(dpy, root, gc, 100, 100+i, 200-j, 100+i);
	XDrawPoint(dpy, root, gc, 200+    i+100,200+     (-i)+100);	
        XDrawPoint(dpy, root, gc, 200+    i,200+     -(-i));


	}
    
        XSetForeground (dpy, gc, _RGB(0, 0, 0));


/*	
    XDrawLine(dpy, root, gc, 100, 100, 200, 100);
    XDrawLine(dpy, root, gc, 100, 120, 192, 120);
    XDrawLine(dpy, root, gc, 100, 120, 100, 100);
    XDrawLine(dpy, root, gc, 200, 100, 200, 112);
    std::string str("OK");
    XDrawString (dpy, root, gc, 144, 115,  str.c_str(), 2);
*/




     XMapWindow(dpy, root);

    XFlush(dpy);
    XCloseDisplay(dpy);
    return 0;
}
