#+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-
#
#  fyz binary to ip makefile.
#
#+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-

objs = $(patsubst %.c, %.o, $(wildcard *.c))

cc = gcc

flags = -Wall

cflags = -Wall -c

exe = fyz-btip.exe

$(exe): $(objs)
	$(cc) $(flags) $^ -o $@

$(objs): %.o: %.c
	$(cc) $(cflags) $< -o $@

clear:
	del *.o $(exe)
