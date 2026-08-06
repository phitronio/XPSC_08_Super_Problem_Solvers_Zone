#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int tc=1;
    cin >> tc;
    while(tc--){
        int n;
        cin >> n;
        vector<int> a(n);
        map<ll,ll> mp;
        for(auto &i: a){
            cin >> i;
            mp[i]++;
        }

        map<ll,ll> frog;
        for(int i=1; i<=n; i++){
            for(int mul=i; mul<=n; mul += i){
                frog[mul] += mp[i];
            }
        }

        ll cnt=0;
        for(auto [cor, frog_cnt]: frog){
            cnt = max(cnt, frog_cnt);
        }

        cout << cnt << endl;
    }

    return 0;
}
/*   Author: Hridoy Barua (CS Instructor Phitron)   */