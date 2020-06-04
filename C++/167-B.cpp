#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
#include <queue>
#include <stack>
#include <functional>
#include <bitset>
#include <assert.h>
using namespace std;

int main() {
  int a, b, c, k;
  cin >> a >> b >> c >> k;
  int ans;
  if(k <= a)
  ans = k;
  if(k > a && k <= a + b)
  ans = a;
  if(k > a + b && k <= a + b + c)
  ans = a - (k - a - b);
  cout << ans << endl;
  return 0;
}
