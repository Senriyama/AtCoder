#include <bits/stdc++.h>

using namespace std;
//解答のポイント
#include <boost/multiprecision/cpp_int.hpp>
namespace mp = boost::multiprecision;
using Bint = mp::cpp_int;

int main() {
  int n;
  cin >> n;
  vector<Bint> vec(n);
  for(int i = 0; i < n; i++) {
    Bint a;
    cin >> a;
    vec[i] = a;
    if(vec[i] == 0) {
      cout << 0 << endl;
      return 0;
    }
  }
  Bint ans = 1;
  Bint b = 1000000000000000000;


  for(int j = 0; j < n; j++) {
    ans *= vec[j];
    if(ans > b) {
      cout << -1 << endl;
      return 0;
    }
  }

  cout << ans << endl;
  return 0;
}
