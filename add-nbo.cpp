// add-nbo.cpp
#include <stdint.h>
#include <stdio.h>
#include <netinet/in.h>
#include "add-nbo.h"

uint32_t readFile(char* fileName) {
	uint32_t x;

	FILE* fp = fopen(fileName, "rb");
	fread(&x, sizeof(fp), 1, fp);
	fclose(fp);
	
	x = ntohl(x);
	
	return x;
}
