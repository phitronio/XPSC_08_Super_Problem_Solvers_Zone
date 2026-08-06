#include<bits/stdc++.h>  
using namespace std;  
const int N=1e5+10;  
int main()  
{  
    int a,b,c,ans;  
    while(cin>>a>>b>>c)  
    {  ans=-1;  
       for(int i=1;i<N;i++)  
       {  
           a*=10;  
           if(a/b==c)  
           {  
               ans=i;  
               break;  
           }  
           a%=b;  
       }  
       cout<<ans<<endl;  
    }  
    return 0;  
}  
