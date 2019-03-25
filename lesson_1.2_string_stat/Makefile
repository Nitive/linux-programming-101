all: libsolution.so

libsolution.so: solution.h solution.c
	gcc -o libsolution.so -shared -fPIC solution.c

.PHONY: clean
clean:
	-rm libsolution.so *.o

test.o: libsolution.so test.c
	gcc  -o test.o -L . -l solution test.c

.PHONY: test
test: test.o
	./test.o
