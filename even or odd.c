//Even and odd
#include<stdio.h>
int main(){
int a;
printf("Enter a number to check for even or odd : ");
scanf("%d",&a);
if (a%2==0){
printf("%d The number is even",a);
}
else printf("%d The number is odd",a);
return 0;
}
