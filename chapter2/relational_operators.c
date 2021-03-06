#include<stdio.h>

int main() {
	int i = 1;
	int j = 0;

	i = 0;
	if( i <= j) {
		printf("i=%d is less than or equal to j=%d\n",i,j);	
	}else {
		printf("i=%d is greater than j=%d\n",i,j);	
	}

	char a = 'a';
	char A = 'A';

	if(a == A) {
		printf("%c is equal to %c\n",a , A);
	} else {
		printf("%d is the ASCII value of %c, and %d is the ASCII value of %c\n",a,a,A,A);
	}

	if(a != A) {
		printf("%c is not equal to %c because c language compare character with ASCII value.\n",a , A);
	}

	int x=1;
	if(!x){
		printf("!%d -> negation of x is true, in c language anything nonzero is true\n",x);
	}else {
		printf("!%d -> negation of x is false, in c language anything zero is false\n",x);
	}
}
