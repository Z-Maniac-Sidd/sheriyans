#include<stdio.h>
int main(){

    int l;
    scanf("%d", &l);

    for (int i = 0; i < l; i++)
    {

        int a, b, c, d, count = 0;
    
        printf("Enter number if elements: ");
        scanf("%d", &a);
        
        printf("Give integer: ");
        scanf("%d", &b);

        int M[a];
        for (int i = 0; i < a; i++)
        {
            scanf("%d", &M[i]);
        }

        int found = 0; 
        
        for(int i=0; i<a; i++)
        {
            if(M[i]%b == 0)
            {
                count++;
            }
        }

        int e = b-count;

        printf("%d\n", e);

    }
}
