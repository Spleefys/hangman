.PHONY: all clean test

all: bin/hang
test: bin/hang-test

bin/hang: build/src/main.o build/src/hangman.o src/hangman.h
	gcc -Wall -Werror build/src/main.o build/src/hangman.o -o bin/hang

build/src/main.o: src/main.c src/hangman.h
	gcc -Wall -Werror -c src/main.c -o build/src/main.o

build/src/hangman.o: src/hangman.c src/hangman.h
	gcc -Wall -Werror -c src/hangman.c -o build/src/hangman.o

clean:
	rm -f build/src/*.o build/test/*.o bin/hang bin/hang-test

bin/hang-test: build/src/hangman.o build/test/hangman_test.o build/test/main.o \
build/test/validation_test.o src/hangman.h thirdparty/ctest.h
	gcc -Wall -Werror build/src/hangman.o build/test/hangman_test.o build/test/main.o \
	build/test/validation_test.o -o bin/hang-test
	./bin/hang-test

build/test/hangman_test.o: test/hangman_test.c src/hangman.h thirdparty/ctest.h
	gcc -Wall -Werror -I thirdparty -I src -c test/hangman_test.c -o \
	build/test/hangman_test.o

build/test/main.o: test/main.c thirdparty/ctest.h
	gcc -Wall -Werror -I thirdparty -I src -c test/main.c -o build/test/main.o

build/test/validation_test.o: test/validation_test.c src/hangman.h thirdparty/ctest.h
	gcc -Wall -Werror -I thirdparty -I src -c test/validation_test.c -o \
	build/test/validation_test.o

