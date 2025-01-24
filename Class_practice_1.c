#include<stdio.h>
int main(){
int a,b,c;
printf("Enter the value of a : ");
scanf("%d",&a);
printf("Enter the value of b : ");
scanf("%d",&b);
printf("Enter the value of c : ");
scanf("%d",&c);
if (a>b && a>c){
printf("%d is biggest value",a);
}
else if (b>a && b>c){
printf("%d is biggest value",b);
}
else if (c>a && c>b){
printf("%d is biggest value",c);
}
 else if (a==b && a>c || b>c){
printf("%d is biggest value.\nValues of a & b are equal. ",a);
}
else if (a==c && a>b || c>b){
printf("%d is biggest value.\nValues of a & c are equal. ",a);
}
else if (b==c && b>a || c>a){
printf("%d is biggest value.\nValues of b & c are equal. ",b);
}
else printf(" a,b and c is neutral");
return 0;
}