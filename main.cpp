// main.cpp
#include <stdio.h>
#include "add-nbo.h"

int main(int argc, char* argv[]) {
	uint32_t first, second, third;

	first = readFile(argv[1]);
	second = readFile(argv[2]);
	third = first + second;

	printf("%d(0x%x) + %d(0x%x) = %d(0x%x)\n", first, first, second, second, third, third);
}
