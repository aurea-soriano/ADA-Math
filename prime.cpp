#include <iostream>
#include <cmath>
using namespace std;
// c++ prime.cpp -o prime.o
int main(){
  int n, i, m=0;
  bool flag = true;
  cout << "Ingresa el número a ser verificado: ";
  cin >> n;
  m=sqrt(n);
  if(n<2){
    cout<<"El número no es primo"<<endl;
    flag = false;
  }
  for(i = 2; i*i <= n; i++){
    if(n % i == 0){
      cout<<"El número no es primo"<<endl;
      flag = false;
      break;
    }
  }
  if (flag==true)
      cout<<"El número es primo"<<endl;
  return 0;
}
