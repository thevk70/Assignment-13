// 1. Write a recursive function to calculate sum of first N natural numbers
// #include <stdio.h>
// int sum(int n)
// {
//     if (n==1)
//     {
//         return 1;
//     }
//     else
//     return n+sum(n-1);
// }
// int main()
// {
//     int n;
//     printf("Enter N:: ");
//     scanf("%d",&n);
//     printf("%d",sum(n));
//     return 0;
// }

// 2. Write a recursive function to calculate sum of first N odd natural numbers
// #include <stdio.h>
// int sum_odd(int n)
// {
//     if (n==1)
//     {
//         return 1;
//     }
//     else 
//     return n + sum_odd(n-2);
// }
// int main()
// {
//     int n = 2;
//     printf("%d",sum_odd(2*n-1));
//     return 0;
// }

// 3. Write a recursive function to calculate sum of first N even natural numbers
// #include <stdio.h>
// int sum_even(int n)
// {
//     if (n==2)
//     {
//         return 2;
//     }
//     else 
//     return n + sum_even(n-2);
// }
// int main()
// {
//     int n = 2;
//     printf("%d",sum_even(2*n));
//     return 0;
// }

// 4. Write a recursive function to calculate sum of squares of first n natural numbers
// #include <stdio.h>
// int sqr(int n)
// {
//     if (n==1)
//     {
//         return 1;
//     }
//     else 
//     return n*n + sqr(n-1);
// }
// int main()
// {
//     int n;
//     printf("Enter n:: ");
//     scanf("%d",&n);
//     printf("%d",sqr(n));
//     return 0;
// }

// 5. Write a recursive function to calculate sum of digits of a given number
// #include <stdio.h>
// int dig_sum(int n)
// {
//     if (n==0)
//     {
//         return n;
//     }
//     else 
//     return n%10 + dig_sum(n/10);
// }
// int main()
// {
//     int n;
//     printf("Enter number:: ");
//     scanf("%d",&n);
//     printf("%d",dig_sum(n));

//     return 0;
// }

// 6. Write a recursive function to calculate factorial of a given number
// #include <stdio.h>
// int fact(int n)
// {
//     if (n==1)
//     {
//         return 1;
//     }
//     else 
//     return n * fact(n-1);
// }
// int main()
// {
//     int num;
//     printf("Enter number:: ");
//     scanf("%d",&num);
//     printf("Fact = %d",fact(num));
//     return 0;
// }

// 7. Write a recursive function to calculate HCF of two numbers
// #include <stdio.h>
// int HCF(int n1,int n2)
// {
//     if (n2==0)
//     {
//         return n1;
//     }
//     else 
//     return HCF(n2,n1%n2);
// }
// int main()
// {
//     int num1,num2;
//     printf("Enter two numbers:: ");
//     scanf("%d %d",&num1,&num2);
//     if (num1>num2)
//     {
//         printf("HCF = %d",HCF(num2,num1));
//     }
//     else
//     {
//         printf("HCF = %d",HCF(num1,num2));
//     }
//     return 0;
// }

// 8. Write a recursive function to print first N terms of Fibonacci series

// 9. Write a program in C to count the digits of a given number using recursion.
// #include <stdio.h>
// int countDigit(int n)
// {
//     static c;
//     if (n == 0)
//     {
//         return c;
//     }
//     else
//       c++;
//       countDigit(n/10);
    
// }
// int main()
// {
//     int num;
//     printf("Enter number:: ");
//     scanf("%d",&num);
//     printf("No of digit = %d",countDigit(num));
//     return 0;
// }

// 10. Write a program in C to calculate the power of any number using recursion.
// #include <stdio.h>
// int power(int n,int m)
// {
//     if (m==1)
//     {
//         return n;
//     }
//     else
//     return n * pow(n,m-1);
// }
// int main()
// {
//     int num1,num2;
//     printf("Enter two number:: ");
//     scanf("%d %d",&num1,&num2);
//     printf("%d to the power %d = %d",num1,num2,power(num1,num2));
//     return 0;
// }