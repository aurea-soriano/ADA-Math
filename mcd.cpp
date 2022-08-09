#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
// c++ mcd.cpp -o mcd.o
int main(){
  int a, b, tmp;
  cout << "Ingresa a: ";
  cin >> a;
  cout << "Ingresa b: ";
  cin >> b;

  while(b!= 0){
    tmp = a;
    a = b;
    b = tmp%b;
  }
  cout << "El mcd es:"<< a;

  return 0;
}
