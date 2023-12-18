#include<stdio.h>
#include<string.h>

void main(){
    char s1[10], s2[10];
    int comp = 0;
    printf("Enter string: ");
    scanf("%s", &s1);

    strcpy(s2, s1);
    strrev(s2);
    comp = strcmp(s1,s2);

    if (comp == 0)
    {
        /* code */
        printf("palindrome");
    }
    else
    {
        printf("Not palindrome");
    }
    
}
