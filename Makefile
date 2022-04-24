.PHONY: test var text

test:
	g++ test.cpp -o test && ./test

var:
	g++ var.cpp -o var && ./var

text:
	g++ text.cpp -o text && ./text