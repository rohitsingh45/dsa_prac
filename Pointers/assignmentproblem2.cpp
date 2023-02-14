#include <iostream>
using namespace std;
int main()
{
  char arr[20];
  int i;
  for(i = 0; i < 10; i++) {
    *(arr + i) = 65 + i;
  }
// After executing the loop here value of i will be 10 because it is declared as global not local.
  *(arr + i) = '\0';  // It will modify the value of arr[10] as null values. 
cout << i << endl;
  cout << arr;  // It will print the whole character till it found null value.
  return 0;
}
