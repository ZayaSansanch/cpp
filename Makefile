.PHONY: test var

test:
	g++ test.cpp -o test && ./test

var:
	g++ var.cpp -o var && ./var