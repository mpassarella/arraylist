all: clean
	gcc src/*.c -o build/output

objects: clean
	gcc -c src/arraylist.c -o build/arraylist.o
	
clean:
	rm -rf build
	mkdir build
