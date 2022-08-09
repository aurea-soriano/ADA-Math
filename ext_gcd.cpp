#include <iostream>
#include <string>
#include <tuple>
using namespace std;
// c++ ext_gcd.cpp -o ext_gcd.o -std=c++17

tuple<int,int,int> gcd(int a, int b) {
  if (b == 0) {
    return {1,0,a};
  } else {
      int x,y,g;
      std::tie(x,y,g) = gcd(b,a%b);
      return {y,x-(a/b)*y,g};
    }
}
int main(){
  int x,y,g;
  std::tie(x,y,g) = gcd(30,12);
  cout << x << " " << y << " " << g << "\n"; // 1 -2 6

  return 0;
}
