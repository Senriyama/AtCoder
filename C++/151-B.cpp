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
  int n, k, m;
  cin >> n >> k >> m;
  int total = 0;
  for(int i = 0; i < n - 1; i++) {
    int a;
    cin >> a;
    total += a;
  }
  int judge = n * m - total;
  if(judge > k) {
    cout << "-1" << endl;
    return 0;
  } else if(judge >= 0) {
    cout << judge << endl;
    return 0;
  } else {
    cout << 0 << endl;
    return 0;
  }
}
