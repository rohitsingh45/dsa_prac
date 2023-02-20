#include <iostream>
using namespace std;


void solve(int n, char src, char aux, char dest){
    if(n == 1) {cout << src << " to " << dest << endl; return;}
    else{
        solve(n-1, src, dest, aux);
        cout << src << " to " << dest << endl;
        solve(n-1, aux, src, dest);
        return;
    }
}

int main(){

   cout << "Enter number of plates in tower a" << endl;
   int n;
   cin >> n;

   char src = 's', aux = 'a', dest = 'd';
   solve(n, src, aux, dest);

    return 0;
}