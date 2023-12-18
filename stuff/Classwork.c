




//Q.1.................. WAP to print Hello World.....................

#include <stdio.h>
void main()
{
    printf("Hello World");

}




//Q.2 ...............WAP to find sum, diff, quotient, product,etc..............
// #include<stdio.h>
// void main()
// {
//    float a,b;
//    printf("a=");
//    scanf("%f",&a);
//    printf("b=");
//    scanf("%f",&b);
//    printf("sum= %f\n", a+b);
//    printf("difference= %f\n", a-b);
//    printf("product= %f\n", a*b);
//    printf("quotient= %f\n", a/b);
//   //4 printf("factorisation= %d\n", a+b);

// }

//Q.3 .....................WAP to find area of circle.................

// #include<stdio.h>
// void main()
// {
//   int r,a;
//    printf("radius=");
//    scanf("%d",&r);
//    a= 3.14*r*r;
//    printf("area=%d",a);
// }

//...................................................................................

// #include<stdio.h>
// int main()
// {
//     int ch,a,b;
//     printf("enter 1 for add and 2 for sub");
//     scanf("%d",&ch);
//     printf("Enter num1 and num2=");
//     scanf("%d %d",&a,&b);
//     switch (ch)
//     {
//         case 1:
//         printf("Sum =%d",a+b);
//         break;

//         case 2:
//         printf("Diff =%d",a-b);
//         break;

//         default:
//         printf("wrong choice");
//         break;
//     }
//     return(0);
// }

//......................................................................................
// #include<stdio.h>
// void main()
// {
//     int x;
//     for(x=1; x<=3; x++)
//     {
//         printf("%d",x);
//     }
// }

//.......................................................................................
    
// #include<stdio.h>
// void main()
// {
//     int x;
//     for(x=1; x<=10; x++)
//     {
//         printf("3*%d=%d\n",x,3*x);
//     }
// }


//................................................................
// #include<stdio.h>
// void main()
// {
//     int x;
//     for( ; ; )
//     {
//         printf("NITS");
//         printf("No=");
//         scanf("%d",&x);
//         if(x==20)
//         break;
//      }
// }



//..................................................................
// #include<stdio.h>
// #include<math.h>
// void main()
// {
//     int bin, dec=0, power =0,rem;
//     printf("Enter binary num=");
//     scanf("%d",&bin);

//     while(bin!=0)
//    {
//         rem=bin%10;
//         bin=bin/10;
//         dec=dec+rem*pow(2,power);
//         power++;

//     } printf("decimal is %d",dec);
    
// }

// ...........................................................................
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
// }

// ...................GCD of two nos...................
// #include<stdio.h>
// void main()
// {
//     int num1,num2,divisor,dividend,rem;
//     printf("enter two nos=");
//     scanf("%d %d",&num1, &num2);

//     if((num1!=0) && (num2!=0))
//     {divisor=num1;
//     dividend=num2;

//     while(dividend%divisor!=0)
//     {
//         rem=dividend%divisor;
//         dividend=divisor;
//         divisor=rem;
//     }
//     printf("GCD=%d",divisor);   
//     }
// }



// ....................GCD 2nd code......................................
// #include<stdio.h>
// void main()
// {
//     int num1,num2,i,GCD;
//     printf("Enter two nos=");
//     scanf("%d %d",&num1,&num2);

//     for(i=1; i<=num1 && i<=num2;i++)
//     {
//         if((num1%i==0)&& (num2%i==0))
//         {
//             GCD=i;
//         }      
//     }
//  printf("GCD=%d",GCD);
// }

// ............................................................
// #include<stdio.h>
// void main()
// {
//     int x,q,r1,r2,r,t1=0,t2=1,t;
//     x=(1/r2)%r1;
//     t=t1-q*t2;
// MULTIPLICative inverse ......................................
// }



// .............................................................
// #include<stdio.h>
// void main()
// {
//     int i,n1,n0,n2,n3,n4,n5, a[20];
//     scanf("Enter values in the array");
//     for(i=0;i<5;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     printf("Enter numbers randomnly from 0 to 4");
//     scanf("%d",&n0);
//     scanf("%d",&n1);
//     scanf("%d",&n2);
//     scanf("%d",&n3);
//     scanf("%d",&n4);

// }

// #include <stdio.h>
// int main()
// {
//     int i,j, n;
//     printf("Enter size:");
//     scanf("%d", &n);
//     int arr[n], prr[n], srr[n], reverse[n];
//     printf("Enter random numbers:\n");
//     for (i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }

//     printf("Enter permutation sequence(value 0 to n-1):\n");
//     for ( i = 0; i < n; i++)
//     {
//         scanf("%d", &prr[i]);
//         if (prr[i] >= n|| prr[i] < 0)
//         {
//             goto end;
//         }
//     }
//     for ( i = 0; i < n; i++)
//     {
//         for (j = i + 1; j < n; j++)
//         {
//             if (prr[i] == prr[j])
//             {
//                 goto end;
//             }
//         }
//     }
//     printf("Scrambled output:\n");

//     for ( i = 0; i < n; i++)
//     {
//         srr[i]=arr[prr[i]];
//         printf("%d\t", arr[prr[i]]);
//     }
//     printf("\ncompute reverse permutation sequence:\n");
//     for (i = 0; i <n; i++)
//     {
//         for ( j = 0; j < n; j++)
//         {
//             if (i == prr[j])
//             {   reverse[i]=j;
//                 printf("%d\t", j);
//             }
//         }
//     }
//     printf("\nscrambled op:\n");
//     for (i = 0; i < n; i++)
//     {

//         printf("%d\t", srr[reverse[i]]);
//     }
//     if (0)
//     {
//     end:
//         printf("wrong input!");
//     }
//     return 0;
// }


// #include<stdio.h>
// void main()
// {
//     int a,b,c,gcd,lcm,num1,num2;
//     printf("enter two nos");
//     scanf("%d %d",&num1,&num2);
//     a=num1;
//     b=num2;
//     while(b>0)
//        { c=b;
//         b=a%b;
//         a=c;
//        }
//     gcd=a;
//     lcm=(num1*num2)/gcd;
//     printf("gcd=%d\nlcm=%d",gcd,lcm);
//}
//     #include<stdio.h>
// void main()
// {
//     int y;
//     printf("Enter a year= ");
//     scanf("%d",&y);
//     if(y%4==0 &&(y%400==0 || y%100!=0))
//     {
//         printf("its a leap year");
//     }
//     else 
//     printf("its not a leap year");
// }





    
