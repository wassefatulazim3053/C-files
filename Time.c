#include<stdio.h>
#include<time.h>
int main(){
time_t omi;
time(&omi);
printf("Current time: %s", ctime(&omi));
return 0;
}