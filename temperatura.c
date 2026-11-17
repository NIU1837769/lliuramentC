#include <stdio.h>

int main(void) {
	int temperatura = 25;
	float fahrenheit = temperatura * 9 / 5 + 32;
	printf("Temperature: %d degrees\nFahrenheit: %.1f degrees\n",temperatura, 		fahrenheit);
	return 0;
}
