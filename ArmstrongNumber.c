#include<stdio.h>
int main(){
int num, reminder, orginialNum, sum=0;
printf("Enter a number: ");
scanf("%d", &num);
orginialNum= num;
while(orginialNum!=0){

    reminder= orginialNum%10;
    sum= sum+(reminder*reminder*reminder);
    orginialNum= orginialNum/10;
}

if(sum==num){
    printf("%d is a Armstong Number", num);
}
else{
    printf("%d is not a Armstong Number", num);
}
return 0;
}
