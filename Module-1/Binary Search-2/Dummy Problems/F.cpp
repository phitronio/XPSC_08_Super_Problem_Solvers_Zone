#include <bits/stdc++.h>
using namespace std;
#ifdef DEBUG
#include "debug.hpp"
#else
#define debug(...) void(0)
#endif
using i64 = long long;
int main() {
  cin.tie(nullptr)->sync_with_stdio(false);
  int t;
  cin >> t;
  for (int ti = 0; ti < t; ti += 1) {
    string s;
    cin >> s;
    int n = s.size(), ans = n - 1;
    for (int i = 0, z = 0; i < n; i += 1) {
      if (s[i] == '0') {
        z += 1;
      } else {
        ans = min(ans, n - z - 1);
      }
    }
    cout << ans << "\n";
  }
}