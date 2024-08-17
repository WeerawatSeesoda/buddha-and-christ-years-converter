bacyc:
	g++ -Wall -Wpedantic -std=c++20 -static-libgcc -static-libstdc++ -o bin/bacyc src/main.cpp src/io.cpp src/logic.cpp src/menu.cpp
test:
	g++ -o bin/utest test/utest.cpp -lgtest -lgtest_main -lpthread
	bin/utest
