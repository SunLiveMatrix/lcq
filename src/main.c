/* -*- Mode: C; indent-tabs-mode: t; c-basic-offset: 4; tab-width: 4 -*-  */
/*
 * main.c
 * Copyright (C) 2024 admin <admin@pop-os>
 * 
 * xpages is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * xpages is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License along
 * with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

/*Program closes with a mouse click or keypress */

#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif
#include <stdio.h>
#include <stdlib.h>
#include <X11/Xlib.h>

int main (int argc, char *argv[])
{
	Display              *dpy;
	Visual               *visual;
	int                   depth;
	XSetWindowAttributes  attributes;
	Window                win;
	XFontStruct         *fontinfo;
	XColor               color, dummy;
	XGCValues            gr_values;
	GC                   gc;
	XKeyEvent event;

	dpy = XOpenDisplay(NULL);
	visual = DefaultVisual(dpy, 0);
	depth  = DefaultDepth(dpy, 0);
	attributes.background_pixel = XWhitePixel(dpy, 0);
	/* create the application window */
	win = XCreateWindow(dpy, XRootWindow(dpy, 0),
			50, 50, 400, 400, 5, depth,
			InputOutput, visual, CWBackPixel,
			&attributes);
	XSelectInput(dpy, win, ExposureMask | KeyPressMask |
			ButtonPressMask | StructureNotifyMask);

	fontinfo = XLoadQueryFont(dpy, "6x10");
	XAllocNamedColor(dpy, DefaultColormap(dpy, 0),
		"green", &color, &dummy);
	gr_values.font = fontinfo->fid;
	gr_values.foreground = color.pixel;
	gc = XCreateGC(dpy, win, GCFont+GCForeground, &gr_values);
	XMapWindow(dpy, win);

	/* run till key press */
	while(1){
		XNextEvent(dpy, (XEvent *)&event);
		switch(event.type) {
			case Expose:
				XDrawLine(dpy, win, gc, 0, 0, 100, 100);
				XDrawRectangle(dpy, win, gc, 140, 140, 50, 50);
				XDrawString(dpy, win, gc, 100, 100, "hello X world", 13);
				break;
			case ButtonPress:
			case KeyPress:
				XUnloadFont(dpy, fontinfo->fid);
				XFreeGC(dpy, gc);
				XCloseDisplay(dpy);
				exit(0);
				break;
			case ConfigureNotify:
				/* reconfigure size of window here */
				break;
			default:
				break;
		}
	}
	return(0);
}

