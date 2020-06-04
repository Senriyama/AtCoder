#include <iostream>
#include <string>
#include <cmath> //これはlogを使うときに必要
using namespace std;

int GetDigit(int num){
    return log10(num)+1;
}

int main() {
  int n;
  cin >> n;
  int ans = 0;
  for(int i = 0; i <= n; i++) {
    if(GetDigit(i) % 2 == 1) {
      ans++;
    }
  }
  cout << ans << endl;
  return 0;
}
