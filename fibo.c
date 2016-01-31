/* This program finds the Fibonacci Series of an integer number using c programming       language. 
   Written by Nahid Alam
	
*/


#include <stdio.h>
#include <math.h> 

int isprime(int a)
{
   int c;
   for ( c = 2 ; c <= (int)sqrt(a) ; c++ )
   {
      if ( a%c == 0 )
         return 0;
   }
      return 1;
}
int main()
{
   int n, first = 0, second = 1, next, c;
 
   printf("Enter the number of terms\n");
   scanf("%d",&n);
 
   printf("First %d terms of Fibonacci series are :-\n",n);
 
   for ( c = 0 ; c < n ; c++ )
   {
      /*Find the F(n)*/
      if ( c <= 1 )
         next = c;
      else
      {
         next = first + second;
         first = second;
         second = next;
      }

      /*Check what type of F(n) it is*/
      if(next == 0 || next == 1)  printf("%d\n",next);	
      else if((next % 3 == 0) || (next % 5 == 0) || isprime(next))	
      {
	     /*F(n) can be divisible by 3 or 5 and be prime at the same time.
	     For example 3 is divisible by 3 and a prime number. In that case, it 
	     will print "Buzz BuzzFizz"
	     */
      	if (next % 3 == 0) printf("Buzz ");
      	if (next % 5 == 0) printf ("Fizz ");
      	if (isprime(next)) printf("BuzzFizz ");
	printf("\n");
      } 
      else printf("%d\n",next);
   }
 
   return 0;
}
