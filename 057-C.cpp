/*自分の解答、TLE
#include <iostream>
#include <string>
#include <cmath> //これはlogを使うときに必要
#include <vector> //これは配列(vector)を使うときに必要
#include <math.h> //べき乗を使うときに必要
using namespace std;

long long digitbigger(long long a, long long b) {
  long long d;
  d = log10(b) + 1;
  return d;
}

int main() {
  long long n;
  cin >> n;
  long long ans = digitbigger(1, n);
  for(int i = 1; i * i <= n; i++) {
    if(n % i == 0) {
      ans = min(ans, digitbigger(i, n/i));
    }
  }
  cout << ans << endl;
  return 0;
}
*/

//正答例
#include <bits/stdc++.h>
using ll=long long;

int cnt_digits(ll N) {
  int digits = 0;

    while(N > 0) {
      N /= 10;
      digits++;
    }
    return digits;
}

int main(void){
    ll N;
cin >> N;
int ans = cnt_digits(N); // 1*N=N max(cnt_digits(1),cnt_digits(N))=cnt_digits(N)
    for(ll A = 1LL; A * A <= N; ++A){
        if(N % A != 0) continue;
        const ll B = N / A;

        const int cur = max(cnt_digits(A), cnt_digits(B));

        if(ans > cur){
            ans = cur;
          }
      }
    cout << ans << endl;
    return 0;
}
