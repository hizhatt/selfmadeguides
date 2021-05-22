#include <iostream>
using namespace std;

int main(){
  int n;
  cout << "Enter the number of rows: ";
  cin >> n;
// So now we have the number of rows
// Now we make a loop that print each row
  for (int i=1; i<=n; i++){ // This will print n rows
    for (int j=1; j<=n-i; j++){ // This will print the spaces in each row
      cout << " ";}
    for (int k=1; k<=2*i-1; k++){ // This will print the stars in each row
      cout << "*";}
    cout << endl;}
  return 0;}
