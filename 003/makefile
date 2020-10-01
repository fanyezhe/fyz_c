#+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-
#
#  fyz any base to decimal makefile.
#
#+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-

objs = $(patsubst %.c, %.o, $(wildcard *.c))

cc = gcc

flags = -Wall

cflags = -Wall -c

exe = fyz-abtd.exe

$(exe): $(objs)
	$(cc) $(flags) $^ -o $@

$(objs): %.o: %.c
	$(cc) $(cflags) $< -o $@

clear: #
	del *.o $(exe)
