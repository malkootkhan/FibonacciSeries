
/* Please be aware that the code in its current state is in the initial phase and has undergone minimal testing. It is strongly recommended to thoroughly test and make any necessary modifications before utilizing it. */
/* I cannot be held responsible for any issues or difficulties arising from using the code without making appropriate modifications. */
/* basic recursive version of the code for fibonacci series in C */

#include <stdio.h>
#include <stdlib.h>

#define FIRST_TERM	0
#define SECOND_TERM	1
int firstTerm = 0, secTerm = 0;
void printFS(int nth_term) {
	
	/*Base condition for recursive call of the function nth_term == 0*/
	if (nth_term == 0) {	
		firstTerm = 0;
		printf("%d ", firstTerm);
		printf("%d ", secTerm);
		nth_term--;
		return;
	}
	else if(nth_term == 1){
		secTerm = 1;
		nth_term--;
		printFS(nth_term);
	}
	else {
		nth_term--;
		printFS(nth_term);
		int currTerm = firstTerm + secTerm;
		printf("%d ", currTerm);
		firstTerm = secTerm;
		secTerm = currTerm;
	}

}

int main() {

	int nTerm;
	printf("Enter nth term: ");
	scanf("%d", &nTerm);
	printFS(nTerm-1);

	return 0;
}

