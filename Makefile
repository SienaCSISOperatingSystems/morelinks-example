#
# Makefile for morelinks example
#

PROGRAMS=morelinks

all:	$(PROGRAMS)

morelinks:	morelinks.c
	gcc -o morelinks morelinks.c

clean::
	/bin/rm -f $(PROGRAMS)
