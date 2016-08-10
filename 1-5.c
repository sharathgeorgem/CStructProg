#include<stdio.h>
int main() {
	int celsius;
	float fahr;
	for(celsius = 300; celsius >= 0 ; celsius -= 20)
		printf("%3d\t%3.2f\n", celsius, fahr = (float)celsius * 9.0 / 5.0 + 30);
	return 0;
}
