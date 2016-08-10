#include<stdio.h>
int main() {
	long c, num_blank = 0, num_tab = 0, num_newline = 0;
	while( (c = getchar()) != EOF) {
		if(c == ' ')
			++num_blank;
		if(c == '\t')
			++num_tab;
		if(c == '\n')
			++num_newline;
	}
	printf("%ld\t%ld\t%ld\n", num_blank, num_tab, num_newline);
	return 0;
}
