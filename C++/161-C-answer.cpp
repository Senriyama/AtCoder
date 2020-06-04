#include <bits/stdc++.h>

using namespace std;

int main() {
  long long x, k;
  cin >> x >> k;
  long long remainder = x % k;
  long long ans = min(remainder, k - remainder);
  cout << ans << endl;
  return 0;
}
