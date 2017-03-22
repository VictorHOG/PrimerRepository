/*
 ============================================================================
 Name        : main.c
 Author      : VictorHOG
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include "util.h"

int main(int argc, char ** argv) {
	printf("tamaño: %d\n", filesize(argv[1]) );
	return 0;
}
