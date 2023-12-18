

//..............WAP to find sinx cosx tanx..........
// #include<stdio.h>
// #include<math.h>
// void main()
// {
// float x,sinx,cosx,tanx;
// printf("x=");
// scanf("%f",&x);
// sinx=sin(x*(3.142/180));
// printf("sinx=%f\n",sinx);
// cosx=cos(x*(3.142/180));
// printf("cosx=%f\n",cosx);
// tanx=tan(x*(3.142/180));
// printf("tanx=%f",tanx);
// }



//..............WAP to print ASCII value..............
// #include<stdio.h>
// void main()
// {
//     char c;
//     printf("c=");
//     scanf("%c",&c);
//     printf("ASCII value of %c=%d", c,c);
// }




// .............WAP to print distance in m , cm , in ..........
// #include<stdio.h>
// void main()
// {
//     float x,a,b,c;
//     printf("Enter distance in km=");
//     scanf("%f",&x);
//     a=x*1000;
//     b=x*100000;
//     c=x*39370.0787;
//     printf("distance in metres=%f\n",a);
//     printf("distance in centimetres=%f\n",b);
//     printf("distance in inches=%f\n",c);
//  }



//..............WAP to find the no of 100,50 10 rs notes in the input amount................
// #include<stdio.h>
// void main()
// {
//     int amount,hun,fif,ten;
//     printf("Enter amount=");
//     scanf("%d",&amount);
//     hun=amount/100;
//     amount=amount%100;
//     fif=amount/50;
//     amount=amount%50;
//     ten=amount/10;
//     amount=amount%10;

//     printf("hundreds=%d\nfifties=%d\ntens=%d",hun,fif,ten);
// }

// .............WAP to input a 5 digit no and add 2 to each digit.................
// #include<stdio.h>
// void main()
// {
//     long int num,a,n,newnum;
//     printf("Enter 5 digit no=");
//     scanf("%d",&num);

//     a= num/10000+2;
//     n=num%10000;
//     newnum=newnum+a*10000;

//     a= n/1000+2;
//     n=n%1000;
//     newnum=newnum+a*1000;

//     a= n/100+2;
//     n=n%100;
//     newnum=newnum+a*100;

//     a= n/10+2;
//     n=n%10;
//     newnum=newnum+a*10;
    
//     a= n+2;
//     newnum=newnum+a;


//     printf("new nm=%d",newnum);
// }



//...............   WAP to check profit and loss..................
// #include<stdio.h>
// void main()
// {
//     int CP,SP,P,L;  
//     printf("Enter cost price=\n");
//     scanf("%d",&CP);
//     printf("Enter selling price=\n");
//     scanf("%d",&SP);
//     P=SP-CP;
//     L=CP-SP;
//     if (SP>CP)
//     {
//         printf("There is a profit of %d",P);
//     }
//     else
//     printf("There is a loss of %d",L);
// }


// ..................WAP to find ratio and if ratio is > 0 then swap number using 3rd variable..............
// #include<stdio.h>
// void main()
// {
//     int a,b,ratio,temp;
//     printf("Enter 1st number =");
//     scanf("%d",&a);
//     printf("Enter 2nd number =");
//     scanf("%d",&b);
//     ratio= a/b;

//     if (ratio>0)
//     {
//          temp=a;
//          a=b;
//          b=temp;
//           printf("After swaping the first number is %d and 2nd number is %d.",a,b);
//     }

//     else
//     printf("i cannot swap the numbers since ratio is less than zero.");
// }



// ............WAP to check if th eyear is leap year or not...........
// #include<stdio.h>
// void main()
// {
//     int y;
//     printf("Enter year=");
//     scanf("%d",&y);

// if(y%4==0 &&(y%400==0 || y%100!=0))
// {
// printf("it is leap year");
// }
// else
// printf("it is not a leap year");
// }




// ............WAP to check if a traingle is valid or not...........
// #include<stdio.h>
// void main()
// {
//     int a,b,c;
//     printf("Enter the angles of the triangles = ");
//     scanf("%d %d %d",&a,&b,&c);

//     if(a+b+c==180)
//     {printf("The triangle is valid");
//     }
//     else
//     printf("The triangle is not valid");
// }




// ............WAP to find greatest no among 3 nos using nested if else statement...............
// #include <stdio.h>
// void main()
// {
//     int a,b,c;
//     printf("enter three nos= ");
//     scanf("%d %d %d", &a,&b,&c);

//     if(a>b)
//     {
//         if(a>c)
//         {printf("a is greatest");}
//         else
//         {printf("c is greatest");}
//     }
//     else
//     {
//             if(b>c)
//            { printf("b is greatest");}

//             else
//             {printf("c is greatest");}
//         }
// }
   


//    ..........WAP to  show fine imposed 50paise for less than 5 days, 1rs for 6-10 days,
//              5 rs for more than 10 days, and membership cancelled for more than 30 days............

// #include<stdio.h>
// void main()
// {
//     int a;
//     printf("enter no of days= ");
//     scanf("%d",&a);

//     if(a<=10)
//     {
//         if(a<=5)
//         {printf("Fine of Rs%f",.5*a);}

//         else
//         {printf("Fine of Rs%d",1*a);}

//     }
//         else{

//         if(a>10 && a<=30)

//         {printf("Fine of Rs%d",5*a);}

//         else
//         {printf("Membership cancelled");}
//     }
// } 
        


//............... WAP to creae a report card using ele if statement................
//    #include<stdio.h>
//    void main()
//    {
//     int m;
//     printf("Enter marks =");
//     scanf("%d",&m);

//     if(m<=40)
//     {printf("FAIL");}

//     else if(m<=50)
//     {printf("C");}

//     else if(m<=60)
//     {printf("B");}

//     else if(m<=70)
//     {printf("A");}

//     else if(m<=80)
//     {printf("A+");}

//     else
//     {printf("A++");}
//    }



// ....................................................................................................
// #include<stdio.h>
// void main()
// {
//     while(1)
//      {
//             printf("Sidddharth madarchod");
//      }
// }



// .....................................................................................................
// #include<stdio.h>
// void main()
// {
//     int i=1;
//     while(i)
//     {
//         printf("%d\n",i);
//         ++i;
//     }
// }


// ....................WAP to print even numbers between 1 and 100............................
// #include<stdio.h>
// void main()
// {
//     int i=1;
//     printf("even numbers are = \n");
//     while(i<=100)
//     {
//         if(i %2 == 0)
//         {
//         printf("%d\n",i);}
//        i++;
//     }
// }



// ............WAP to find nos between 1 and 100 that are divisible by 2 and 3................
// #include<stdio.h>
// void main()
// { 
//     int i=1;
//     printf("required numbers are = ");
//     while(i<=100)
//     {
//         if(i %2 == 0 && i%3==0)
//         {
//         printf("%d ",i);}
//        i++;
//     }
// }

// .............WAP to find factorial of given no......................
// #include<stdio.h>
// void main()
// {
//     int n,i=1,fact=1;

//     printf("Enter a positive no =");
//     scanf("%d",&n);

//     while(i<=n)
//     {
//         fact=fact*i;
//         i++;
//     }
//     printf("factorial= %d",fact);
// }



// .................WAP to print ASCII value............
// #include<stdio.h>
// void main()
// {
//     int i=0;
//     while(i<=255)
//     {printf("%c=%d\t",i,i);
//     i++;}
// }

// ............WAP to find armstrong number between 1 and 500.............
// #include<stdio.h>
// void main()
// {
//     int i=1,a,b,c;
//     while(i<=500)
// {
//     a=i%10;
//     b=i%100;
//     b=(b-a)/10;
//     c=i/100;
//      if((a*a*a)+(b*b*b)+(c*c*c)==i)
//      {printf("%d\n",i);}
//      i++;
// }
// }

// ...........WAP to reverse three digit number input from user................
// #include<stdio.h>
// void main()
// {
//     int n,r,sum=0;
//     printf("enter number=");
//     scanf("%d",&n);
//     while(n>0)
//     {
//         r=n%10;
//         sum=sum*10+r;
//         n=n/10;
//     }
//     printf("new number=%d",sum);
//     }


// ...........WAP to find sum of digits of the number..............
// #include<stdio.h>
// void main()
// {
//     int n,r,sum=0;
//     printf("enter no=");
//     scanf("%d",&n);  
// while(n>0)
// {
//     r=n%10;
//     sum=sum+r;
//     n=n/10;
// }   
//      printf("sum=%d\n",sum);
// }



// // ..........infinite loop...........
// #include<stdio.h>
// void main()
// {
//     while(1)
//     {printf("infinite loop\t");}
// }


// ........................XXXXXXXXXXXXXXXXXX.............................
// #include<stdio.h>
// #include<math.h>
// int main()
// {
//     int dec,quo=0,power=0,rem;
//     printf("enter decimal=");
//     scanf("%d",&dec);
//     while(dec!=0);
//     {
//         rem=dec%2; 
//         dec=dec/2; 
//         quo=quo+rem*pow(10,power);
//         power++;

//     }

//     printf("binary is =%d",quo);
//     return 0;
// }


// .................star pattern.........................
// #include<stdio.h>
// void main()
// {
//     int n,i=1,j;
//     printf("Enter no.= ");
//     scanf("%d",&n);

//     while(i<=n)
//     {
//         j=1;
//         while(j<=i)
//         {
//             printf("*");
//             j++;
//         }
//         i++;
//         printf("\n");
//     }
// }



// .................................................

// #include<stdio.h>
// void main()
// {
//     int n,i=1,j;
//     printf("Enter no.= ");
//     scanf("%d",&n);

//     while(i<=n)
//     {
//         j=1;
//         while(j<=n)
//         {
//             printf("%d",i);
//             j++;
//         }
//         i++;
//         printf("\n");
//     }
// }




// .............sum of all odd integers between 1 to 100..............
// #include <stdio.h>
// void main()
// {
//     int n=1,sum=0;
//     do
//     {sum=sum+n;
//     n=n+2;
//     
//     while(n<=100);
//     printf("sum=%d",sum);   
// }
// .....................................................................
// #include<stdio.h>
// #include<math.h>
// void main()
// {
//     double i=1,sum=0,n,x;
//     printf("n=");
//     scanf("%ld",&n);
//     printf("x=");
//     scanf("%ld",&x);
//     do
//     {
//         sum=sum+(pow(x,i)/i);
//         i++;
//     } while (i<=n);

//     printf("sum=%ld",sum);    
// }

// #include<stdio.h>
// void main()
// {
//     for(int i=1;printf("gateacademy");printf("gateacademy"))
//     {
//         printf("sam");
//     }
// }

// ........................................
// #include<stdio.h>
// void main()
// {
//     int i,n;
//     for (i=1;1<=n;i=i*2)
//     {
//         printf("anish\n");
//     }
// }


// ........................................
// #include<stdio.h>
// void main()
// {
//    int sum=0;
//     for(int i=1;i<=50;i++)
// {     sum+=i; 
//         }
//         printf("sum= %d",sum);
// }

// .........................factorial..............................

// #include<stdio.h>
// void main()
// {
//     int n,i,fact=1;
//     printf("enter no=");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++)
//     {
//         fact*=i;
//         }
//     printf("factorial=%d",fact);
// }

// .....................prime number.............................
// #include<stdio.h>
// void main()
// {
//     int n,i,c=0;
//     printf("enter a no=");
//     scanf("%d",&n);

//     for(i=1;i<=n;i++)
//     {
//         if(n%i==0)
//         {c++;}
//     }
//     if(c==2)
//     {printf("it is prime");}
//     else
//     printf("its not prime");
// }

// ......................factors......................
// #include<stdio.h>
// void main()
// {
//     int i,n;
//     printf("enter no");
//     scanf("%d",&n);
// printf("the factors are\n");
//     for(i=1;i<=n;i++)
//     {
//         if(n%i==0)
//         {
        
//         printf("%d\n",i);}
//     }
// }


// ...................ARMSTRONG NUMBER.....................
// #include<stdio.h>
// void main()
// {
//     int i=1,a,b,c;
//     while(i<=500)
//     {
//         a=i/100;
//         b=i%10;
//         c=i%100;
//         c=(c-b)/10;

//         if ((a*a*a)+(b*b*b)+(c*c*c)==i)
//         {
//             printf(" %d\n",i);
         
//         }
//            i++;
//     }
// }


// ........................................
// #include<stdio.h>
// void main()
// {
//     int n,sum=0,r;
//     printf("n = ");
//     scanf("%d",&n);
//     for (; n!=0;n=n/10)
//     {
//        r= n%10;
//        sum=sum+r;

//     }
//     printf("sum of digits = %d",sum);
// }


// .....................ARMSTRoNG......................
// #include<stdio.h>
// void main()
// {
//     int r,n,sum=0,temp;
//     printf("n=");
//     scanf("%d",&n);
// for(temp=n;n!=0;n=n/10)

// {
//     r=n%10;
//     sum=sum+r*r*r;
// }
// if(temp==sum)
// {printf("its an armstrong no");}

// else
// printf("not an armstrong no");


// }

// ......................PALINDROME..........................
// #include<stdio.h>
// void main()
// {
//     int r,n,sum=0,temp;
//     printf("n=");
//     scanf("%d",&n);
// for(temp=n;n!=0;n=n/10)
// {
//     r=n%10;
//     sum=sum*10+ r;
// }
// if(temp==sum)
// {printf("palindrome");}

// else
// printf("not a palindrome");
// }



// ..................STRONG NUMBER...........................
// #include<stdio.h>
// #include<math.h>
// void main()
// {
//     int i,n,r,fact=1,temp, sum=0;
//     printf("enter no=");
//     scanf("%d",&n);
//     temp=n;
//     while (n)
//     {
//         i=1,fact=1;
//         r=n%10;
//         while(i<=r)
//         { fact*=i;
//         i++;}
//     sum+=n;
//     n=n/10;}
//     if (temp==sum)
//     {printf("strong no");}
//     else
//     printf("not a strong no");
    
// }



// ..........................FIBONACCI SERIES........................
// {
//     int i,n,sum=0,a=0,b=1;
//      printf("enter no=");
//      scanf("%d",&n);
//      for (i=0;i<=(n-2);i++)
//      {
//         sum=a+b;
//         a=b;
//         b=sum;
//         printf("%d ",sum);
//      }
// }

// .....................GENERATE A SERIES........................
// {
//     float n,i,x,sum=0,fact=1;
//     printf("n=");
//     scanf("%f",&n);
//     printf("x=");
//     scanf("%f",&x);
//     for(i=1;i<=n;i++)
//     {
//         fact*=i;
//         sum=sum+pow(x,i)/fact; 
//     }
//        printf("sum=%f",sum);
// }


// ............................................................................
// {
//     float n,i,x,sum=0,fact=1;
//     printf("n=");
//     scanf("%f",&n);
//     printf("x=");
//     scanf("%f",&x);
//     for(i=1;i<=n;i++)
//     {
//         fact*=i;
//         sum=sum+pow(x,i)/pow(i,i); 
//     }
//        printf("sum=%f",sum);
// }



// .......................................
// #include<stdio.h>
// void main()
// {
//     int i,j;
//     for (i=5;i>=1;i--)
//     {
//         for(j=5;j>=i;j--)
//         {printf(" %d ",j);}
//         printf("\n");

//     }
// }


// ..............................................................
// #include<stdio.h>
// void main()
// {
//     int i,j,k=1;
//     for (i=1;i<=5;i++)
//     {
//         for(j=1;j<=i;j++)
//         {printf(" %d ",k++);}
//         printf("\n");

//     }
// }


// .............................................................
// #include<stdio.h>
// void main()
// {
//     int i,j,k=1;
//     for (i=1;i<=5;i++)
//     {
//         for(j=i;j>=1;j--)
//         {printf(" %c ",j+64);}
//         printf("\n");

//     }
// }


// .............................ARRAY.......................
// #include<stdio.h>
// void main()
// {
// int a[5],i;
// printf("enter element\n");

// for(i=0;i<5;i++)
// {
// scanf("%d",&a[i]);
// }
// printf("values are ............\n");
// for(i=0;i<5;i++)
// {
//     printf("%d\n",a[i]);
// }
// }




// ..............................................................
// #include <stdio.h>
// int main()
// {
// int n , i , j,count;

// printf("enter upto whcih number prime numbers to be printed\n");
// scanf("%d, &n");
// for(i=2;i<=n;i++)
// {
//      count=0;
//     for(j=2;j<i;j++)
//     {
//         if(i%j==0){
//               count=1;
//               break;
//              }  
//     }
//     if(count!=0){
//         printf("%d",i);
//     }
// }
// }


// ..........................
// #include<stdio.h>
// void main()
// {   int a[5],p,i,v;
//     for(i=0;i<5;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     printf("p=");
//     scanf("%d",&p); 
//     printf("v=");
//     scanf("%d",&v);
//     for(i=4;i>=(p-1);i--)
//     {
//         a[i+1]=a[i];
//     }
//     a[p-1]=v;
//     for(i=0;i<=5;i++)
//     {
//         printf("%d",a[i]);
//     }
// }


// #include <stdio.h>

 
// void max_min(int num[],int length,int *max,int *min);
// int main()
//  {
//     int len;
//     int num[len];
//     int i,max,min;
//     printf("How many numbers do you wanna input ?");
//     scanf("%d",&len);
//     printf("Enter %d numbers to find the biggest and small (enter x to terminate)",len);
//     for(i=0;i<len-1;i++)
//     {
//         scanf("%d",&num[i]);
//     }
 
//     max_min(num,len,&max,&min);
 
//     printf("Biggest number :%d",max);
//     printf("Smallest number :%d",min);
 
//     system("pause");
//     return 0;
// }
 
// void max_min(int num[],int length,int *max,int *min)
// {
//     int k;
//     for(k=0;k<length-1;k++)
//     {
//         if(num[k]>*max)
//             *max=num[k];
//             else if(num[k]<*min)
//                 *min=num[k];
//     }
// }

// #include<stdio.h>
// #include<stdlib.h>
// void main(){
//     int r, c;
//     printf("Enter row and column: ");
//     scanf("%d%d", &r, &c);

//     int *ptr = malloc((r*c) *sizeof(int));
//     for (int i = 0; i < r*c; i++)
//     {
//         /* code */
//         ptr[i] = i+1;
//     }
//     for (int i = 0; i < r; i++)
//     {
//         /* code */
//         for (int j = 0; j < c; j++)
//         {
//             /* code */
//             printf("%d", ptr[i*c+j]);
//         }
//         printf("\n");
//     }
//     free(ptr);
// }

