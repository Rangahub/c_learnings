#include<stdio.h>

#define VTAB '\013' /* ascii vertiacl tab */
#define BELL '\007' /* ascii bell character */
#define MAXLINE 1000
#define OCTAL_NUM '\010'
#define HEXA_NUM '\x10'
#define LEAP 1
#define STRING "I am a string"
#define YES true

int main() {

	printf("vertical tab %c\n",VTAB);
	printf("abhi\tshek");
	printf("Bell should ring\a \n");
	printf("this should delete a letter\b \n\n");
	printf("carriage return \r\n");
	printf("\\ \n");
	printf("\? \n");
	printf("\' \n");
	printf("\" \n");
	printf("octal of 10 is %d \n",OCTAL_NUM);
	printf("hexa of 10 is %d \n",HEXA_NUM);
        printf("%s\n",STRING);
	char line[MAXLINE+1];
	int days[31+28+LEAP+31+30+31+30+31+31+30+31+30+31];


	enum noolean { NO, YES };
	printf("YES %d\n",YES);
	printf("NO  %d\n",NO);


	const double pi = 3.14159;
	const char msg[] = "warning: ";

}

/* Octal   Dec	Hexa
 * 0 	-> 0  -> 0
 * 1	-> 1  -> 1
 * 2 	-> 2
 * 3 	-> 3
 * 4 	-> 4
 * 5 	-> 5
 * 6 	-> 6
 * 7 	-> 7
 *10 	-> 8
  11 	-> 9
  12 	-> 10  -> A
  13 	-> 11  -> B
  14 	-> 12
  15 	-> 13
  16 	-> 14
  17 	-> 15  -> F
  20 	-> 16  -> 10
  21	-> 17  -> 11
 *
 * */
