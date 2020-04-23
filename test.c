// This file contains some input/output and testing functions for the algorithms and data_structures of
// the other files.
#include "data_structures.h"
#include <stdio.h>

// ~~~~~~~~~~~~~~~~~~ X ~~~~~~~~~~~~~~~~~~ X ~~~~~~~~~~~~~~~~~~ X ~~~~~~~~~~~~~~~~~~
// Input / Output functions:

// Interaction function for obtaining input.
// Parameter: 
// 		char *value_name: Name of the variable it will get.
double get_value(char *value_name) {
	double x;
	printf("Enter %s: ", value_name);
	scanf("%lf", &x);
	return x;
}

// Pretty output for function header
// Parameter:
// 		char *func: Name of the function being tested.
// 		char *quit_v: Value to be entered to exit the application
// 		char *quit_n: Variable name to enter the value to exit the application
void func_head(char *func, char *quit_v, char *quit_n) {
	printf("\nTesting %s function!\n", func);
	printf("Enter \"%s\" in \"%s\" to exit.\n", quit_v, quit_n);
}

// ~~~~~~~~~~~~~~~~~~ X ~~~~~~~~~~~~~~~~~~ X ~~~~~~~~~~~~~~~~~~ X ~~~~~~~~~~~~~~~~~~
// Test functions for algorithms.c

// double sine_taylor(double, double) test:
void test_sine() {
	func_head("sine_taylor", "404", "theta");
	int precision = (int) get_value("precision (int)");
	double theta = get_value("theta (radian)");
	while(theta != 404.0){
		double r = sine_taylor(theta, precision);
		printf("sin(%lf) = %lf\n", theta, r);
		theta = get_value("theta");
	}
}

// unsigned int fibonacci(unsigned int) test:
void test_fibo() {
	func_head("fibonacci", "-1", "n");
	unsigned int n = (unsigned int) get_value("n");
	while(n != -1) {
		unsigned int fibo = fibonacci(n);
		printf("fibo(%u) = %u\n", n, fibo);
		n = (unsigned int)get_value("n");
	}
}

// int binomial_coefficient(int, int) test:
void test_bc() {
	func_head("binomial_coefficient", "-1", "n\" or \"j");
	int n = (int) get_value("n");
	int k = (int) get_value("k");
	while((n != -1) && (k != -1)) {
		int c = binomial_coefficient(n, k);
		printf("C(%d, %d) = %d\n", n, k, c);
		n = (int) get_value("n");
		k = (int) get_value("k");		
	}
}

// void print a pascal triange of size n:
void pascal_triangle() {
	func_head("pascal_triangle", "-1", "n");
	int n = (int) get_value("n");
	while(n != -1) {
		int i, j;
		for(i = 0; i < n; i++) {
			for(j = 0; j <= i; j++) {
				printf("%d  ", binomial_coefficient(i, j));
			}
			printf("\n");
		}
		n = (int) get_value("n");
	}
}

// ~~~~~~~~~~~~~~~~~~ X ~~~~~~~~~~~~~~~~~~ X ~~~~~~~~~~~~~~~~~~ X ~~~~~~~~~~~~~~~~~~
// Test functions for data_structures.c