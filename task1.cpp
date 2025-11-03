/*Week-8 Task #1
Write a C program that prints shape giving below by using nested loop
					1
				1		2
			1		2		3
		1		2		3		4
	1		2		3		4		5
		1		2		3		4
			1		2		3
				1		2
					1
*/

#include<stdio.h>

main() {
	int i, j, empt;
	
	for(i=1; i<=5; i++) {
		for(empt=5; empt>i; empt--) {
			printf(" ");
		}
		for(j=1; j<=i; j++) {
			printf("%d ", j);
		}
		printf("\n");
	}
	
	for(i = 5-1; i>=1; i--) {
		for(empt=5; empt>i; empt--) {
			printf(" ");
		}
		for(j=1; j<=i; j++) {
			printf("%d ", j);
		}
		printf("\n");
	}
}

