#+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-
#
#  fyz decimal to hexadecimal makefile
#
#+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-

objs = $(patsubst %.c, %.o, $(wildcard *.c))

cc = gcc

flags = -Wall

cflags = -c -Wall

exe = fyz-dth.exe

$(exe): $(objs)
	$(cc) $(flags) $^ -o $@

$(objs): %.o: %.c
	$(cc) $(cflags) $< -o $@

clear: 
	del *.o $(exe)
