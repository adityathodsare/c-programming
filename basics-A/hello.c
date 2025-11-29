#include <stdio.h>
// this is just day 1 of embedded c 
// input output 
// variables 
// access specifiers 
// .c code ---> c compiler ---> a.exe (win), a.out(mac, linux )

int main (){
    printf("hello world \n");
    int a = 25 ;
    char letter = 'a';
    float pi = 3.14;
    printf("%c \n",letter);
    printf("%d \n",a);
    printf("enter any number ");
    int d ;
    scanf("%d",&d);
    printf("you entered %d \n", d);
    printf("%d \n",a+d);

    return 0;
}

