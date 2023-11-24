#include <stdio.h>

int main(void) {
	// your code goes here
	int i, num, t, sum, num1;
	scanf("%d", &t);
	for(i=0; i<t; i++){
	    scanf("%d%d", &num, &num1);
	    sum= num+num1;
	    printf("%d\n", sum);
	}
	return 0;
}
