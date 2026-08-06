#include <bits/stdc++.h>
using namespace std;

void solve(){
	int N;
	cin >> N;
	vector<int> freq(10);
	int ans = 0;
	for(int i = 0; i < N; i++){
		int x;
		cin >> x;
		freq[x]++;
		if(freq[0] >= 3 && freq[1] && freq[2] >= 2 && freq[3] && freq[5]){
			if(!ans) ans = i+1;
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
