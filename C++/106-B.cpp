#include <iostream>
#include <string>
#include <cmath> //これはlogを使うときに必要
using namespace std;

int divisor(int n) {
  int a = 0;
  for(int i = 1; i <=n; i++) {
    if(n % i == 0)
    a++;
  }
  return a;
}

int main() {
  int b = 0;
  int n;
  cin >> n;
  for(int i = 1; i < n + 1; i += 2) {
    if(divisor(i) == 8)
    b++;
  }
  cout << b << endl;
}
