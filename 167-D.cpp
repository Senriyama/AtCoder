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
  int n, k;
  cin >> n >> k;
  vector<int> vec;
  for(int i = 0; i < n; i++) {
    cin >> vec[i];
  }
  int an = 0;
  int a = 1;
  for(int i = 0; i < k; i++) {
    an = vec[a - 1];
    a = an;
  }
  cout << a << endl;
  return 0;
}
