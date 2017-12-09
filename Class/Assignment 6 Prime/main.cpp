/*Author: Logan Datin
 * Created on 11/15/17
 * Purpose: Create file and write list of prime numbers from 1-100 to it
*/

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

bool isPrime(int);

int main() //main function to write to list
{
    ofstream outputFile;    //code for file
    outputFile.open("PrimeList");   //code for file
    
    for(int i=1;i<=100;i++) //code to move from 1-100 that writes each prime #
    {
    isPrime(i);
    while (isPrime(i)==true)
    {    
    outputFile<<i<<"\n";
    break;
    }
    }
    outputFile.close();
    return 0;
}

bool isPrime( int n ) // Function for prime numbers
{  for (int i=2; i<n; i++) 
  { if (n%i==0)
      return false;
  }
return true;
} 