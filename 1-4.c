#include<stdio.h>
int main() {
	int high=200, step=20;
	float fahr;
	int celsius=0;
	/*Calculate Fahrenheit*/
	printf("Celsius\tFahrenheit\n");
	while(celsius <= high) {
		fahr = celsius * 9 / 5 + 32;
		printf("%3d\t%3.1f\n",celsius,fahr);
		celsius += step;
		}
	return 0;
}
