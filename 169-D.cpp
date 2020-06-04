#include <bits/stdc++.h>

using namespace std;


int main() {
  int64_t n;
  cin >> n;
  int64_t ans = 0;
  for(int64_t i = 2; i * i < n; i++) {
    int64_t a = 0;
    while(n % i == 0) {
      a++;
      n /= i;
    }
    for(int64_t j = 1; j <= a; j++) {
      a -= j;
      ans++;
    }
  }
  if(n != 1) ans++;
  cout << ans << endl;
  return 0;
}
