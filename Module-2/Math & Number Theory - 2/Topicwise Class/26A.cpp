#include <bits/stdc++.h>
using namespace std;

#define ll long long

vector<ll> prime;
void Sieve(ll n) { // TC: O(nloglogn)
    vector<bool> is_prime(n+1, true);
    for (ll p=2; p<=n; p++){
        if (is_prime[p]){
            prime.push_back(p);
            for (ll i=p*p; i<=n; i+=p){
                is_prime[i] = false;
            }
        }
    }
}

int main(){
    Sieve(3001);

    int tc=1;
    // cin >> tc;
    while(tc--){
        int n;
        cin >> n;

        vector<int> frq(n+1);
        for(auto p: prime){
            for(int i=p; i<=n; i+=p){
                frq[i]++;
            }
        }

        int cnt=0;
        for(int i=1; i<=n; i++){
            if(frq[i]==2) cnt++;
        }

        cout << cnt << endl;
    }

    return 0;
}
/*   Author: Hridoy Barua (CS Instructor Phitron)   */