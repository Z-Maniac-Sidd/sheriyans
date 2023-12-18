// Date : 15/3/23

// Q.1.................. WAP to print Hello World.....................

// #include<stdio.h>
// void main()
// {
//     printf("Hello World");
// }

// Q.2 ...............WAP to find sum, diff, quotient, product,etc..............

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
// }

//    printf("factorisation= %d\n", a);
//    for (i=1 ; i<=a ; i++)
//     if( a % i ==0)
//     {printf("%d",i);
//     }

// Q.3 .....................WAP to find area of circle.................

// #include<stdio.h>
// void main()
// {
//   float r,a;
//    printf("radius=");
//    scanf("%f",&r);
//    a= 3.14*r*r;
//    printf("area=%f",a);
// }

// Date : 18/3/23

// Q.4....................WAP to find whether a no is even or odd.........
// #include<stdio.h>
// void main()
// {
//     int a,b;
//     printf("enter the numbers=");
//     scanf("%d %d",&a,&b);

//     if (a % 2==0)
//     {
//         printf("%d is even\n",a);
//     }
//     else
//     (printf("%d is odd\n",a));

//     if (b%2==0)
//     {
//         printf("%d is even\n",b);
//     }
//     else
//     (printf("%d is odd\n", b));
// }

// Q.5..............WAP to find the greater no.........
//  #include<stdio.h>
//  void main()
//  {
//      int a,b;
//      printf("enter two nos=");
//      scanf("%d %d",&a,&b);

//     if (a>b)
//     {
//         printf("%d is greater than %d", a,b);
//     }
//     else
//     printf("%d is greater than %d", b,a);
// }

// Q.6.............WAP to find greatest of three nos..............

// #include<stdio.h>
// void main()
// {
//     int a,b,c;
//     printf("enter the numbers=");
//     scanf("%d %d %d",&a,&b,&c);

//     if (a>b && a>c)
//     {
//         printf("%d is greatest\n",a);
//     }

//     if (b>a && b>c)
//     {
//         printf("%d is greatest\n",b);
//     }
//     if(c>a && c>b)
//     {
//     printf("%d is the greatest\n",c);
//     }
// }

// Q.7    (NOT NEEDED)................WAP to find consonant or vowel..............(NOT NEEDED)
//  #include<stdio.h>
//  void main()
//  {
//      char ch;
//      printf("enter any letter=");
//      scanf("%c",&ch);

//     if (ch =='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
//     {
//         printf("%c is a vowel",ch);
//     }
//     else
//     printf("%c is consonant",ch);
// }

// Q.8..............WAP to create a simple calculator using switch case....................

// #include<stdio.h>
// void main()
// {
//     int a,b;
//     char ch;
//     printf("enter + or - or * or / :=\n");
//     scanf("%c",&ch);
//     printf("enter 1at number:=\n");
//     scanf("%d",&a);
//     printf("enter 2nd number:=\n");
//     scanf("%d",&b);

//     switch(ch)
//     {
//     case '+':
//         printf("sum= %d", a+b);
//         break;
//     case '-':
//         printf("diff= %d", a-b);
//         break;
//     case '*':
//         printf("product= %d", a*b);
//         break;
//     case '/':
//         printf("quotient= %d", a/b);
//         break;
//     default:
//         printf("wrong choice");
//         break;
// }
// }

// Q.9..............WAP to check whether a given no is prime or not.............
// #include<stdio.h>
// void main()
// {
//     int a,b,c=0;
//     printf("Enter a number=");
//     scanf("%d",&a);
//     if(a==0 || a==1)
//      c=1;
//      for (b=2; b<=a/2; ++b){
//         if(a%b==0){
//             c=1;
//             break;
//         }
//      }
//      if(c==0)
//      printf("%d is a prime number",a);
//      else
//      printf("%d is not a prime number",a);
// }

// Q.10 .............WAP to find the factorial of a number...........
// #include<stdio.h>
// void main()
// {
//     int n,i,factorial=1;
//     printf("enter a positive no=");
//     scanf("%d",&n);
//     for(i=1; i<=n; i++)
//     {
//         factorial *= i;
//     }
//     printf("factorial of %d is = %d",n,factorial);
// }

// Q11............WAP to find the sum of N natural nos...............
// #include<stdio.h>
// void main()
// {
//     int n,sum=0;
//     printf("Enter a no=");
//     scanf("%d",&n);

//     for(int i=1; i<=n; i++)
//     {
//         sum+=i;
//     }
//     printf("the sum of first %d natural nos is = %d",n,sum);
// }

// Date : 22/3/23

// Q12.........................swap using 3 variable.............................
// #include<stdio.h>
// void main()
// {
//     int a,b,c;
//     printf("Enter 1st number =");
//     scanf("%d",&a);
//     printf("Enter 2nd number =");
//     scanf("%d",&b);
//          c=a;
//          a=b;
//          b=c;
//          printf("After swapping the 1st number is %d and 2nd number is %d.",a,b);
// }

//  Q13.......................swap without 3 variable........................
// #include<stdio.h>
// void main()
// {
//     int a,b;
//     printf("Enter 1st number =");
//     scanf("%d",&a);
//     printf("Enter 2nd number =");
//     scanf("%d",&b);
//          a=a+b;
//          b=a-b;
//          a=a-b;
//          printf("After swapping the 1st number is %d and 2nd number is %d.",a,b);
// }

// Q14........................HCF and LCM of two nos..........................
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
//     printf("HCF=%d\n",divisor);
//     printf("LCM=%d",(num1*num2)/divisor);
//     }
// }

// Q.15.....................Leap year.....................
// #include<stdio.h>
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

// Q.16.....................SUM USING FUNCTION.......................................
// #include<stdio.h>
// int sum(int a,int b);
// int main()
// {
// int a , b;
// printf("enter two integers=");
// scanf("%d %d",&a,&b);

// printf("sum=%d",sum(a,b));
// return 0;
// }
// int sum(int a ,int b)
// {
//     int c;
//     c= a +b;
//     return(c);
// }

// Q.17...................SWAP USING FUNCTION.................
// #include<stdio.h>
// void swap(int a,int b);
// int main()
// {
// int a , b;
// printf("enter two integers=");
// scanf("%d %d",&a,&b);

// printf("Before swapping a=%d and b=%d\n",a,b);
// swap(a,b);
// return 0;
// }
// void swap(int a ,int b)
// {
//     int c;
//     c=a;
//     a=b;
//     b=c;
//     printf("after swapping a=%d and b=%d",a,b);
// }

// Q.18.........................SUM OF DIGITS ........................
// #include<stdio.h>
// void main()
// {
//     int n,r,sum=0;
//     printf("enter no=");
//     scanf("%d",&n);
//     while(n>0)
//     {
//         r=n%10;
//         sum=sum+r;
//         n=n/10;
//     }
//      printf("sum=%d\n",sum);
// }

// Q.19.....................REVERSE A NUMBER............................
// #include<stdio.h>
// void main()
// {
//     int n,r,sum=0;
//     printf("enter no=");
//     scanf("%d",&n);
//     while(n>0)
//     {
//         r=n%10;
//         sum=sum*10+r;
//         n=n/10;
//     }
//      printf("new number=%d",sum);
// }

// Q20.....................PALINDROME...................................
// #include<stdio.h>
// void main()
// {
//     int n,r,sum=0;
//     printf("enter no=");
//     scanf("%d",&n);
//     int x=n;
//     while(n>0)
//     {
//         r=n%10;
//         sum=sum*10+r;
//         n=n/10;
//     }
//         if(sum==x)
//         {
//             printf("its a palindrome");
//         }
//         else
//         printf("its not a palindrome");
//     }

// Q.21 WAP to add all elements in array and print result
// #include<stdio.h>
// int main()
// {
//     int i,sum=0,n;
//     printf("enter size of array= ");
//     scanf("%d",&n);
//     int arr[n];
//     printf("enter values= ");
//     for(i=0;i<n;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     for(i=0;i<n;i++)
//     {
//         sum=sum+arr[i];

//     }
//   printf("sum=%d",sum);
// }

// Q.22. WAP to find max and min
//  #include<stdio.h>
//  int main()
//  {
//      int i,sum=0,n;
//      printf("enter size of array= ");
//      scanf("%d",&n);
//      int arr[n];
//      printf("enter values= ");
//      for(i=0;i<n;i++)
//      {
//          scanf("%d",&arr[i]);
//      }
//      int max=arr[0];
//      int min=arr[0];
//      for(i=0;i<n;i++)
//      {
//          if(max<arr[i])
//          {
//          max=arr[i];
//          }
//       if(min>arr[i])
//          {
//          min=arr[i];
//          }
//      }
//        printf("max=%d\n",max);
//        printf("min=%d",min);
//  }

// Q.22.WAP to print the frequency of each elemnt in array
//  #include<stdio.h>
//  int main()
//  {
//      int j,i,sum=0,n,m;
//      printf("enter size of array= ");
//      scanf("%d",&n);
//      int arr[n];
//     int brr[n];
//     printf("enter values= ");
//     for(i=0;i<n;i++)
//     {
//         scanf("%d",&arr[i]);
//         brr[i]=-1;
//     }
//     for(i=0;i<n;i++)
//     {
//         m=1;
//         for(j=i+1;j<n;j++)
//         {
//             if(arr[i]==arr[j])
//         {
//             m++;
//             brr[j]=0;
//         }
//         }
//     if (brr[i]!=0)
//     {
//         brr[i]=m;
//     }
//     }
//      for(i=0;i<n;i++)
//         {
//             if(brr[i]!=0)
//             {
//                 printf("%d occurs %d times\n",arr[i],brr[i]);
//             }
//         }
//         return 0;
//     }

// Q.23 WAP to find duplicates of array
//  #include<stdio.h>
//  int main()
//  {
//      int j,i,sum=0,n,m;
//      printf("enter size of array= ");
//      scanf("%d",&n);
//      int arr[n];
//      int brr[n];
//      printf("enter values= ");
//      for(i=0;i<n;i++)
//      {
//          scanf("%d",&arr[i]);
//          brr[i]=-1;
//      }
//      for(i=0;i<n;i++)
//      {
//          m=1;
//          for(j=i+1;j<n;j++)
//          {
//              if(arr[i]==arr[j])
//          {
//              m++;
//              brr[j]=0;
//          }
//          }
//      if (brr[i]!=0)
//      {
//          brr[i]=m;
//      }
//      }
//       for(i=0;i<n;i++)
//          {
//              if(brr[i]>1)
//              {
//                  printf("duplicate value=%d\n",arr[i]);
//              }
//          }
//          return 0;
//      }

// Q.24 WAP to search an element in an array and print its position
//  #include<stdio.h>
//  void main()
//  {
//  int i,m,n;
//      printf("enter size of array= ");
//      scanf("%d",&n);
//      int arr[n];
//      printf("enter values= ");
//      for(i=0;i<n;i++)
//      {
//          scanf("%d",&arr[i]);
//      }

//     printf("enter the element you want to find \n");
//     scanf("%d",&m);
//     for(i=0;arr[i]!=m;i++)
//     {

//     }
// printf("found in %dth position",(i+1));
// }

// Q.25 WAP to sort an array using function
//  #include<stdio.h>
//  void sort(int arr[],int n);
//  void main()
//  {
//      int i,n;
//      printf("enter size of array= ");
//      scanf("%d",&n);
//      int arr[n];

//     printf("enter values= ");
//     for(i=0;i<n;i++)
//     {
//         scanf("%d",&arr[i]);
//     }

//   sort(arr,n);

// }
//    void sort(int arr[],int n)
//    {
//     int i,j,temp;
//     for(i=0;i<n-1;i++)
//     {
//         for(j=i+1;j<n;j++)
//         {
//             if(arr[j]<arr[i])
//             {
//                 temp=arr[j];
//                 arr[j]=arr[i];
//                 arr[i]=temp;
//             }
//         }

//     }
// printf("ascending order= ");
//  for(i=0;i<n;i++)
//   {
//     printf("%d\t",arr[i]);
//   }
//    }

// WAP to do matrix multiplication and also include the matrix multiplicative condition in the program

// #include<stdio.h>
// int main()
// {
//     int m1,m2,m3,n1,n2,n3,n,i,j,k;
//     printf("enter no. of rows and columns of 1st matrix");
//     scanf("%d %d",&m1,&n1);
//     printf("enter no. of rows and columns of 2nd matrix");
//     scanf("%d %d",&m2,&n2);
//     int a[m1][n1],b[m2][n2],c[m3][n3];
//     if (n1!=m2)
//     {
//         printf("Cant multiply");
//     }
//     else{
//         for(i=0;i<m1;i++)
//         {
//             for(j=0;j<n1;j++)
//             {
//                 scanf("%d",&a[i][j]);
//             }
//         }
//         for(i=0;i<m2;i++)
//         {
//             for(j=0;j<n2;j++)
//             {
//                 scanf("%d",&b[i][j]);
//             }
//         }
//         for(i=0;i<n;i++)
//         {
//             for(j=0;j<n;j++)
//             { c[i][j]=0;}
//         }
//             for(k=0;k<n;k++)
//             {
//                 c[i][j]+=a[i][k]*b[k][j];
//             }

//         for(i=0;i<n;i++)
//         {for(j=0;j<n;j++)
//         {
//             printf("%d",c[i][j]);
//         }
//         }
//     }
// }

// Q.WAP to find the factorial of a number using recurssion
// #include<stdio.h>
// int fact(int n);
// int main()
// {
// int n;
// printf("Enter a number=");
// scanf("%d",&n);
// printf("Factorial of %d is %d",n,fact(n));
// return 0;
// }
// int fact(int n){
//  if (n>=1)
//  {
//     return n*fact(n-1);
//  }
//  else{

//     return 1;
//  }
// }

// WAP to calculate gcd of two nos using recurssion

//  #include<stdio.h>
// int gcd(int a,int b);
// int main()
// {
// int a,b;
// printf("Enter two numbers=");
// scanf("%d %d",&a,&b);
// printf("GCD of %d and %d is %d",a,b,gcd(a,b));
// return 0;
// }
// int gcd(int a,int b){
//  if (b!=0)
//  {
//     return gcd(b,a%b);
//  }
//  else{

//     return a;
//  }
// }

// WAP to find fibonacci series
// #include<stdio.h>

// int fib(int a){
//  if (a==0)
//  {

//     return 0;
//  }
//  else if (a==1)
//  {
//     /* code */return 1;
//  }
//  else{
//     return fib(a-1)+fib(a-2);
//  }
// }
// int main()
// {
// int a;
// printf("Enter number=");
// scanf("%d",&a);
// int i;
// for(i=0;i<a;i++){
// printf("%d\t",fib(i));
// }
// return 0;
// }

// WAP to count the no of digts and find the sum of the numbers
// #include<stdio.h>
// int sum(int n);
// int countg(int n);
// int main()
// {
// int n;
// printf("Enter a number=");
// scanf("%d",&n);
// int c=countg(n);
// int s=sum(n);
//  printf("count=%d\n",c);
//  printf("sum=%d",s);

// return 0;
// }
// int countg(int n)
// {
// static int count =0;
// if(n>0)
// {
//     count++;
//     countg(n/10);
// }
// else{
//     return count;
// }
// }

// int sum(int n)
// {
//     if(n==0)
// {
//     return 0;
// }
// else
// {
//     return sum(n/10)+(n%10);
// }
// }

// #include<stdio.h>
// #include<string.h>
// void main()
// {
//     char s1[20],s2[20];
//     int comp;
//     printf("enter string:");
//     scanf("%s",s1);
//     strcpy(s2,s1);
//     strrev(s2);
//     comp=strcmp(s1,s2);
//     if(comp==0)
//     {
//         printf("palindrome");

//     }
//     else
//     printf("not a palindrome");
// }

// #include<stdio.h>
// void main()
// {
//     printf("%d",'a'>'A');
// }

//................... WAP to swap two variables using pointers...........................

// #include<stdio.h>
// void swap(int*a,int*b);
// void main()
// {
//     int x,y;
//     printf("Enter numbers: ");
//     scanf("%d %d",&x,&y);
//     swap(&x,&y);
//     printf("a:%d and b=%d",x,y);
// }
// void swap(int *a,int*b)
// {
// int temp=*b;
// *b=*a;
// *a=temp;
// }

// .....................WAP to reverse a string using pointers............................

// #include<stdio.h>
// void main()
// {
//     char s[20];
//     int len=0,i;
//     char *p =s;
//     printf("Enter string: ");
//     scanf("%s",s);
//     for(i=0;s[i]!='\0';i++)
//     {
//         len++;
//     }
//     printf("reverse of string is :");
//     for(i=len-1;i>=0;i--)
//     {
//         printf("%c",*(p+i));
//     }

// }


// .......................WAP to check if string is palindrome...........................
// #include <stdio.h>
// void main()
// {
//     char s1[20], s2[20];
//     int len = 0, i, j, check = 0;
//     char *p = s1;
//     char *q = s2;
//     printf("Enter string: ");
//     scanf("%s", s1);
//     for (i = 0; s1[i] != '\0'; i++)
//     {
//         len++;
//     }
//     for (i = len - 1, j = 0; i >= 0, j < len; j++, i--)
//     {
//         *(q + j) = *(p + i);
//     }

//     for (i = 0, j = 0; i < len, j < len; j++, i++)
//     {
//         if (*(p + i) != *(q + j))
//         {
//             check = 1;
//             break;
//         }
//     }
//     if (check == 0)
//     //

//     {
//         printf("its a palindrome");
//     }
//     else
//     {
//         printf("not a palindrome");
//     }
// }

//................... WAP to pass an array in a function & find max min value..................
// #include<stdio.h>
// int fn(int *a,int n)
// {
//     int max= *a, min = *a;
//     for (int i = 0; i < n; i++)
//     {
//         /* code */
//         if (*(a+i)>max)
//         {
//             /* code */
//             max = *(a+i);
//         }
//         if (*(a+i)<min)
//         {
//             /* code */
//             min = *(a+i);
//         }
        
//     }
    
// }
// int main(){
//     int s[100] = {0};
//     int limit;
//     scanf("%d", &limit);
//     for (int i = 0; i < limit; i++)
//     {
//         /* code */
//         scanf("%d", &s[i]);
//     }
//     fn(s, limit)
// }

// Iterative C program to find modular
// inverse using extended Euclid algorithm

#include <stdio.h>

// Returns modulo inverse of a with respect
// to m using extended Euclid Algorithm
// Assumption: a and m are coprimes, i.e.,
// gcd(A, M) = 1
int modInverse(int A, int M)
{
	int m0 = M;
	int y = 0, x = 1;

	if (M == 1)
		return 0;

	while (A > 1) {
		// q is quotient
		int q = A / M;
		int t = M;

		// m is remainder now, process same as
		// Euclid's algo
		M = A % M, A = t;
		t = y;

		// Update y and x
		y = x - q * y;
		x = t;
	}

	// Make x positive
	if (x < 0)
		x += m0;

	return x;
}

// Driver Code
int main()
{
	int A = 3, M = 11;

	// Function call
	printf("Modular multiplicative inverse is %d\n",
		modInverse(A, M));
	return 0;
}
