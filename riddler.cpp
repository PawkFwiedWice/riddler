//Tim
//March 14 2018
//Code that prototypes functions and
/*Returns number that fulfills 4 conditions:
 * 1. Number must be odd
 * 2. Sum of its digits must be 27
 * 3. Digits must not repeat
 * 4. Digit in Thousands place is 3 times the digit in tens place
*/

#include <iostream>
using namespace std;

//prototypes
bool numberIsOdd(int); //Must be odd
bool number27(int);    //Sum must be 27
bool notSame(int);     //Digits must be Different
bool timesThree(int);  //Thousands place must be 3x tens place

int main()
{
   //vars
   int i;              //Integer loop

   //processing
   for (i=1000; i <= 9999; i++)
   {
      if (numberIsOdd(i) == false)
         continue;
      if (number27(i)    == false)
         continue;
      if (notSame(i)     == false)
         continue;
      if (timesThree(i)  == false)
         continue;

     //output
      cout << "\nThe Riddler number is " << i << endl;
   }

   cout << "\nExiting Program" << endl;
   
   return 0;
}

//Condition 1: Number must be odd
bool numberIsOdd(int n)
{
   if ((n % 2) == 1)
      return true;
   else
      return false;
}

//Condition 2: sum of numbers must be 27
bool number27(int n)
{
   int n1, n2, n3, n4, sum;
   const int numSum = 27;
   
   n1 = (n / 1000);
   n2 = (n / 100) % 10;
   n3 = (n / 10)  % 10;
   n4 = (n % 10);

   sum = n1 + n2 + n3 + n4;

   if (sum == numSum)
      return true;
   else
      return false;
}

//Condition 3: All digits must be different
bool notSame(int n)
{
   int n1, n2, n3, n4;

   n1 = (n / 1000);
   n2 = (n / 100) % 10;
   n3 = (n / 10)  % 10;
   n4 = (n % 10);

   if ((n1 != n2) && (n1 != n3) && (n1 != n4))
      if ((n2 != n3) && (n2 != n4))
         if (n3 != n4)
            return true;
   else
      return false;
}

//Condition 4: Thousands place must be 3x tens place
bool timesThree(int n)
{
   int n1, n2, n3, n4;

   n1 = (n / 1000);
   n2 = (n / 100) % 10;
   n3 = (n / 10)  % 10;
   n4 = (n % 10);

   if (n1 == (3 * n3))
      return true;
   else
      return false;
}
