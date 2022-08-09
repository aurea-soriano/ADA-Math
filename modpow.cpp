#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
// c++ modpow.cpp -o modpow.o

int modpow(int x, int n, int m) {
  if (n == 0) return 1%m;
  long long u = modpow(x,n/2,m);
  u = (u*u)%m;
  if (n%2 == 1) u = (u*x)%m;
  return u;
}

int main(){
  int x, n, m;
  cout << "Ingresa x: ";
  cin >> x;
  cout << "Ingresa n: ";
  cin >> n;
  cout << "Ingresa m: ";
  cin >> m;

  cout << "El módulo es:"<< modpow(x,n,m);

  return 0;
}
