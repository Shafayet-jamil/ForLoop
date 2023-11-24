#include <stdio.h>

int main(void) {
	// your code goes here
	int t, X, Y, sum;
	scanf("%d", &t);
	for(int i=0; i<t; i++){
	    scanf("%d %d\n", &X,&Y);
	    sum = X+Y;
	    if(sum>6)
	        printf("YES\n");
	    else
	        printf("NO\n");

	}

	return 0;
}

