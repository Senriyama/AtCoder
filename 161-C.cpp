#include <bits/stdc++.h>

using namespace std;



int main() {
  long long x, k;
  cin >> x >> k;
  long long remainder = max(x, k) % min(x, k);
  if(min(x, k) == 1) {
    cout << 0 << endl;
    return 0;
  } else if(min(x, k) == 0) {
    cout << max(x, k) << endl;
    return 0;
  } else if(remainder != 0) {
    cout << min(remainder, max(remainder, min(x, k)) % min(remainder, min(x, k))) << endl;
    return 0;
  } else {
    cout << min(x, k) << endl;
    return 0;
  }
}
