#
# Makefile for morelinks example
#

PROGRAMS=morelinks

all:	$(PROGRAMS)

morelinks:	morelinks.c
	clang -o morelinks morelinks.c

clean::
	/bin/rm -f $(PROGRAMS)
