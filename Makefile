all:
	cc -o main.exe main.c student.c course.c link.c input.c

clean:
	rm -f main.exe
