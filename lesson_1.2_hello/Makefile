all: hello libHello.so

hello: main.c hello.h libHello.so
	gcc main.c -L . -l Hello -o hello

libHello.so: hello.h hello.c
	gcc -o libHello.so -shared -fPIC hello.c

clean:
	-rm hello libHello.so *.o

run: all
	export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:.
	./hello
