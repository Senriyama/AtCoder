#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b) {
  if(b > a)
    return gcd(b, a);
  if(a % b == 0)
    return b;
  return gcd(a % b, b);
}

int main() {
  int k;
  cin >> k;
  int ans = 0;
  for(int p = 1; p <= k; p++) {
    for(int q = 1; q <= k; q++) {
      for(int r = 1; r <= k; r++) {
        ans += gcd(p, gcd(q, r));
      }
    }
  }
  cout << ans << endl;
  return 0;
}
