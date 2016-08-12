#include<stdio.h>
int convert(int);

int main() {
	int high=200, step=20;
	float fahr;
	int celsius=0;
	/*Calculate Fahrenheit*/
	printf("Celsius\tFahrenheit\n");
	while(celsius <= high) {
		fahr = convert(celsius);
		printf("%3d\t%3.1f\n",celsius,fahr);
		celsius += step;
		}
	return 0;
}

int convert(int a) {
	int temp;
	temp = a * 9 / 5 + 32;
	return temp;
}
