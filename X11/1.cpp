#include <stdlib.h>
#include <string.h>
#include <X11/Xlib.h>
#include <X11/Xutil.h>
#include <cstdio>
#include <unistd.h>             /* sleep(), etc.  */
#define hexagons_width 30
#define hexagons_height 18
static unsigned char hexagons_bits[] = {
   0x08, 0x80, 0x00, 0x00, 0x08, 0x80, 0x00, 0x00, 0x04, 0x00, 0x01, 0x00,
   0x04, 0x00, 0x01, 0x00, 0x02, 0x00, 0x02, 0x00, 0x02, 0x00, 0x02, 0x00,
   0x01, 0x00, 0x04, 0x00, 0x01, 0x00, 0x04, 0x00, 0x00, 0x00, 0xf8, 0x3f,
   0x01, 0x00, 0x04, 0x00, 0x01, 0x00, 0x04, 0x00, 0x02, 0x00, 0x02, 0x00,
   0x02, 0x00, 0x02, 0x00, 0x04, 0x00, 0x01, 0x00, 0x04, 0x00, 0x01, 0x00,
   0x08, 0x80, 0x00, 0x00, 0x08, 0x80, 0x00, 0x00, 0xf0, 0x7f, 0x00, 0x00};



GC
create_gc(Display* display, Window win, int reverse_video)
{
  GC gc;                                /* handle of newly created GC.  */
  unsigned long valuemask = 0;          /* which values in 'values' to  */
                                        /* check when creating the GC.  */
  XGCValues values;                     /* initial values for the GC.   */
  unsigned int line_width = 2;          /* line width for the GC.       */
  int line_style = LineSolid;           /* style for lines drawing and  */
  int cap_style = CapButt;              /* style of the line's edje and */
  int join_style = JoinBevel;           /*  joined lines.               */
  int screen_num = DefaultScreen(display);

  gc = XCreateGC(display, win, valuemask, &values);
  if (gc ==NULL ) {
        fprintf(stderr, "XCreateGC: \n");
  }

  /* allocate foreground and background colors for this GC. */
  if (reverse_video) {
    XSetForeground(display, gc, WhitePixel(display, screen_num));
    XSetBackground(display, gc, BlackPixel(display, screen_num));
  }
  else {
    XSetForeground(display, gc, BlackPixel(display, screen_num));
    XSetBackground(display, gc, WhitePixel(display, screen_num));
  }

  /* define the style of lines that will be drawn using this GC. */
  XSetLineAttributes(display, gc,
                     line_width, line_style, cap_style, join_style);

  /* define the fill style for the GC. to be 'solid filling'. */
  XSetFillStyle(display, gc, FillSolid);

  return gc;
}











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
    //img = malloc(depth/8 * h * w);
    if (img == NULL) {
        perror("malloc() failed");
        return 1;
    }
    

 gc = create_gc(dpy, root, 0);
  XSync(dpy, False);





	Pixmap bitmap;
    /* these variables will contain the dimensions of the loaded bitmap. */
    unsigned int bitmap_width, bitmap_height;
    /* these variables will contain the location of the hotspot of the   */
    /* loaded bitmap.                                                    */
    int hotspot_x, hotspot_y;

    /* load the bitmap found in the file "icon.bmp", create a pixmap     */
    /* containing its data in the server, and put its ID in the 'bitmap' */
    /* variable.                                                         */
    int rc = XReadBitmapFile(dpy, root,
                             "icon.bmp",
                             &bitmap_width, &bitmap_height,
                             &bitmap,
                             &hotspot_x, &hotspot_y);




pm = XCreateBitmapFromData(dpy, root, (char*)hexagons_bits, hexagons_width, hexagons_height);




    //memset(img, 0xFF, depth/8 * h * w);
    //ximg = XCreateImage(dpy, CopyFromParent, depth, ZPixmap, 0, img, w, h, 32, 0);
    
    //pm = XCreatePixmap(dpy, root, w, h, depth);
    //gc = XCreateGC(dpy, pm, 0, NULL);
    ///XPutImage(dpy, pm, gc, ximg, 0, 0, 0, 0, w, h);
    //XCopyArea(dpy, pm, root, gc, 0, 0, w, h, 0, 0);
     






     int i, j;

      for(i=0; i<60; i++) {
        for(j=0; j<80; j++) {
          XCopyPlane(dpy, bitmap, root, gc,
                    0, 0,
                    bitmap_width, bitmap_height,
                    j*bitmap_width, i*bitmap_height,
                    1);
          XSync(dpy, False);
          //usleep(100000);
        }
      }






	//free(img);
    //XFreePixmap(dpy, pm);
    //XDestroyImage(ximg);
    XFreeGC(dpy, gc);
    XCloseDisplay(dpy);
    return 0;
}
