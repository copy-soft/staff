#include <stdlib.h>
#include <string.h>
#include <X11/Xlib.h>
#include <X11/Xutil.h>
#include <cstdio>
int
main(int argc, char **argv) {
    Display  *dpy;
    Window    root;
    Screen   *screen;
    GC        gc;
    XImage   *ximg;
    Pixmap    pm;
    int depth, h, w;
    char *img;
    dpy = XOpenDisplay(0);
    if (!dpy) {
        fputs("cannot open display\n", stderr);
        return 1;
    }
    screen = DefaultScreenOfDisplay(dpy);
    h = HeightOfScreen(screen);
    w = WidthOfScreen(screen);
    root = DefaultRootWindow(dpy);
    depth = DefaultDepth(dpy, DefaultScreen(dpy));
    img = malloc(depth/8 * h * w);
    if (img == NULL) {
        perror("malloc() failed");
        return 1;
    }
    memset(img, 0xFF, depth/8 * h * w);
    ximg = XCreateImage(dpy, CopyFromParent, depth, ZPixmap, 0, img, w, h, 32, 0);
    pm = XCreatePixmap(dpy, root, w, h, depth);
    gc = XCreateGC(dpy, pm, 0, NULL);
    XDrawLine(dpy, root, gc, 100, 100, 200, 100);
    XDrawLine(dpy, root, gc, 100, 120, 190, 120);
    XDrawLine(dpy, root, gc, 100, 120, 100, 100);
    XDrawLine(dpy, root, gc, 200, 100, 200, 110);

    XMapWindow(dpy, root);

    XFlush(dpy);
    //XDrawArc(dpy, root, gc, 50-(30/2), 100-(30/2), 30, 30, 0, 360*64);
    //XFlush(dpy);
    //XPutImage(dpy, pm, gc, ximg, 0, 0, 0, 0, w, h);
    //XCopyArea(dpy, pm, root, gc, 0, 0, w, h, 0, 0);
    //free(img);
    //XFreePixmap(dpy, pm);
    //XDestroyImage(ximg);
    //XFreeGC(dpy, gc);
    XCloseDisplay(dpy);
    return 0;
}
