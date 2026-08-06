#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int tc=1;
    // cin >> tc;
    while(tc--){
        int n;
        cin >> n;
        n++;

        vector<int> color(n+1,1);
        int color_need=1;
        for(int i=2; i<=n; i++){
            if(color[i]==1){
                for(int j=i+i; j<=n; j+=i){
                    color[j]=2;
                    color_need = max(color_need, color[j]);
                }
            }
        }

        cout << color_need << endl;
        for(int i=2; i<=n; i++) cout << color[i] << " ";
        cout << endl;


    }

    return 0;
}
/*   Author: Hridoy Barua (CS Instructor Phitron)   */