#include<stdio.h>
#define lower 0
#define upper 300
#define step 20
int main() {
	int celsius;
	float fahr;
	for(celsius = upper; celsius >= lower ; celsius -= step)
		printf("%3d\t%3.2f\n", celsius, fahr = (float)celsius * 9.0 / 5.0 + 30);
	return 0;
}
