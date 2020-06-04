#include <bits/stdc++.h>

using namespace std;

int main() {
  int k, n;
  cin >> k >> n;
  int a[n];
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  a[n] = a[0] + k;
  int distancemax = 0;
  for(int i = 0; i < n; i++) {
    distancemax = max(distancemax, a[i + 1] - a[i]);
  }
  int ans = k - distancemax;
  cout << ans << endl;
  return 0;
}
