#include<stdio.h>
void main(){
    int a, b, c = 0;
    printf("Enter number: ");
    scanf("%d", &a);

    while (a>0)
    {
        b = a%10;        
        c = (c*10)+b;
        a = a/10;
    }
    printf("Reverse is : %d", c);
}

