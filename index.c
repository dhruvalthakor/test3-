#include <stdio.h>
int main(){
// Q1
for(int i=1; i<=9; i++){
printf("*");
}
printf("\n");
for(int i=1; i<=9; i++){
printf("*");
}
printf("\n");
for(int i=1; i<=9; i++){
printf("*");
}

// Q2
int num;
printf("enter your number ");
scanf("%d",&num);
for(int i=1; i<=num; i++){
    if (i/2==0)
    {
     printf("%d",i);
      
    }
    else{
        printf("%d",i);
    }
    
 }

    return 0;
}