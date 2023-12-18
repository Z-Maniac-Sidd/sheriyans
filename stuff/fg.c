// #include<stdio.h>
// #include<math.h>

//     int main()
//     {
//         int dec,bin=0,pv=1,rem;
//         printf("enter decimal =");
//         scanf("%d",&dec);
//         while(dec!=0)
//         {
//             rem=dec%2;
//             dec=dec/2;
//             bin=bin+pv*rem;
//             pv=pv*10;
//         }
//     printf("binary is %d",bin);
//     return 0;
//     }

// #include<stdio.h>
// int func( int x)
// {
//     if(x<=0)
//     return 1;
//     return func(x-1)*2*(x-2);
// }
// int main()
// {
//     printf("%f", func(5));
//     return 0;
// }
// #include <stdio.h>
// #define f(x) x+x
// #define h(x) ( x+x )
// int main ( )
// {
// int a= f(4) ;
// int c = f(4);
// int b= h(4)* h( 4 ) ;
// printf("The value o f A= %d\n The value o f B=%d\n" , c*a , b ) ;
// return 0 ;
// }
// #include <stdio.h>
// #include<math.h>

// int main ( )
// {
// int a=2 ,b=10,quo=0,power=0,rem;
// printf ("The output o f a%%b=%d" , a%b ) ;
// printf("The output o f a^b=%d" , a^b ) ;

// while(a!=0);
// {
//     rem=a%2; 
//     a=a/2; 
//     quo=quo+rem*pow(10,power);
//     power++;

// }
// int r,t=0,g=0,e;
//     while(b!=0);
//     {
//         e=b%2; 
//         b=b/2; 
//         t=t+e*pow(10,g);
//         g++;

//     }

// printf("binary is =%d",quo);
// return 0;
// }

// #include<stdio.h>
// int main(){
//     int a;
//     a = -6;
//     printf("%x\a", a);
// }

// #include<stdio.h>
// main()
// {
//  int i,num,MI;
//  printf("Enter number to get multiplicative Inverse\n");
//  scanf("%d",&num);
//  for(i=1;i<=num;i++)
//  {
//   MI=((i*26)+1);
//   if(MI%num==0)
//   {
//    break;
//   }
//  }
//  MI=MI/num;
//  printf("Multiplicative inverse of %d is %d\n",num,MI);
 
// }

// #include<stdio.h>
// int main()
// {
//     int a, b;
//     scanf("%d%d", &a, &b);

//     for (int i = 1; i < 1000; i++)
//     {
//         int c = a*i;/* code */
//         if (c%b == 1)
//         {
//             printf("\n%d", i);
//             break;
//         }
//         else
//         printf("Bhak");
//         break;
//     }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int a, b;
//     scanf("%d%d", &a,&b);
//     int z;
//     for (int i = 1; i <= a && i <= b; i++)
//     {
//         /* code */
//         if (a%i == 0 && b%i == 0)
//         {
//             z = i;
//         }
//         else
//         {
//             z = 1;
//         }
//     }
//     printf("%d", z);
// }
#include<stdio.h>
int main()
{   
    int* p, var;
    printf("Enter value: ");
    scanf("%d", &var);
    p = var;
    printf("\n var is %d at address %p", *p, p);
    var = 8;
    printf("\n var is %d at address %p", *p, p);
    return 0;
}
