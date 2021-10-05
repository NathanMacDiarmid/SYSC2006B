/*
 * Lab 1
 *
 * Carleton University
 * SYSC 2006B L8
 *
 * Nathan MacDiarmid
 * 101098993
 *
 */

#include <stdio.h>
#include <stdlib.h>

/* main: generate some simple output. */

int main(void) {
	printf("Hello, world!\n");
	printf("C programming is fun!\n");
	return EXIT_SUCCESS;
}

/* Exercise 2
 *
 * a) main.c:34:4: error: expected '}'
 * 		[main.o] Error 1
 *
 * b) main.c:18:2: error: expected function body after function declarator
 * 		main.c:19:9: error: expected ')'
 * 		main.c:19:2: warning: type specifier missing, defaults to 'int'
 * 		main.c:19:2: error: conflicting types for 'printf'
 * 		main.c:20:2: error: expected identifier or '('
 * 		main.c:21:1: error: extraneous closing brace '}'
 * 		[main.o] Error 1
 *
 * c) type specifier missing, defaults to 'int'
 *
 * d) ld: symbol(s) not found for architecture x86_64
 * 		[hello] Error 1
 *
 * e) ld: symbol(s) not found for architecture x86_64
 * 		[hello] Error 1
 *
 * f)mld: symbol(s) not found for architecture x86_64
 * 		[hello] Error 1
 *
 * g) main.c:17:14: error: expected indentifier or '('
 * 		[main.o] Error 1
 *
 * h) main.c:17:12: warning: type specifier missing, defaults to 'int'
 * 		main.c:17:18: error: expected ')'
 * 		main.c:17:10: note: to match this '('
 * 		main.c:52:4: error: expected function body after function declarator
 * 		[main.o] Error 1
 *
 * i) main.c:20:21: error: expected ';' after return statement
 * 		[main.o] Error 1
 *
 */
