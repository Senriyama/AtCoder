#include <iostream>
#include <string>
#include <cmath> //これはlogを使うときに必要
#include <vector> //これは配列(vector)を使うときに必要
#include <math.h> //べき乗を使うときに必要
using namespace std;

//ビット全探索の基本のプログラム
int main() {
  int n, m;
  cin >> n >> m;

  vector<vector<int>> vec(m);

  for(int i = 0; i < m; i++) {
    int k;
    cin >> k;
    //2次元配列vecのi番目の列のサイズをkに変える
    vec[i].resize(k);
    for(int j = 0; j < k; j++) {
      cin >> vec[i][j];
      //よくわからん
      　vec[i][j]--;
    }
  }

  vector<int> p(m);
  for(int i = 0; i < m; i++) {
    cin >> p[i];
  }

  int ans = 0;
  for(int i = 0; i < (1 << n); i++) {
    bool ok = true;
    for(int j = 0; j < m; j++) {
      int c = 0;
      for(int id : vec[j]) {
        if((i >> id) & 1) {
          c++;
        }
      }
      c %= 2;
      if(c != p[j]) {
        ok = false;
      }
    }
    if(ok) {
      ans++;
    }
  }
  cout << ans << endl;
  return 0;
}
