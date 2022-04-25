.PHONY: test var text testir

test:
	g++ test.cpp -o test && ./test

var:
	g++ var.cpp -o var && ./var

text:
	g++ text.cpp -o text && ./text

testir:
	g++ testir.cpp -o testir && ./testir