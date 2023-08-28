bacyc:
	g++ -Wall -Wpedantic -std=c++20 -o bin/bacyc src/buddha-and-christ-years-converter.cpp src/io.cpp src/logic.cpp src/menu.cpp
test:
	g++ -o bin/utest test/utest.cpp -I/usr/local/include /usr/local/lib/libgtest.a /usr/local/lib/libgtest_main.a -lpthread && bin/utest
