#include<stdio.h>
#define MAX_WORD_LENGTH 50
#define IN 0
#define OUT 1
int main() {
	char c;
	int i, j, num_word_length[11], num_char = 0, state;
	for( i = 0; i < 11; i++ )
		num_word_length[i] = 0;
	while((c = getchar()) != EOF) {
		if(c == ' ' || c == '\n' || c == '\t')
			state = OUT;
		else if( c >= 'a' && c <= 'z' || c >= '0' && c <= '9') {
			state = IN;
			++num_char;
		}
		if(state) {
			++num_word_length[num_char];
			num_char = 0;
		}
	}
	for( i = 1; i < 11; i++) {
		printf("%d\t",i);
		for( j = 0; j < num_word_length[i]; j++) {
			printf("X");
		}
		printf("\n");
	}
	return 0;
}
