// 01 - Write a C program to swap two values using pointers.

#include <stdio.h>
void swap(int *x,int *y)
{
    int t;
    t   = *x;
    *x   = *y;
    *y   =  t;
}
int main()
{
    int num1,num2;

    printf("Enter value of num1: ");
    scanf("%d",&num1);
    printf("Enter value of num2: ");
    scanf("%d",&num2);
    printf("Before Swapping: num1 is: %d, num2 is: %d\n",num1,num2);
    swap(&num1,&num2);

    printf("After  Swapping: num1 is: %d, num2 is: %d\n",num1,num2);

    return 0;
}

//***************************//

// 02 - Write a program to calculate average of numbers between m and n using pointer.

#include<stdio.h>
#include<conio.h>
void main ()
{
	int *p,i,sum=0,a[10];
	float avg;
	clrscr();
	p=a;
	printf("Enter 10 nos.\n");

	for(i=0;i<=9;i++)
	{
		scanf("%d",(p+i));
		sum=sum+*(p+i);
	}
	avg=sum/10.0;
	for(i=0;i<=9;i++)
	printf("%d\n",*(p+i));
	printf("Average=%f",avg);
	getch();
}

//***************************//

// 03 - Write a program in C to find the maximum number between two numbers using a pointer.

#include<stdio.h>

int main()
{
	int no1,no2;
	int *ptr1,*ptr2;
	printf("Enter first number:\n");
	scanf("%d",&no1);
	printf("Enter second number:\n");
	scanf("%d",&no2);

	ptr1=&no1;
	ptr2=&no2;
	if(*ptr1>*ptr2)
	{
	    printf("Maximum number is %d",*ptr1);
	}
	else
	{
	    printf("Maximum number is %d",*ptr2);
	}
    return 0;
}

//***************************//

// 04 - Write a program in C to sort an array using Pointer.

#include <stdio.h>

void sort(int n, int* ptr)
{
    int i, j, t;

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++) 
        {
            if (*(ptr + j) < *(ptr + i))
            {
                t = *(ptr + i);
                *(ptr + i) = *(ptr + j);
                *(ptr + j) = t;
            }
        }
    }
    for (i = 0; i < n; i++)
        printf("%d ", *(ptr + i));
}
int main()
{
    int n = 5;
    int arr[] = { 0, 23, 14, 12, 9 };
    sort(n, arr);
 
    return 0;
}

//***************************//

// 05 - Write a program in C to add and subtract two numbers at run time.

#include <stdio.h>
int main()  
{  
    int a, b, sub;  
  
    printf("Enter 2 numbers\n");  
    scanf("%d%d", &a, &b);  
  
    sub = a+~b+1;  
  
    printf("Subtraction of %d and %d is %d\n", a, b, sub);  
  
    return 0;  
}

//***************************//

// 06 - Write a C program to store information of n number of students using structure.

#include <stdio.h>
struct student
{
    char firstName[50];
    int roll;
    float marks;
} s[5];

int main()
{
    int i;
    printf("Enter information of students:\n");

    for (i = 0; i < 5; ++i)
    {
        s[i].roll = i + 1;
        printf("\nFor roll number%d,\n", s[i].roll);
        printf("Enter first name: ");
        scanf("%s", s[i].firstName);
        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
    }
    printf("Displaying Information:\n\n");

    for (i = 0; i < 5; ++i)
    {
        printf("\nRoll number: %d\n", i + 1);
        printf("First name: ");
        puts(s[i].firstName);
        printf("Marks: %.1f", s[i].marks);
        printf("\n");
    }
    return 0;
}

//***************************//

// 07 - Write a C program to add two distances (in inch-feet system) using structure.

#include <stdio.h>

struct Distance
{
   int feet;
   float inch;
} d1, d2, result;

int main()
{
    printf("Enter 1st distance\n");
    printf("Enter feet: ");
    scanf("%d", &d1.feet);
    printf("Enter inch: ");
    scanf("%f", &d1.inch);

    printf("\nEnter 2nd distance\n");
    printf("Enter feet: ");
    scanf("%d", &d2.feet);
    printf("Enter inch: ");
    scanf("%f", &d2.inch);

    result.feet = d1.feet + d2.feet;
    result.inch = d1.inch + d2.inch;

    while (result.inch >= 12.0)
    {
        result.inch = result.inch - 12.0;
        ++result.feet;
    }
    printf("\nSum of distances = %d\'-%.1f\"", result.feet, result.inch);
    return 0;
}

//***************************//

// 08 - Define a recursive & non recursive function to calculate the sum of n natural numbers.

// Using Recursion
#include <stdio.h>

int addNumbers(int n);
int main()
{
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    printf("Sum = %d", addNumbers(num));
    return 0;
}
int addNumbers(int n)
{
    if (n != 0)
        return n + addNumbers(n - 1);
    else
        return n;
}

// Not using Recursion
int sum_of_natural_numbers(int n)
{
    int sum = 0;
    for(int i = 1; i <= n; i++)
    {
        sum += i;
    }
    return sum;
}
int main()
{
    int n;
    printf("\nEnter the number : ");
    scanf("%d",&n);
    printf("\nSum of %d Natural Numbers is %d\n ",n,sum_of_natural_numbers(n));
    return 0;
}

//***************************//

// 09 - Define a recursive & non recursive function to calculate the factorial of a number.

// With Recursion
#include<stdio.h>
long int multiplyNumbers(int n);
int main()
{
    int n;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    printf("Factorial of %d = %ld", n, multiplyNumbers(n));
    return 0;
}

long int multiplyNumbers(int n)
{
    if (n>=1)
        return n*multiplyNumbers(n-1);
    else
        return 1;
}

// Without Recursion
#include<stdio.h>  
int main()    
{    
 int i,fact=1,number;    
 printf("Enter a number: ");    
  scanf("%d",&number);    
    for(i=1;i<=number;i++){    
      fact=fact*i;    
  }    
  printf("Factorial of %d is: %d",number,fact);    
return 0;  
}

//***************************//

// 10 - Write a C program to calculate the transpose of a matrix.

#include <stdio.h>
int main() 
{
    int a[10][10], transpose[10][10], r, c;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("\nEnter matrix elements:\n");
    for (int i = 0; i < r; ++i)
        for (int j = 0; j < c; ++j)
        {
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }

    printf("\nEntered matrix: \n");
    for (int i = 0; i < r; ++i)
        for (int j = 0; j < c; ++j)
        {
            printf("%d  ", a[i][j]);
            if (j == c - 1)
            printf("\n");
        }
  
    for (int i = 0; i < r; ++i)
        for (int j = 0; j < c; ++j)
        {
            transpose[j][i] = a[i][j];
        }

    printf("\nTranspose of the matrix:\n");
    for (int i = 0; i < c; ++i)
        for (int j = 0; j < r; ++j) 
        {
            printf("%d  ", transpose[i][j]);
            if (j == r - 1)
            printf("\n");
        }
  return 0;
}

//***************************//

// 11 - Write a program to check whether a string is palindrome or not.

#include <string.h>
 
int main()
{
    char s[1000];  
    int i,n,c=0;
 
    printf("Enter  the string : ");
    gets(s);
    n=strlen(s);
 
    for(i=0;i<n/2;i++)  
    {
    	if(s[i]==s[n-i-1])
    	c++;
 
 	}
 	if(c==i)
 	    printf("string is palindrome");
    else
        printf("string is not palindrome");
 
 	 
     
    return 0;
}

//***************************//

// 12 - Write a C program to print the following pattern:
// A B C D E
// A B C D
// A B C
// A B
// A

#include<stdio.h>
int main()
{
    int row,j;
    for (row='E'; row>='A'; row--)
    {
        for (j='A'; j<=row; j++)
        {
            printf("%c",j);
        }
        printf("\n");
    }
    return 0;
}

//***************************//

// 13 - Write a C program to print the following pattern:
// 5 4 3 2 1
// 5 4 3 2
// 5 4 3
// 5 4
// 5

#include <stdio.h>

int main()
{
    int i, j;
    for(i=1;i<=5;i++)
    {
        for(j=5;j>=i;j--)
        {
            printf("%d",j);
        }
    printf("\n");
    }

    return 0;
}

//***************************//

// 14 - Write a C program to print the following pattern:
// 5 5 5 5 5
// 4 4 4 4
// 3 3 3
// 2 2
// 1

#include <stdio.h>

int main()
{
    int i, j, N;

    printf("Enter N: ");
    scanf("%d", &N);
    for(i=N; i>=1; i--)
    {
        for(j=1; j<=i; j++)
        {
            printf("%d", i);
        }

        printf("\n");
    }

    return 0;
}

//***************************//

// 15 - Write a C program to print the following pattern:
// 5
// 4 4
// 3 3 3
// 2 2 2 2
// 1 1 1 1 1

#include <stdio.h>

int main()
{
    int i, j, N;

    printf("Enter N: ");
    scanf("%d", &N);

    for(i=1; i<=N; i++)
    {
        // Logic to print numbers
        for(j=1; j<=i; j++)
        {
            printf("%d", (N - i + 1));
        }

        printf("\n");
    }

    return 0;
}

//***************************//

// 16 - Write a C program to print the following pattern:
// A
// B C
// D E F
// G H I J
#include <stdio.h>
int main()
{
    int i,j;
    char ch='A';
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c ",ch++);
        }
        printf("\n");
    }
    return 0;
}

//***************************//

// 17 - Write a C program to print the following pattern:
// 5
// 5 4
// 5 4 3
// 5 4 3 2
// 5 4 3 2 1

#include <stdio.h>

int main()

{
    int i, j;
    for(i=5;i>=1;i--)
    {
        for(j=5;j>=i;j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }

    return 0;
}

//***************************//

// 18 - Write a C program to print the following pattern:
// 1
// 2 3
// 4 5 6
// 7 8 9 10

#include <stdio.h>
int main() {
   int rows, i, j, number = 1;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   for (i = 1; i <= rows; i++) {
      for (j = 1; j <= i; ++j) {
         printf("%d ", number);
         ++number;
      }
      printf("\n");
   }
   return 0;
}

//***************************//

// 19 - Write a C Program to check whether the given number is Armstrong or not.

#include <math.h>
#include <stdio.h>

int main() {
   int num, originalNum, remainder, n = 0;
   float result = 0.0;

   printf("Enter an integer: ");
   scanf("%d", &num);

   originalNum = num;

   // store the number of digits of num in n
   for (originalNum = num; originalNum != 0; ++n) {
       originalNum /= 10;
   }

   for (originalNum = num; originalNum != 0; originalNum /= 10) {
       remainder = originalNum % 10;

      // store the sum of the power of individual digits in result
      result += pow(remainder, n);
   }

   // if num is equal to result, the number is an Armstrong number
   if ((int)result == num)
    printf("%d is an Armstrong number.", num);
   else
    printf("%d is not an Armstrong number.", num);
   return 0;
}

//***************************//

// 20 - Write a C Program to check whether the given number is palindrome or not.

#include <stdio.h>
int main() {
  int n, reversed = 0, remainder, original;
    printf("Enter an integer: ");
    scanf("%d", &n);
    original = n;

    // reversed integer is stored in reversed variable
    while (n != 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }

    // palindrome if orignal and reversed are equal
    if (original == reversed)
        printf("%d is a palindrome.", original);
    else
        printf("%d is not a palindrome.", original);

    return 0;
}

//***************************//

// 21 - Write a C Program to check whether the given input is vowel or consonant using switch case.

#include <stdio.h>

int main()
{
    char ch;

    /* Input alphabet from user */
    printf("Enter any character: ");
    scanf("%c", &ch);

    /* Switch ch value */
    switch(ch)
    {
        case 'a': 
        case 'e': 
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U': 
            printf("Vowel");
            break;

        default: printf("Consonant");
    }

    return 0;
}

//***************************//

// 22 - Write a c program to calculate the sum of n natural numbers using while loop.

#include <stdio.h>
int main() {
    int n, i, sum = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    i = 1;

    while (i <= n) {
        sum += i;
        ++i;
    }

    printf("Sum = %d", sum);
    return 0;
}

//***************************//

// 23 -Write a program in C to determine if an entered is leap year or not.

#include <stdio.h>
int main() {
   int year;
   printf("Enter a year: ");
   scanf("%d", &year);

   // leap year if perfectly divisible by 400
   if (year % 400 == 0) {
      printf("%d is a leap year.", year);
   }
   // not a leap year if divisible by 100
   // but not divisible by 400
   else if (year % 100 == 0) {
      printf("%d is not a leap year.", year);
   }
   // leap year if not divisible by 100
   // but divisible by 4
   else if (year % 4 == 0) {
      printf("%d is a leap year.", year);
   }
   // all other years are not leap years
   else {
      printf("%d is not a leap year.", year);
   }

   return 0;
}

//***************************//

// 24 - Write a program in C to determine whether a number is prime or not.

int main()
{
    int n, i, flag = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // 0 and 1 are not prime numbers
    // change flag to 1 for non-prime number
    if (n == 0 || n == 1)
        flag = 1;

    for (i = 2; i <= n / 2; ++i)
    {
        // if n is divisible by i, then n is not prime
        // change flag to 1 for non-prime number
        if (n % i == 0)
        {
            flag = 1;
            break;
        }
    }

    // flag is 0 for prime numbers
    if (flag == 0)
        printf("%d is a prime number.", n);
    else
        printf("%d is not a prime number.", n);

    return 0;
}

//***************************//

// 25 - Write a program in C to determine whether a number is odd or even.

#include <stdio.h>
int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    (num % 2 == 0) ? printf("%d is even.", num) : printf("%d is odd.", num);
    return 0;
}

//***************************//

// 26 - Write a program to swap two integers without using 3rd variable.

#include<stdio.h>
int main()
{
    int x, y;
    printf("Input value for x & y: \n");
    scanf("%d%d",&x,&y);
    printf("Before swapping the value of x & y: %d %d",x,y);
    x=x+y;
    y=x-y;
    x=x-y;
    printf("\nAfter swapping the value of x & y: %d %d",x,y);
    return 0;
}

//***************************//

// 27 - Write a program to calculate the maximum of three numbers using conditinal operators.

# include <stdio.h>
 
void main()
{
    int a, b, c, big ;
 
    printf("Enter three numbers : ") ;
 
    scanf("%d %d %d", &a, &b, &c) ;
 
    big = a > b ? (a > c ? a : c) : (b > c ? b : c) ;
 
    printf("\nThe biggest number is : %d", big) ;
}

//***************************//

// 28 - Write a program to convert the temperature from Celsius to Fahrenheit and vice-versa.

#include <stdio.h>
 
int main()
{
  
    float fh,cl;
    int choice;
 
    printf("\n1: Convert temperature from Fahrenheit to Celsius."); 
    printf("\n2: Convert temperature from Celsius to Fahrenheit.");
    printf("\nEnter your choice (1, 2): ");
    scanf("%d",&choice);
 
    if(choice ==1){
        printf("\nEnter temperature in Fahrenheit: ");
        scanf("%f",&fh);
        cl= (fh - 32) / 1.8;
        printf("Temperature in Celsius: %.2f",cl);
    }
    else if(choice==2){
        printf("\nEnter temperature in Celsius: ");
        scanf("%f",&cl);
        fh= (cl*1.8)+32;
        printf("Temperature in Fahrenheit: %.2f",fh);
    }
    else{
        printf("\nInvalid Choice !!!");
    }
    return 0;
}

//***************************//

// 29 - Write a program to calculate the length of a string without using strlen() function.

#include <stdio.h>
int main()
{
    char str[100];
    int i,length=0;
    
    printf("Enter a string: \n");
    scanf("%s",str);

    for(i=0; str[i]!='\0'; i++)
    {
        length++;
    }
    printf("\nLength of input string: %d",length);
    return 0;
}

//***************************//

// 30 - Write a program to concatenate two strings without using strcat() function.

#include <stdio.h>
int main()
{
    char str1[50], str2[50], i, j;
    printf("\nEnter first string: ");
    scanf("%s",str1);
    printf("\nEnter second string: ");
    scanf("%s",str2);

    for(i=0; str1[i]!='\0'; ++i);
     for(j=0; str2[j]!='\0'; ++j, ++i)
       { 
            str1[i]=str2[j];
        }
    str1[i]='\0';
    printf("\nOutput: %s",str1); 
    return 0;
}

//***************************//

// 31 - Write a program to calculate the reverse of a string without using strrev() function.

#include<stdio.h>
#include<string.h>

int main() {
    char str[100], temp,count;
    int start, end = 0;
    printf("\nEnter the string to reverse:");
    gets(str);

    while (str[count] != '\0')
       count++;
    start = 0;
    end = count - 1;
 
    while (start < end)
    {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
    printf("\nReverse string is :%s", str);
    return 0;
}

//***************************//

// 32 - Write a program to print the following pattern:
// @
// @ @
// @ @ @
// @ @ @ @

#include <stdio.h>
int main() {
   int i, j, rows;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   for (i = 1; i <= rows; ++i)
   {
        for (j = 1; j <= i; ++j)
       {
         printf("@ ");
       }
      printf("\n");
   }
   return 0;
}

//***************************//

// 33 -Write a program in C to calculate 2nd minimum number among three numbers using pointers.

#include <stdio.h>

void swap_if_out_of_order (int *p, int *q)
{
    if (*p > *q) {
        int t = *p;
        *p = *q;
        *q = t;
    }
}

int main (void)
{
    int a, b, c;

    printf("Enter three integers\n");
    if (scanf("%d%d%d", &a, &b, &c) == 3) {
        swap_if_out_of_order(&a, &b);
        swap_if_out_of_order(&b, &c);
        swap_if_out_of_order(&a, &b);
        printf("Second greatest: %d\n", b);
    }
}

//***************************//

// 34 - Write a program in C to find the largest and smallest element in an Array.

#include<stdio.h>

int main()
{
    int a[50],i,n,large,small;
    printf("\nEnter the number of elements : ");
    scanf("%d",&n);
    printf("\nInput the array elements : ");
    for(i=0;i<n;++i)
        scanf("%d",&a[i]);

    large=small=a[0];
    for(i=1;i<n;++i)
    {
        if(a[i]>large)
        large=a[i];
        if(a[i]<small)
            small=a[i];
    }
    printf("\nThe smallest element is %d\n",small);
    printf("\nThe largest element is %d\n",large);
    return 0;
}

//***************************//

// 35 - Write a program in C to perform addition and subtraction of two matrices.

#include<stdio.h>

int main()
{
    int n, m, c, d, first[10][10], second[10][10], sum[10][10], diff[10][10];
    printf("\nEnter the number of rows and columns of the first matrix \n\n");
    scanf("%d%d", &m, &n);

    printf("\nEnter the %d elements of the first matrix \n\n", m*n);
    for(c = 0; c < m; c++)   // to iterate the rows
        for(d = 0; d < n; d++)   // to iterate the columns
            scanf("%d", &first[c][d]);

    printf("\nEnter the %d elements of the second matrix \n\n", m*n);
    for(c = 0; c < m; c++)   // to iterate the rows
        for(d = 0; d < n; d++)   // to iterate the columns
            scanf("%d", &second[c][d]);

    /*
        printing the first matrix
    */
    printf("\n\nThe first matrix is: \n\n");
    for(c = 0; c < m; c++)   // to iterate the rows
    {
        for(d = 0; d < n; d++)   // to iterate the columns
        {
            printf("%d\t", first[c][d]);
        }
    printf("\n");
    }

    /* 
        printing the second matrix
    */
    printf("\n\nThe second matrix is: \n\n");
    for(c = 0; c < m; c++)   // to iterate the rows
    {
        for(d = 0; d < n; d++)   // to iterate the columns
        {
            printf("%d\t", second[c][d]);
        }
    printf("\n");
    }

    /* 
        finding the SUM of the two matrices 
        and storing in another matrix sum of the same size
    */
    for(c = 0; c < m; c++)
        for(d = 0; d < n; d++)
            sum[c][d] = first[c][d] + second[c][d];

    // printing the elements of the sum matrix
    printf("\n\nThe sum of the two entered matrices is: \n\n");
    for(c = 0; c < m; c++)
    {
        for(d = 0; d < n; d++)
        {
            printf("%d\t", sum[c][d]);
        }
        printf("\n");
    }

    /*
        finding the DIFFERENCE of the two matrices 
        and storing in another matrix difference of the same size
    */
    for(c = 0; c < m; c++)
        for(d = 0; d < n; d++)
            diff[c][d] = first[c][d] - second[c][d];

    // printing the elements of the diff matrix
    printf("\n\nThe difference(subtraction) of the two entered matrices is: \n\n");
    for(c = 0; c < m; c++)
    {
        for(d = 0; d < n; d++)
        {
            printf("%d\t", diff[c][d]);
        }
        printf("\n");
    }
    return 0;
}

//***************************//

// 36 - Write a program in C to find Sum of n input numbers using Array.

#include<stdio.h>

int main()
{
    printf("\n\n\t\tStudytonight - Best place to learn\n\n\n");
    int n, sum = 0, c, array[100];

    printf("Enter the number of integers you want to add: ");
    scanf("%d", &n);

    printf("\n\nEnter %d integers \n\n", n);

    for(c = 0; c < n; c++)
    {
        scanf("%d", &array[c]);
        sum += array[c];    // same as sum = sum + array[c]
    }

    printf("\n\nSum = %d\n\n", sum);
    return 0;
}

//***************************//

// 37 - Write a program in C to sort the values of an array.

#include <stdio.h>
void main()
   {
    int i, j, a, n, number[30];
    printf("Enter number of elements: \n");
    scanf("%d", &n);
    printf("Enter the numbers: \n");
    for (i = 0; i < n; ++i)
        scanf("%d", &number[i]);
    for (i = 0; i < n; ++i) 
    {
        for (j = i + 1; j < n; ++j)
        {
            if (number[i] > number[j]) 
            {
                a =  number[i];
                number[i] = number[j];
                number[j] = a;
            }
        }
    }
 
    printf("The numbers arranged in ascending order are given below \n");
    for (i = 0; i < n; ++i)
        printf("%d\n", number[i]);
}

//***************************//

// 38 - Write a program in C to search a particular data element from an array.

#include <stdio.h>
 
int main()
{
    int nbr, i, r, arr[30];

    printf("Enter the number of elements in the array: ");
    scanf("%d", &nbr);

    printf("Enter the array elements: ");
    for (i = 0; i < nbr; i++)
    {
       scanf("%d", &arr[i]);
    }

    printf("Enter the item to be searched: ");
    scanf("%d", &r);
    i = 0;
    while (i < nbr && r != arr[i])
    {
       i++;
    }
    if (i < nbr)
    {
       printf("The element is found in the position = %d", i + 1);
    } else
    {
       printf("Not found!");
    }
    return 0;
}

//***************************//

// 39 - Write a C program to copy the contents of a text file to another text file.

#include <stdio.h>
#include <stdlib.h> // For exit()

int main()
{
	FILE *fptr1, *fptr2;
	char filename[100], c;

	printf("Enter the filename to open for reading \n");
	scanf("%s", filename);

	// Open one file for reading
	fptr1 = fopen(filename, "r");
	if (fptr1 == NULL)
	{
		printf("Cannot open file %s \n", filename);
		exit(0);
	}

	printf("Enter the filename to open for writing \n");
	scanf("%s", filename);

	// Open another file for writing
	fptr2 = fopen(filename, "w");
	if (fptr2 == NULL)
	{
		printf("Cannot open file %s \n", filename);
		exit(0);
	}

	// Read contents from file
	c = fgetc(fptr1);
	while (c != EOF)
	{
		fputc(c, fptr2);
		c = fgetc(fptr1);
	}

	printf("\nContents copied to %s", filename);

	fclose(fptr1);
	fclose(fptr2);
	return 0;
}

//***************************//

// 40 - Write a C program to read some information from a text file.

#include <stdio.h>
#include <stdlib.h>
 
int main() {
    FILE    *textfile;
    char    *text;
    long    numbytes;
     
    textfile = fopen("readme.txt", "r");
    if(textfile == NULL)
        return 1;
     
    fseek(textfile, 0L, SEEK_END);
    numbytes = ftell(textfile);
    fseek(textfile, 0L, SEEK_SET);  
 
    text = (char*)calloc(numbytes, sizeof(char));   
    if(text == NULL)
        return 1;
 
    fread(text, sizeof(char), numbytes, textfile);
    fclose(textfile);
 
    printf(text);
 
    return 0;
}

//***************************//

// 41 - Write a C program to write something into a text file.

#include <stdio.h>
#include <stdlib.h>

int main() {
    char sentence[1000];

    // creating file pointer to work with files
    FILE *fptr;

    // opening file in writing mode
    fptr = fopen("program.txt", "w");

    // exiting program 
    if (fptr == NULL) {
        printf("Error!");
        exit(1);
    }
    printf("Enter a sentence:\n");
    fgets(sentence, sizeof(sentence), stdin);
    fprintf(fptr, "%s", sentence);
    fclose(fptr);
    return 0;
}

//***************************//

// 42 - Write a program in C to Implement Bubble Sort over a given set of numbers in an array.

#include <stdio.h>

int main(){
    int arr[50], num, x, y, temp;
    printf("Please Enter the Number of Elements you want in the array: ");
    scanf("%d", &num);
    printf("Please Enter the Value of Elements: ");
    
    for(x = 0; x < num; x++)
        scanf("%d", &arr[x]);

    for(x = 0; x < num - 1; x++){
        for(y = 0; y < num - x - 1; y++){
            if(arr[y] > arr[y + 1]){               
                temp = arr[y];
                arr[y] = arr[y + 1];
                arr[y + 1] = temp;
            }
        }
    }
    printf("Array after implementing bubble sort: ");
    for(x = 0; x < num; x++){
        printf("%d  ", arr[x]);
    }
    return 0;
}

//***************************//

// 43 - Write a program in C to Implement Insertion Sort over a given set of numbers in an array.

#include <stdio.h>  
  
void insert(int a[], int n){
    int i, j, temp;  
    for (i = 1; i < n; i++) {  
        temp = a[i];  
        j = i - 1;  
  
        while(j>=0 && temp <= a[j])
        {    
            a[j+1] = a[j];     
            j = j-1;    
        }    
        a[j+1] = temp;    
    }  
}  
  
void printArr(int a[], int n)
{  
    int i;  
    for (i = 0; i < n; i++)  
        printf("%d ", a[i]);  
}  
  
int main()  
{  
    int a[] = { 12, 31, 25, 8, 32, 17 };  
    int n = sizeof(a) / sizeof(a[0]);  
    printf("Before sorting array elements are - \n");  
    printArr(a, n);  
    insert(a, n);  
    printf("\nAfter sorting array elements are - \n");    
    printArr(a, n);  
  
    return 0;  
}    

//***************************//

// 44 - C Program to Remove all Characters in a String Except Alphabets.

#include <stdio.h>
int main() {
   char line[150];
   
   printf("Enter a string: ");
   fgets(line, sizeof(line), stdin); // take input


   for (int i = 0, j; line[i] != '\0'; ++i) {

      // enter the loop if the character is not an alphabet
      // and not the null character
      while (!(line[i] >= 'a' && line[i] <= 'z') && !(line[i] >= 'A' && line[i] <= 'Z') && !(line[i] == '\0')) {
         for (j = i; line[j] != '\0'; ++j) {

            // if jth element of line is not an alphabet,
            // assign the value of (j+1)th element to the jth element
            line[j] = line[j + 1];
         }
         line[j] = '\0';
      }
   }
   printf("Output String: ");
   puts(line);
   return 0;
}

//***************************//

// 45 - Write a program to display its own source code as output.

#include <stdio.h>
int main() {
    FILE *fp;
    int c;
   
    // open the current input file
    fp = fopen(__FILE__,"r");

    do {
         c = getc(fp);   // read character 
         putchar(c);     // display character
    }
    while(c != EOF);  // loop until the end of file is reached
    
    fclose(fp);
    return 0;
}

//***************************//