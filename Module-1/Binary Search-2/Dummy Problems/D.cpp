#include <bits/stdc++.h>
using namespace std;

using ll = int64_t;
void solve(){
	ll N, X;
	cin >> N >> X;
	vector<ll> A(N);
	for(int i = 0; i < N; i++){
		cin >> A[i];
	}
	sort(A.rbegin(), A.rend());
	int ans = 0;
	int cur = 0;
	ll l = 0;
	while(cur < N){
		cur++;
		l++;
		if(l * A[cur-1] >= X){
			ans++;
			l = 0;
		}
	}
	cout << ans << '\n';
}

int main(){
	ios_base::sync_with_stdio(false), cin.tie(nullptr);
	int T;
	cin >> T;
	while(T--) solve();
}
