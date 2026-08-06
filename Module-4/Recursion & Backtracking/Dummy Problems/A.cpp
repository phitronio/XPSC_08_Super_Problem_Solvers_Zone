#include<bits/stdc++.h>  
using namespace std;  
int main()  
{  
    int n,cnt1,cnt2,x,y;  
    while(cin>>n)  
    {  
        cnt1=cnt2=0;  
        for(int i=0; i<n; i++)  
        {  
            cin>>x>>y;  
            if(x>0)  
                cnt1++;  
            else cnt2++;  
        }  
        if(cnt1>1&&cnt2>1)  
            puts("No");  
        else  
            puts("Yes");  
    }  
    return 0;  
} 