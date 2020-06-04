#include <iostream>
#include <string>
using namespace std;
int main() {
  string s;
  cin >> s;
  int n = s.size();
  int ans = 0;
  int maximum = 0;
  for(int i = 0; i < n; i++) {
    if(s[i] == 'A' || s[i] == 'C' || s[i] == 'G' || s[i] == 'T') {
      ans++;
      maximum = max(ans, maximum);
    } else {
      ans = 0;
    }
  }
  cout << maximum << endl;
  return 0;
}
