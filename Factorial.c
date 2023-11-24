#include<stdio.h>
int main(){

int n, i, factorial=1;
printf("Enter a number to get Factorial: ");
scanf("%d!", &n);

for(i=1; i<=n; i++){
    factorial= factorial*i;

}
printf("The factorial number is : %d", factorial);
return 0;
}
