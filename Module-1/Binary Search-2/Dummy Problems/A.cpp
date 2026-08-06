#include <bits/stdc++.h>
using namespace std;

void solve(){
	int N;
	cin >> N;
	vector<int> A(N);
	for(int i = 0; i < N; i++){
		cin >> A[i];
	}
	int cur = A[0];
	for(int i = 1; i < N; i++){
		cur += A[i]-1;
	}
	cout << cur << '\n';
}

int main(){
	ios_base::sync_with_stdio(false), cin.tie(nullptr);
	int T;
	cin >> T;
	while(T--) solve();
}
