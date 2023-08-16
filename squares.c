#include <stdio.h>
#include <string.h>

/*
* Given a rectangular paper of arbitrary dimensions l and w (where l and w are positive integers)
* this program finds the number of perfect squares that can be made out of that paper given that these
* squares will be the largest possible size and will also have lengths that are non-negative integers.
* It will also calculate the sizes of these perfect squares.
*/

void recursiveSquares(int l, int w) {
	if (l == w) {
		printf(", %dx%d", l, w);
	}
	else if (l > w) {
		int diff = l - w;
		printf(", %dx%d", w, w);
		recursiveSquares(diff, w);
	}
	else {
		int diff = w - l;
		printf(", %dx%d", l, l);
		recursiveSquares(l, diff);
	}

}

void squares(int l, int w) {
	if (l == w) {
		printf("%dx%d", l, w);
	}
	else {

		if (l > w) {
			int diff = l - w;
			printf("%dx%d", w, w);
			recursiveSquares(diff, w);
		}
		else {
			int diff = w - l;
			printf("%dx%d", l, l);
			recursiveSquares(l, diff);
		}
	}
}




int main() {
	printf("this is the output \n");
	squares(7, 3); //Test Output, can be replaced with any two non-negative integers
}