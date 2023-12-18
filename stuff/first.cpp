// #include<stdio.h>
// int main()
//     {   
//         float a, b;
//         printf("Enter radius: ");
//         scanf("%f",&a);
//         printf("Area is %f", 3.14*a*a);
//        return 0;
//     }


// #include<stdio.h>
// int main(){
//     int a;
//     printf("Enter number to check: ");
//     scanf("%d", &a);
//     if (a%2 == 0)
//     {
//         printf("%d is even", a);
//     }
//     else
//     {
//         printf("%d is odd", a);
//     }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     char ch;
//     printf("Enter alphabet: ");
//     scanf("%c", &ch);
//     if (ch == 'a' ||ch == 'e' ||ch == 'i' ||ch == 'o' ||ch == 'u' )
//     {
//         printf("%c is vowel",ch);
//     }
//     else
//     {
//         printf("%c is consonant", ch);
//     }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int a,b,c,d;
//     char ch;
    
//     printf("Enter operation: ");
//     scanf("%c", &ch);

//     printf("Enter number1: ");
//     scanf("%d", &a);
//     printf("Enter number2: ");
//     scanf("%d", &b);

//     switch (ch)
//     {
//     case '+':
//         printf("Sum of %d and %d is %d", a, b, a+b);
//         break;
//     case '-':
//         printf("Difference of %d and %d is %d", a, b, a-b);
//         break;
//     case '*':
//         printf("Product of %d and %d is %d", a, b, a*b);
//         break;
//     case '/':
//         printf("Quotient of %d and %d is %d", a, b, a/b);
//         break;
//     default:
//         printf("Wrong choice");
//         break;
//     }
// }

// #include<stdio.h>
// int main(){
//     int a,b;
//     printf("Enter number: ");
//     scanf("%d", &a);
//     b = 0;
//     for (int i = 2; i < a; i++)
//     {
//         if (a%i == 0)
//         {
//             b = 1;
//         }
        
//     }
//     if (b == 0)
//     {
//         printf("%d is prime", a);
//     }
//     else
//     {
//         printf("%d is not prime", a);
//     }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int a,b = 0;

//     printf("Enter number: ");
//     scanf("%d", &a);

//     for (int i = 1; i < a+1; i++)
//     {
//         b += i;
//     }
//     printf("sum of %d is %d", a, b);
//     return 0;
   
// }

// line 250

// #include<stdio.h>
// int main(){
//     int a, b, divisor, dividend, rem;
    
//     printf("Enter number 1: ");
//     scanf("%d", &a);

//     printf("Enter number 2: ");
//     scanf("%d", &b);

//     while ( b%a!= 0)
//     {
//         rem = a%b;
//         b = a;
//         a = rem;
//     }
//     printf("%d is HCF\n", a);
//     printf("%d is LCM\n", (a*b)/rem);
//     return 0;
//     }

// #include<stdio.h>
// int main()
// {
//     int num1,num2,divisor,dividend,rem;
//     printf("enter two nos=");
//     scanf("%d %d",&num1, &num2);
//     if((num1!=0) && (num2!=0))
//         {divisor=num1;
//         dividend=num2;
//         while(dividend%divisor!=0)
//         {
//             rem=dividend%divisor;
//             dividend=divisor;
//             divisor=rem;
//         }
//         printf("HCF=%d\n",divisor);
//         printf("LCM=%d",(num1*num2)/divisor);
//         }
//     else
//     {
//         printf("Wrong");
//     }
//     return 0;
// }


// #include<stdio.h>
// int main(){
//     int y;
//     printf("Enter year: ");
//     scanf("%d", &y);

//     if (y%4 == 0 && (y%100 != 0 || y%400 == 0))
//     {
//         printf("%d is a leap year", y);
//     }
//     else
//     {
//         printf("%d is not leap", y);
//     }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int a, b, c = 0;
    
//     printf("Enter number: ");
//     scanf("%d", &a);
//     while (a>0)
//     {
//         b = a%10;
//         c = c+b;
//         a = a/10;
//     }
//     printf("Sum of digit is %d", c);
//     return 0;
    
// }



// #include<stdio.h>
// int main()
// {
//     int a, b, c = 0, d;
//     printf("Enter number: ");
//     scanf("%d", &a);
//     d = a;
//     while (a>0)
//     {
//         b = a%10;
//         c = c*10+b;
//         a = a/10;
//     }

//     if (d == c)
//     {
//         printf("it is palindrome");
//     }
//     else
//     {
//         printf("not palindrome");
//     }

//     // printf("Reverse is %d", c);
//     return 0;
// }


// #include<stdio.h>
// int main(){
//     int a, b = 0;
    
//     printf("Enter size of array: ");
//     scanf("%d", &a);

//     int arr[a];
//     for (int i = 0; i < a; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     for (int i = 0; i < a; i++)
//     {
//         b = b+arr[i];
//     }
//     printf("%d", b);
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int a,b;
    
//     printf("Enter size of array: ");
//     scanf("%d", &a);
    
//     int arr[a];

//     for (int i = 0; i < a; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     int max=arr[0];
//     int min=arr[0];

//     for (int i = 0; i < a; i++)
//     {
//         if (max<arr[i])
//         {
//             max = arr[i];
//         }
//         else if (min>arr[i])
//         {
//             min = arr[i];
//         }
        
//     }
    
//     printf("%d is max\n", max);
//     printf("%d is min", min);
//     return 0;
// }

//420


// #include<stdio.h>
// int main(){
//     int a;
//     char name[30];

//     printf("Enter college name: ");
//     fgets(name, sizeof(name), stdin);

//     puts(name);


//     // scanf("%s", &name);

//     // printf("%s", name);

// }



// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char a1[15], a2[15];
//     int comp;

//     printf("College name: ");
//     scanf("%s", &a1);
//     strcpy(a2,a1);
//     comp = strcmp(a1, strrev(a2));
//     // printf("%d", &comp);

//     if(comp == 0)
//     {
//         printf("\n palindrme");
//     }
//     else
//     {
//         printf("\n not palindrome");
//     }
// }


// #include<stdio.h>
// #include<string.h>

// int main()
// {
//     char name[30];
//     printf("Enter college name: ");
//     fgets(name, sizeof(name), stdin);

//     printf("In upper case: %s", strupr(name));
//     printf("In lower case: %s", strlwr(name));
// }


// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int n, sum, i;
//     int* ptr;

//     printf("Enter number of elements: ");
//     scanf("%d", &n);
    
//     ptr = (int*)malloc(n * sizeof(int));
    

 
//     sum = 0;
//     for (int i = 0; i < n; i++)
//         {
//             scanf("%d", (ptr+i));
//             sum += *(ptr + i);
//         }

//     printf("sum = %d", sum);

//     free(ptr);
//     return 0;
    

// }

// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//     int* ptr; //declaration of integer pointer
//     int limit; //to store array limit
//     int i; //loop counter
//     int sum; //to store sum of all elements

//     printf("Enter limit of the array: ");
//     scanf("%d", &limit);

//     //declare memory dynamically
//     ptr = (int*)malloc(limit * sizeof(int));

//     //read array elements
//     for (i = 0; i < limit; i++) {
//         printf("Enter element %02d: ", i + 1);
//         scanf("%d", (ptr + i));
//     }

//     //print array elements
//     printf("\nEntered array elements are:\n");
//     for (i = 0; i < limit; i++) {
//         printf("%d\n", *(ptr + i));
//     }

//     //calculate sum of all elements
//     sum = 0; //assign 0 to replace garbage value
//     for (i = 0; i < limit; i++) {
//         sum += *(ptr + i);
//     }
//     printf("Sum of array elements is: %d\n", sum);

//     //free memory
//     free(ptr); //hey, don't forget to free dynamically allocated memory.

//     return 0;
// }
// #include<stdio.h>
// #include<stdlib.h>
// int main(){

//     int n, i, *ptr, sum = 0;
//     printf("Enter number of elements: ");
//     scanf("%d", &n);
//     ptr = (int*)calloc(n,sizeof(int));
//     printf("enter elements: ");

//     for ( i = 0; i < n; i++)
//     {
//         scanf("%d", ptr+i);
//         sum += *(ptr+i);
//     }
//     printf("Sum = %d", sum);
//     free(ptr);
//     return 0;
// }

// _____*************************************************************************************
// #include<stdio.h>
// #include<stdlib.h>
// #include<string.h>

// int main(){
//     FILE* ptr;
//     char ch;

//     ptr = fopen("med.txt", "r");
//     if (NULL == ptr)
//     {
//         printf("filr cannot be opened\n");
//     }
    
//     printf("Content of fie are: \n");

//     do
//     {
//         ch = fgetc(ptr);
//         printf("%c", ch);
//     } while (ch != EOF);

//     fclose(ptr);
//     return 0;
    
// }

// _____*************************************************************************************


// #include<stdio.h>
// #include<stdlib.h>
// #include<string.h>

// int main(){
//     FILE* fptr;
//     char sentence[1000];

//     fptr = fopen("write.txt", "w");
//     if (fptr == NULL)
//     {
//         printf("filr cannot be opened\n");
//         exit(1);
//     }
    
//     printf("enter sentence: \n");
//     fgets(sentence, sizeof(sentence), stdin);
//     fprintf(fptr, "%s", sentence);

//     printf("Entered sentebce:%s ", sentence);
   
    
//     fclose(fptr);
//     return 0;
    
// }

// *******************************************************************

// #include<stdio.h>
// #include<stdlib.h>

// int main()
// {
//     FILE *fptr = NULL;
//     fptr = fopen("file2.txt", "w");

//     if (fptr == NULL)
//     {
//         printf("Error");
//         exit(1);
//     }
//     else
//     {
//         char str[50];
//         scanf("%[^\n]s", str);
//         fprintf(fptr, "%s", str);

//     }
//     fclose(fptr);
// }

// ******************************************************************************?

// #include<stdio.h>
// int main()
// {
//     int a, c =1;
//     printf("Enter number to check: ");
//     scanf("%d", &a);

//     for (int i = 2; i < a; i++)
//     {
//         if (a%i == 0)
//         {
//             c = 0;
//             break;
//         }
//         else
//         {
//             c = 1;
//         }    
//     }
//     if (c == 1)
//     {
//         printf("Prime");
//     }
//     else
//     {
//         printf("Not prime");
//     }
//     return 0;
// }

// **************************

// #include<stdio.h>
// int main()
// {   
//     int a, prod = 1;
//     printf("Enter number: ");
//     scanf("%d", &a);

//     for (int i = 1; i < a; i++)
//     {
       
        
//             prod *= i;
        
//     }
//     printf("%d", prod);
//     return 0;
// }

// #include<stdio.h>
// int main()
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
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int divisor, dividend, rem, num1, num2;

//     printf("Enter number 1 and 2 : ");
//     scanf("%d%d", &num1, &num2);

//     divisor = num1;
//     dividend = num2;
//     while (dividend%divisor != 0)
//     {
//         rem = dividend%divisor;
//         dividend = divisor;
//         divisor = rem;
//     }
//     printf("HCF is %d\n", divisor);
//     printf("Lcm is %d", (num1*num2)/divisor);
// return 0;
// }

// #include<stdio.h>
// int sum(int a, int b);
// int main(){
//     int a,b;
//     printf("Enter numbers: ");
//     scanf("%d%d", &a, &b);
//     sum(a, b);
// }
// int sum(int a, int b){
//     int c;
//     c = a+b;
//     printf("%d", c);
// }

// #include<stdio.h>
// int sum(int a, int b);
// int main(){
//     int a, b;
//     printf("Enter number: ");
//     scanf("%d%d", &a, &b);

//     sum(a,b);
// }
// int sum(int a, int b){
//     int c;
//     c = a+b;
//     printf("Sum of %d and %d is %d", a, b, c);
// }

// #include<stdio.h>
// int swap(int a, int b);
// int main(){
//     int a, b;
//     printf("Enter number 1 and number 2: ");
//     scanf("%d%d", &a, &b);

//     swap(a,b);
// }
// int swap(int a, int b){
//     int c;
//     c = a;
//     a = b;
//     b = c;

//     printf("After swap num1 is %d and num2 is %d", a, b);
// }


// #include<stdio.h>
// int main(){
//     int a, sum = 0;
//     printf("Enter number: ");
//     scanf("%d", &a);

//     while (a > 0)
//     {
//         int rem = a%10;
//         sum = sum + rem; 
//          a = a/10;
//     }
//     printf("%d", sum);
// }

// #include<stdio.h>
// int main(){
//     int a, b, sum = 0;
//     printf("Enter number: ");
//     scanf("%d", &a);

//     while (a>0)
//     {
//         b = a%10;
//         sum = sum+b;
//         a = a/10;
//     }
//     printf("%d", sum);
// }

// #include<stdio.h>
// int main(){
//     int a, b, rem = 0;
//     printf("Enter number: ");
//     scanf("%d", &a);

//     while (a>0)
//     {
//         b = a%10;
//         rem = rem*10+b;
//         a = a/10;
//     }
//     printf("%d", rem);
// }

// #include<stdio.h>
// int main(){
//     int a, b,c, rem = 0;
//     printf("Enter nuber: ");
//     scanf("%d", &a);
//     c = a;
//     while (a>0)
//     {
//         b = a%10;
//         rem = rem*10+b;
//         a = a/10;
//     }
//     if (c == rem)
//     {
//         printf("It is palindrome");
//     }
//     else
//     {
//         printf("Not palindrome");
//     }
// return 0;
// }

// #include<stdio.h>
// int main(){
//     int a, i, sum = 0;

//     printf("Enter number of elements: ");
//     scanf("%d", &a);

//     int arr[a];

//     printf("Enter values: ");
//     for ( i = 0; i < a; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
    
//     for ( i = 0; i < a; i++)
//     {
//         sum = sum+arr[i];
//     }
//     printf("Sum is %d", sum);
//     return 0;
// }


// #include<stdio.h>
// int main(){
//     int a;
//     printf("Enter number of elements: ");
//     scanf("%d", &a);

//     int arr[a];
//     printf("enter elements: ");
//     for (int i = 0; i < a; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     int min = arr[0];
//     int max = arr[0];

//     for (int i = 0; i < a; i++)
//     {
//         if (arr[i]<min)
//         {
//             min = arr[i];
//         }
//     }

//         for (int i = 0; i < a; i++)
//     {
//         if (max<arr[i])
//         {
//             max = arr[i];
//         }
//     }
//     printf("min value is %d", min);
//     printf("\nMax value is %d", max);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int a, m;
//     printf("Enter number of elements: ");
//     scanf("%d", &a);

//     int arr[a];
//     int brr[a];
//     int mult = 1;
//     for (int i = 0; i < a; i++)
//     {
//         scanf("%d", &arr[i]);
//         brr[i] = -1;
//     }
// for (int i = 0; i < a; i++)
// {
//     m = 1;
//     for (int j =i+1; j < a; j++)
//     {
//         if (arr[i] == arr[j])
//         {
//             m++;
//             brr[j] = 0;
//         }
        
//     }
//     if (brr[i]!= 0)
//     {
//         brr[i] = m;
//     }
// }
//     for (int i = 0; i < a; i++)
//     {
//         if(brr[i] == 0)
//         {
//         printf("%d occurs %d times\n",arr[i],brr[i]);
//         }
//     }
//     return 0;

// }
 

// #include<stdio.h>
// int main(){
//     int a, b,m;
//     printf("Enter array size: ");
//     scanf("%d", &a);

//     int arr[a];
//     int brr[a];

//     printf("Enter values: ");
//     for (int i = 0; i < a; i++)
//     {
//         scanf("%d", &arr[i]);
//         brr[i] = -1;
//     }

//     for (int i = 0; i < a; i++)
//     {
//         m = 1;
//         for (int j = i+1; j <a ; j++)
//         {
//             if (arr[i] == arr[j])
//             {
//                 m++;
//                 brr[j] = 0;
//             }
            
//         }
//         if (brr[i]!=0)
//         {
//             brr[i] = m;
//         }
        
//     }
//     for (int i = 0; i < a; i++)
//     {
//         if (brr[i]>1)
//         {
//             printf("duplicate value = %d", arr[i]);
//         }
        
//     }
//     return 0;
// }


// #include<stdio.h>
// int main()
// {
//     int i,m,n;
//     printf("Enter size: ");
//     scanf("%d", &n);

//     int arr[n];

//     printf("Enter elements: ");
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     printf("Enter element to find: ");
//     scanf("%d", &m);
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] == m)
//         {
//             printf("%d is at %dth position", m, i+1);
//         }
        
//     }
//     return 0;
// }


//  #include<stdio.h>
//  int sort(int arr[],int n);
//  int main()
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

//     sort(arr, n);
//  }

//  int sort(int arr[], int n)
//  {
//     int i,j,temp;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i+1; j < n; j++)
//         {
//             if (arr[j]<arr[i])
//             {
//                 temp = arr[j];
//                 arr[j] = arr[i];
//                 arr[i] = temp;
//             }
            
//         }
        
//     }
//     printf("ascending order:");
//     for (int i = 0; i <n; i++)
//     {
//         printf("%d ", arr[i]);
//     }
//     return 0;
//  }


// #include<stdio.h>
// int main(){
//     int m1, m2, m3, n1, n2, n3, n, i, j, k;
//     printf("Enter number of rows and columns of 1st matrix: ");
//     scanf("%d%d", &m1, &n1);
//     printf("Enter number of rows and columns of 2nd matrix: ");
//     scanf("%d%d", &m2, &n2);

//     int a[m1][n1], b[m2][n2], c[m3][n3];
//     if (n1 != n2)
//     {
//         printf("No mult");
//     }
//     else
//     {
//         for (int i = 0; i < m1; i++)
//         {
//             for (int j = 0; i < n1; j++)
//             {
//                 scanf("%d", &a[i][j]);
//             }
            
//         }
//         for (int i = 0; i < m2; i++)
//         {
//             for (int j = 0; j < n2; j++)
//             {
//                 scanf("%d", &b[i][j]);
//             }
            
//         }
//         for (int i = 0; i < n; i++)
//         {
//             for (int j = 0; j < n; j++)
//             {
//                 c[i][j] = 0;
//             }
            
//         }

//         for (int k = 0; k < n; k++)
//         {
//             c[i][j]+=a[i][j]*b[i][j];
//         }
//         for (int i = 0; i < n; i++)
//         {
//             for (int j = 0; j < n2; j++)
//             {
//                printf("%d", c[i][j]);
//             }
            
//         }
        
//     }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int m1, m2, n1, n2, i, j, k;
    
//     printf("Enter number of rows and columns of 1st matrix: ");
//     scanf("%d%d", &m1, &n1);
//     printf("Enter number of rows and columns of 1st matrix: ");
//     scanf("%d%d", &m2, &n2);

//     int a[10][10], b[10][10], c[10][10];
//     if (n1 != n2)
//     {
//         printf("Cannot multiply");
//     }
//     else
//     {
//         printf("Enter M1: ");
//         for (int i = 0; i < m1; i++)
//         {
//             for (int j = 0; j < n1; j++)
//             {
//                 scanf("%d", &a[i][j]);
//             }
            
//         }

//         printf("Enter M2: ");
//         for (int i = 0; i < m2; i++)
//         {
//             for (int j = 0; j < n2; j++)
//             {
//                 scanf("%d", &b[i][j]);
//             }
            
//         }
        
//         for (int i = 0; i < m1; i++)
//         {
//             for (int j = 0; j < n1; j++)
//             {
//                 c[i][j] = 0;

//                 for (int k = 0; k < n1; k++)
//                     {
//                         c[i][j] += a[i][k]*b[k][j];
//                     }
        
//             }
//         }
        
//         // printf("A*B is: ");

       
//         for (int i = 0; i < m1; i++)
//         {
//             for (int j = 0; j < n1; j++)
//             {
//                 printf("%d\t", c[i][j]);
//             }
//             printf("\n");
//         }
//     }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int m1, m2, n1, n2, i,j,k;
//     printf("Enter number of rows and columns of m1: ");
//     scanf("%d%d", &m1, &n1);
//     printf("Enter number of rows and columns of m2: ");
//     scanf("%d%d", &m2, &n2);

//     int a[10][10], b[10][10], c[10][10];

//     if (n1 != n2)
//     {
//         printf("No mult");
//     }
//     else
//     {
//         printf("Enter m1 elements: ");
//         for (int i = 0; i < m1; i++)
//         {
//             for (int j = 0; j < n1; j++)
//             {
//                 scanf("%d", &a[i][j]);
//             }
            
//         }
//         printf("Enter m2 elements: ");

//         for (int i = 0; i < m2; i++)
//         {
//             for (int j = 0; j < n2; j++)
//             {
//                 scanf("%d", &b[i][j]);
//             }
            
//         }
        
//         for (int i = 0; i < m1; i++)
//         {
//             for (int j = 0; j < n1; j++)
//             {
//                 c[i][j] = 0;
                
//                 for (int k = 0; k < m1; k++)
//                 {
//                     c[i][j] += a[i][k]*b[k][j];
//                 }
                
//             }
            
//         }
        
//         for (int i = 0; i < m1; i++)
//         {
//             for (int j = 0; j<n1; j++)
//             {
//                 printf("%d\t", c[i][j]);
//             }
//             printf("\n");    
//         }
        
//     }
//     return 0;
// }


// #include<stdio.h>
// int fact(int a);
// int main(){
//     int a,b;
//     printf("Enter number: ");
//     scanf("%d", &a);

//     printf("Fact = %d", fact(a));
//     return 0;
// }
// int fact(int a){
//     int b,c;
//     if (a>1)
//     {
//         return  a*fact(a-1);
//     }
//     else
//     {
//         return 1;
//     }
//     printf("%d", b);
// }

// #include<stdio.h>
// int gcd(int a, int b);
// int main(){
//     int a, b;
//     printf("Enter numbers: ");
//     scanf("%d%d", &a, &b);

//     printf("GCD of %d and %d is %d", a, b, gcd(a,b));
//     return 0;
// }
// int gcd(int a, int b){
//     if (b != 0)
//     {
//         return gcd(b, a%b);
//     }
//     else
//     {
//         return a;
//     }

// }


// #include<stdio.h>
// int fib(int a);
// int main(){
//     int a;
//     printf("Enter number: ");
//     scanf("%d", &a);
//     int i;
//     for (int i = 0; i < a; i++)
//     {
//         printf("%d\t", fib(i));
//     }
//     return 0;
// }
// int fib(int a){
//     if (a == 0)
//     {
//         return 0;
//     }
//     else if (a == 1)
//     {
//         return 1;
//     }
//     else
//     {
//         return fib(a-1)+fib(a-2);
//     }
// }

// #include<stdio.h>
// int sum(int n);
// int countg(int n);
// int main(){
//     int n;
//     printf("Eter number: ");
//     scanf("%d", &n);
//     int c = countg(n);
//     int s = sum(n);

//     printf("%d\n", s);
//     printf("%d", c);

//     return 0;
// }

// int sum(int n){
//     if (n == 0)
//     {
//         /* code */
//         return 0;
//     }
//     else
//     {
//         return sum(n/10)+(n%10);
//     }
// }
// int countg(int n){
//     static int count = 0;
//     if (n>0)
//     {
//         /* code */
//         count++;
//         countg(n/10);
//     }
//     else
//     {
//         return count;
//     }
// }


// #include<stdio.h>
// #include<string.h>

// int main(){
//     char s1[20], s2[20];
//     int comp;
//     printf("Enter string: ");
//     scanf("%s", &s1);

//     strcpy(s2,s1);
//     strrev(s2);
//     comp = strcmp(s1, s2);
//     if (comp == 0)
//     {
//         /* code */
//         printf("palindrome");
//     }
//     else
//     {
//         printf("Not palindrome");
//     }
//     return 0;
// }


// #include<stdio.h>
// int swap(int*a, int*b);
// int main(){
//     int x, y;
//     printf("Enter number: ");
//     scanf("%d%d", &x, &y);

//     swap(&x, &y);
//     printf("%d and %d", x, y);
// }
// int swap(int*a, int*b){
//     int g =*b;
//     *b = *a;
//     *a = g;
// }

// #include<stdio.h>
// int main(){
//     char s[20];
//     int len = 0, i;
//     char *p = s;
//     printf("Enter string: ");
//     scanf("%s", &s);
//     for ( i = 0; s[i]!='\0' ; i++)
//     {
//         /* code */
//         len++;
//     }
//     printf("Reverse string is: ");
//     for ( i = len -1; i >= 0; i--)
//     {
//         /* code */
//         printf("%c", *(p+i));

//     }
//     return 0;
// }

// #include<stdio.h>
// #include<string.h>
// int main(){
//     char s[20], m[20];
//     int comp;

//     printf("Enter string: ");
//     scanf("%d", &s[20]);
//     strcpy(m, s);
//     strrev(m);

//     comp = strcmp(s,m);
//     if (comp == 0)
//     {
//         /* code */
//         printf("Palindrome");
//     }
//     else
//     {
//         printf("Not palindrome");
//     }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     char s1[20], s2[20];
//     int len = 0, i, j, check = 0;

//     char *p = s1;
//     char *q = s2;

//     printf("Enter string: ");
//     scanf("%s", &s1);
//     for ( i = 0; s1[i] != '\0'; i++)
//     {
//         /* code */
//         len++;
//     }
//     for (i = len -1, j = 0; i >= 0, j <len; i--, j++)
//     {
//         /* code */
//         *(q+j) = *(p+i);
//     }
//     for (i = 0, j = 0; i < len, j< len; i++, j++)
//     {
//         /* code */
//         if ( *(q+j) != *(p+i))
//         {
//             /* code */
//             check = 1;
//             break;
//         }
        
//     }
    
//     if (check == 0)
//     {
//         /* code */
//         printf("PAlindrpme");
//     }
//     else
//     {
//         printf("Not palindrome");
//     }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int a, sum = 0, b, c;
//     printf("Enter number: ");
//     scanf("%d", &a);

//     while (a>0)
//     {
//         /* code */
//         b = a%10;
//         sum = (sum*10)+b;
//         a = a/10;
//     }
//     printf("Sum is %d", sum);
// }

// #include<stdio.h>
// int main(){
//     int a, b, c, sum = 0;
//     printf("Enter number: ");
//     scanf("%d", &a);
//     c = a;

//     while (a>0)
//     {
//         /* code */
//         b = a%10;
//         sum = (sum*10)+b; 
//         a = a/10;
//     }
//     if (sum == c)
//     {
//         /* code */
//         printf("PAlindrome");
//     }
//     else
//     {
//         printf("maa chuda bc");
//     }
//     return 0;
// }

// #include<stdio.h>
// int main(){

//     int a;
//     printf("Enter size of array: ");
//     scanf("%d", &a);

//     int arr[a];

//     printf("Enter array element: ");
//     for (int i = 0; i < a; i++)
//     {
//         /* code */
//         scanf("%d", &arr[i]);
//     }
//     int max = arr[0];
//     int min = arr[0];

//     for (int i = 0; i < a; i++)
//     {
//         if (max<arr[i])
//         {
//             max = arr[i];
//         }
        
//     }
//     for (int i = 0; i < a; i++)
//     {
//         if (min>arr[i])
//         {
//             /* code */
//             min = arr[i];
//         }
        
//     }
//    printf("Max is %d", max);
//    printf("Min is %d", min);
// }

// #include<stdio.h>
// int main(){

//     int a, b, c, d;
//     printf("Enter size of array: ");
//     scanf("%d", &a);

//     int arr[a];
//     int brr[a];
//     printf("Enter array element: ");
//     for (int i = 0; i < a; i++)
//     {
//         /* code */
//         scanf("%d", &arr[i]);
//         brr[i] = -1;
//     }
//     for (int i = 0; i < a; i++)
//     {
//         /* code */
//         b = 1;
//         for (int j = i+1; j < a; j++)
//             {
//                 /* code */
//                 if (arr[i] == arr[j])
//                 {
//                     b++;
//                     brr[j] = 0;
//                 }
                
//             }
//         if (brr[i] != 0)
//         {
//             brr[i] = b;
//         }
//     }
//     for (int i = 0; i < a; i++)
//     {
//         if (brr[i] != 0)
//         {
//             printf("%d occurs %d times\n", arr[i], brr[i]);
//         }
            
//     }
//     return 0;
    
// }
    
// #include<stdio.h>
// int main(){

//     int a, b, c, d;
//     printf("Enter size of array: ");
//     scanf("%d", &a);

//     int arr[a];
//     int brr[a];
//     printf("Enter array element: ");
//     for (int i = 0; i < a; i++)
//     {
//         /* code */
//         scanf("%d", &arr[i]);
//         brr[i] = -1;
//     }
//     for (int i = 0; i < a; i++)
//     {
//         /* code */
//         b = 1;
//         for (int j = i+1; j < a; j++)
//         {
//             /* code */
//             if (arr[i] == arr[j])
//             {
//                 b++;
//                 brr[j] = 0;
//             }
            
//         }
//         if (brr[i] != 0)
//         {
//             /* code */
//             brr[i] = b;
//         }
        
        
//     }
//     for (int i = 0; i < a; i++)
//     {
//         /* code */
//         if (brr[i]>1)
//         {
//             /* code */
//             printf("%d is duplicate", arr[i]);
//         }
        
//     }
    
//     return 0;
// }

// #include<stdio.h>
// int main(){

//     int a, b, c, d;
//     printf("Enter size of array: ");
//     scanf("%d", &a);

//     int arr[a];
   
//     printf("Enter array element: ");
//     for (int i = 0; i < a; i++)
//     {
//         /* code */
//         scanf("%d", &arr[i]);
       
//     }
//     printf("Enter element to search: ");
//     scanf("%d", &b);

//     for (int i = 0; i < a; i++)
//     {
//         if (arr[i] == b)
//         {
//             printf("%d is position,", i+1);
//         }
        
//     }
    
// }

// #include<stdio.h>
// int sort(int arr[], int a);
// int main(){

//     int a, b, c, d;
//     printf("Enter size of array: ");
//     scanf("%d", &a);

//     int arr[a];
    
//     printf("Enter array element: ");
//     for (int i = 0; i < a; i++)
//     {
//         /* code */
//         scanf("%d", &arr[i]);
        
//     }
//     sort(arr,a);

    
// }
// int sort(int arr[], int a)
// {
//     int i,j, temp;
//     for (int i = 0; i < a-1; i++)
//         {
//             for (int j = i+1; j < a; j++)
//             {
//                 if (arr[j]> arr[i])
//                 {
//                     temp = arr[j];
//                     arr[j] = arr[i];
//                     arr[i] = temp;    
//                 }           
//         }
//     }
//     for (int i = 0; i < a; i++)
//     {
//         /* code */
//         printf("%d, ", arr[i]);
//     }
// }

// #include<stdio.h>
// int fact(int n);
// int main(){
//     int a;
//     printf("Enter number: ");
//     scanf("%d", &a);

//     printf("FActorial is %d", fact(a));
// }
// int fact(int n){
//    if (n>1)
//    {
//     /* code */
//     return n*fact(n-1);
//    }
//    else
//    {
//     return 1;
//    }

// }

// #include<stdio.h>
// int gcd(int n, int m);
// int main(){
//     int a, b;
//     printf("Enter number: ");
//     scanf("%d%d", &a, &b);

//     printf("%d is gcd", gcd(a,b));
// }
// int gcd(int n, int m){
//     if (m != 0)
//     {
//         return gcd(m, n%m);
//     }
//     else
//     {
//         return n;
//     }
// }

// #include<stdio.h>
// int fib(int a);
// int main(){
//     int a, b, sum = 0;
//     scanf("%d", &a);
//     fib(a);

// }
// int fib(int a){
//     int f1 = 0, f2 = 1, sum = 0;
//     for (int i = 1; i <= a; i++)
//     {
//         /* code */
//         printf("%d\t", f1);
//         sum = f1+f2;
//         f1 = f2;
//         f2 = sum;
//     }
    
// }

// #include<stdio.h>
// int main(){
//     int a, b, c;
//     scanf("%d", &a);

//     for (int i = 0; i <= a; i++)
//     {
//         /* code */
//         for (int j = i; j < i; j--)
//         {
//             /* code */
//             printf(" ");
//         }
//         for (int j = 0; j < i; j++)
//         {
//             /* code */
//             printf("*");
//         }
//         printf("\n");
//     }
    
// }

// #include<stdio.h>
// int main(){
//     int a[10][10], b[10][10];
//     int r, c;

//     printf("Enter row and column: ");
//     scanf("%d%d", &r, &c);

//     printf("Enter elements: ");
//     for (int i = 0; i < r; i++)
//     {
//         /* code */
//         for (int j = 0; j<c; j++)
//         {
//             /* code */
//             scanf("%d", &a[i][j]);
//         }
        
//     }
//     for (int i = 0; i < c; i++)
//     {
//         /* code */
//         for (int j = 0; j < r; j++)
//         {
//             /* code */
//             b[j][i] = a[i][j];
//         }
        
//     }
    
//     for (int i = 0; i < r; i++)
//     {
//         /* code */
//         for (int j = 0; j<c; j++)
//         {
//             /* code */
//             printf("%d\t", b[i][j]);
//         }
//         printf("\n");
//     }
// }

// #include<stdio.h>
// int rec(int a);
// int main(){
//     int a;
//     printf("Enter number: ");
//     scanf("%d", &a);

//     printf("factorial is %d", rec(a));
// }
// int rec(int a){
//     if (a>1)
//     {
//         /* code */
//         return a*rec(a-1);
//     }
//     else
//     {
//         return 1;
//     }
// }

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
// void fn(int *a,int n)
// {
//     int i;
// }

// #include<stdio.h>
// #include<string.h>
// int main(){
//     char s[10], s1[10];
//     int comp = 0;
//     scanf("%s", &s);

//     strcpy(s1, s);
//     strrev(s1);
//     comp = strcmp(s, s1);
//     if (comp == 0)
//     {
//         /* code */
//         printf("palindrome");
//     }
    
// }

// #include<stdio.h>
// int rev(char s, int n);
// int main(){
//     int len = 0;
//     char s1[20];
//     char *p = s1;

//     scanf("%s", s1);
//     for (int i = 0; i < s1[i] != '\0'; i++)
//     {
//         /* code */
//         len++;
//     }
//     for (int i = len-1; i >= 0; i--)
//     {
//         /* code */
//         printf("%c", *(p+i));
//     }
    
// }

// #include<stdio.h>
// struct student
// {
//     /* data */
//     char name[30];
//     int marks;
//     int roll;
// }s[10];
// int main(){
//     int i;
//     printf("Enter name, mark, roll: \n");
//     for (int i = 0; i < 10; i++)
//     {
//         /* code */
//         scanf("%s%d%d", &s[i].name, &s[i].marks, &s[i].roll);
//     }
//     for (int i = 0; i < 10; i++)
//     {
//         /* code */
//         printf("%s %d %d\n", s[i].name, s[i].marks, s[i].roll);
//     }
//     return 0;

// }
