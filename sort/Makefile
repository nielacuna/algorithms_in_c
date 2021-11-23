
CFLAGS:=-Wall -Werror -std=c89 -ggdb -O0 

all: selection

selection: sortlib.o selection.c
	gcc $(CFLAGS) -o $@ $^


sortlib.o: sortlib.c sortlib.h
	gcc $(CFLAGS) -c -o sortlib.o sortlib.c


.PHONY: clean
clean:
	rm selection
	rm *.o
