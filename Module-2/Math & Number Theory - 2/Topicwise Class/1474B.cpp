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
    Sieve(10000000);

    int tc=1;
    cin >> tc;
    while(tc--){
        int d;
        cin >> d;

        ll x = *lower_bound(prime.begin(), prime.end(), 1+d);
        ll y = *lower_bound(prime.begin(), prime.end(), x+d);

        ll n = x*y;
        cout << n << endl;

    }

    return 0;
}
/*   Author: Hridoy Barua (CS Instructor Phitron)   */