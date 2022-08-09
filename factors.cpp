#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
// c++ factors.cpp -o factors.o
int main(){
  int n, i;
  cout << "Ingresa el número a ser verificado: ";
  cin >> n;
  vector<int> fs;
  for(i = 2; (i * i) <= n; i++){
    while(n % i == 0){
      fs.push_back(i);
      n /= i;
    }
  }
  if (n > 1) fs.push_back(n);
  for (i = 0; i < fs.size(); i++) {
      cout << fs[i] << " ";
  }
  return 0;
}
