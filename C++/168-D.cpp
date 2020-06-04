#include <bits/stdc++.h>

using namespace std;
using Graph = vector<vector<int>>;
string explanation1 = "これは幅優先探索の問題！";
string explanation2 = "参考URL:https://qiita.com/drken/items/996d80bcae64649a6580";

const int INF = 1001001001;
const int B = 100005;
int main() {
  int n, m;
  cin >> n >> m;

  //グラフ入力受け取り
  Graph G(B);
  for(int i = 0; i < m; i++) {
    int a, b;
    cin >> a >> b;
    a--;
    b--; //distで０と１のズレを直しておくため
    G[a].push_back(b); //有向グラフ
    G[b].push_back(a); //無向グラフなのでこれも追加
  }

  //BFSのためのデータ構造
  vector<int> dist(n, INF); //全頂点を「未訪問」に初期化
  queue<int> que; q//キュー
  vector<int> pre(n, -1);

  //初期条件（頂点1をノードとする）
  dist[0] = 0;
  que.push(0); //1を橙色頂点にする

  //BFS開始（キューが空になるまで探索を行う）
  while(!que.empty()) {
    int v = que.front(); //キューから先頭頂点を取り出す
    que.pop(); //先頭要素を削除

    // v から辿れる頂点をすべて調べる
    for(int u : G[v]) { //拡張for文 変数uにG[v]の値を入れてる
      if(dist[u] != INF) continue; //すでに発見済みの頂点は探索しない

      //新たな白色頂点uについて距離情報を更新してキューに追加する
      dist[u] = dist[v] + 1;
      pre[u] = v;
      que.push(u);
    }
  }

  for(int i = 1; i < n; i++) {
    if(pre[i] == -1) {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
  for(int i = 0; i < n; i++) {
    if(i == 0) continue;
    int ans = pre[i];
    ans++; //18,19行目で１減らしてたのを元に戻す
    cout << ans << endl;
  }
  return 0;
}
