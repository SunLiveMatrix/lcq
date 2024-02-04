## Process this file with automake to produce Makefile.in

## Created by Anjuta

AM_CPPFLAGS = \
	-DPACKAGE_LOCALE_DIR=\""$(localedir)"\" \
	-DPACKAGE_SRC_DIR=\""$(srcdir)"\" \
	-DPACKAGE_DATA_DIR=\""$(pkgdatadir)"\" \
	$(XPAGES_CFLAGS)

AM_CFLAGS =\
	 -Wall\
	 -g

bin_PROGRAMS = xpages

xpages_SOURCES = \
	main.c

xpages_LDFLAGS = 

xpages_LDADD = \
	$(XPAGES_LIBS) \
	-lX11 -lXpm -lXext \
	$(X_LIBS) \
	$(X_EXTRA_LIBS)

