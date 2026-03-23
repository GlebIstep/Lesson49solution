#include "util.h"

int main() {
	int array[DEFAULT_SIZE];
	int size;

	print("Before\n");
	print(convert(array, size));

	init_random(array, size, 0, 100);

	print("\nAfter ");

	return 0;

	}
		
