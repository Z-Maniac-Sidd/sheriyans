#include<stdio.h>
    int main()
    {
        int dec,bin=0,pv=1,rem;
        printf("enter decimal =");
        scanf("%d",&dec);
        while(dec!=0)
        {
            rem=dec%2;
            dec=dec/2;
            bin=bin+pv*rem;
            pv=pv*10;
        }
    printf("binary is %d",bin);
    return 0;
    }