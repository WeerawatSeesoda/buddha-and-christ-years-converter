bacyc:
	g++ -Wall -Wpedantic -Wextra -std=c++20 -O2 -march=native -static-libgcc -static-libstdc++ -o bin/bacyc src/main.cpp src/io.cpp src/logic.cpp src/menu.cpp
test: src/*
	g++ -Wall -Wpedantic -Wextra -std=c++20 -o bin/utest test/utest.cpp -lgtest -lgtest_main -lpthread
	bin/utest
