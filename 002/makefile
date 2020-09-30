#+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-
#
#  fyz decimal to binary makefile.
#
#+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-

objs = $(patsubst %.c, %.o, $(wildcard *.c))

cc = gcc

flags = -Wall

cflags = -Wall -c

exe = fyz-dtb.exe

$(exe): $(objs)
	$(cc) $(flags) $^ -o $@

$(objs): %.o: %.c
	$(cc) $(cflags) $< -o $@

cls = clear

$(cls): #
	del *.o $(exe)
