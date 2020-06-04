#include <iostream>
#include <string>
#include <cmath> //これはlogを使うときに必要
#include <vector> //これは配列(vector)を使うときに必要
using namespace std;

int main() {
  int a, b, k;
  cin >> a >> b >> k;
  vector<int> vec;
  for(int i = 1; i <= min(a,b); i++) {
    if(a % i == 0 && b % i == 0) {
      vec.push_back(i);
    }
  }
  int size = vec.size();
  int ans = vec.at(size - k);
  cout << ans << endl;
  return 0;
}
