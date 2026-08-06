#include <bits/stdc++.h>
using namespace std;

using ll = int64_t;
void solve(){
	ll X;
	cin >> X;
	int x = X;
	for(int b = 0; b < 30; b++){
		int y = (1 << b) - 1;
		int z = x ^ y;
		if(y < x && z < x + y && y < x + z && x < y + z){
			cout << y << '\n';
			return;
		}
	}
	cout << -1 << '\n';
}

int main(){
	ios_base::sync_with_stdio(false), cin.tie(nullptr);
	int T;
	cin >> T;
	while(T--) solve();
}
