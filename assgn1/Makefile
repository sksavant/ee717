all:
	@mkdir -p build
	-mkdir -p bin
	cd build && cmake ..
	cd build && make

clean:
	-cd build && make clean
	rm -rf build
