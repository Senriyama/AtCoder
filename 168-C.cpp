#include <bits/stdc++.h>

using namespace std;
#define PI 3.14159265358979

int main() {
  long double a, b, h, m;
  cin >> a >> b >> h >> m;
  long double complex = cosl(((h * 60 - 11 * m) / 360) * PI);
  long double ans2 = (a * a) + (b * b) - 2 * (a * b) * complex;
  long double ans = sqrt(ans2);
  //桁数表示にはout << fixed << setprecision(15) << ans << endl;を用いる.
  cout << fixed << setprecision(15) << ans << endl;
  return 0;
}
