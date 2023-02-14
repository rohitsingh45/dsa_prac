#include <iostream>
using namespace std;
int main ()
{
  int numbers[5];
  int * p;
  p = numbers;  // p = numbers[0]
  *p = 10;  // numbers[0] = 10;
  p = &numbers[2];  // *p = numbers[2] 
  *p = 20;  // numbers[2] = 20
  p--; // *p = numbers[1]
  *p = 30; // numbers[1] = 30
  p = numbers + 3;  // *p = numbers[3]
  *p = 40;          // numbers[3] = 40
  p = numbers;      // *p = numbers[0]
  *(p+4) = 50;      // numbers[4] = 50

  // Traversing the above array.
  for (int n=0; n<5; n++) {
     cout << numbers[n] << ",";
  }
  return 0;
}