#+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-
#
#  fyz from small to large makefile.
#
#+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-

objs = $(patsubst %.c, %.o, $(wildcard *.c))

flags = -Wall

cflags = -Wall -c

cc = gcc

exe = fyz-fstl.exe

$(exe): $(objs)
	$(cc) $(flags) $^ -o $@

$(objs): %.o: %.c
	$(cc) $(cflags) $< -o $@

clear:
	del *.o $(exe)
