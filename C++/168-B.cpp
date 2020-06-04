#include <bits/stdc++.h>

using namespace std;

int main() {
  int k;
  cin >> k;
  string s;
  cin >> s;
  int n = s.size();
  if(n <= k) {
    cout << s << endl;
    return 0;
  } else {
    string a = s.substr(0, k);
    cout << a + "..." << endl;
    return 0;
  }
}
