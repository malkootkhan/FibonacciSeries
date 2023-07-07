
/* Please be aware that the code in its current state is in the initial phase and has undergone minimal testing. It is strongly recommended to thoroughly test and make any necessary modifications before utilizing it. */
/* I cannot be held responsible for any issues or difficulties arising from using the code without making appropriate modifications. */
/* basic iterative code for fibonacci series in C : in other attempt I will publish the recursive version for same series */

#include <stdio.h>
#include <stdlib.h>

#define FIRST_TERM	0
#define SECOND_TERM	1

void printFS(int nth_Term) {
	int firstTerm, secTerm;
	for (int term = 0; term < nth_Term; term++) {
		if (term == FIRST_TERM) {
			firstTerm = 0;
			printf("%d ", firstTerm);
		}
		else if (term == SECOND_TERM) {
			secTerm = 1;
			printf("%d ", secTerm);
		}
		else {
			int currTerm = firstTerm + secTerm;
			printf("%d ", currTerm);
			firstTerm = secTerm;
			secTerm = currTerm;
		}
	}
}

int main() {

	int nTerm;
	printf("Enter nth term: ");
	scanf("%d", &nTerm);
	printFS(nTerm);

	return 0;
}

