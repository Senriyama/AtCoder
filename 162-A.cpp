#include <bits/stdc++.h>

using namespace std;

int main() {
  string n;
  cin >> n;
  auto pos = n.find("7");
  if(pos == string::npos) {
    cout << "No" << endl;
    return 0;
  }
  cout << "Yes" << endl;
  return 0;
}
