all: clean
	gcc src/*.c -o build/output
	
clean:
	rm -rf build
	mkdir build
