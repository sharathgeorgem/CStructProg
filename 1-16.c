#include<stdio.h>
#define MAXLINE 1000/*Maximum input line size*/

int getlin(char s[], int lim);
void copy(char to[], char from[]);

/*Print longest input line*/
/*Includes two sub functions that copy one string to anotehr and another function that can calculate the number of strings entered ias input and also the length of the longest string*/
int main() {
	int len;
	int max;
	char line[MAXLINE];
	char longest[MAXLINE];
	max = 0;
	while((len = getlin(line,MAXLINE)) > 0)
		if(len > max) {
			max = len;
			copy(longest, line);
		}
	if(max > 0)
		printf("%s", longest);
	return 0;
}
/*Read a line into s, return length*/
int getlin(char s[], int lim) {
	int c, i;
	for(i = 0; i < lim - 1 && (c=getchar()) != EOF && c!='\n'; ++i )
		s[i] = c;
	if(c == '\n') {
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}
/*Copy from into to*/
void copy(char to[], char from[]) {
	int i;
	i = 0;
	while((to[i] = from[i]) != '\0')
		++i;
}
/*Function needs to be modified*/
