#include <stdio.h>
#include <algorithm>
#include <iostream>
#include <vector>
#include <assert.h>
#include <map>
#include <set>
#include <stdlib.h>
#include <math.h>
#include <string>
#include <time.h>
#include <string.h>
#include <queue>
#include <complex>
#include <stack>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
typedef complex<double> base;
ll mod=1e9+7;
double eps=1e-9;
ll exp(ll x,ll y){if(y<0) return 0; ll ret=1;for(;y;y>>=1,x=(x*x)%mod){if(y&1)ret=(ret*x)%mod;}return ret;}
ll pexp(ll x, ll y){if(y<0) return 0; ll ret=1; for(;y;y>>=1,x=(x*x)){if(y&1)ret=(ret*x);}return ret;}
ll gcd(ll x,ll y){if(!x||!y) return x+y; return x%y==0?y:gcd(y,x%y);}
ll lcm(ll x,ll y){return x*(y/gcd(x,y));}
ll bsum(ll u,ll b){ll ret=0;if(u<b)return u;while(u){ret+=u%b;u/=b;}return ret;}
ll prival(ll u,ll p){ll cn=0;while(u%p==0){cn++;u=u/p;}return cn;}
ll minv(ll a,ll b){return 1<a?b-minv(b%a,a)*b/a:1;}
ll extm(ll a,ll b){ll ret=0;while(a!=0){if(a%2==1){ret+=b;ret%=mod;}a>>=1;b=(2*b)%mod;}return ret;}   
ll eaphi(ll x){ll t=x,ret=x,i;for(i=2;i*i<=x;i++){if(t%i==0){ret-=ret/i;while(t%i==0) t/=i;}}if(t!=1) ret-=ret/t;return ret;}
ll eadivc(ll x){ll ret=0;ll i;for(i=1;i*i<=x;i++){if(x%i==0 && i*i!=x) ret+=2;if(x%i==0 && i*i==x) ret+=1;}return ret;}
ll ndig(ll x, ll b){ll ret=0;while(x){x/=b; ret++;}return ret;}
bool isprime(ll x){if(x<=1) return false; for(ll i=2;i*i<=x;i++){if(x%i==0){return false;}}return true;}
int a, b, c, d;
int l[4], r[4];
int u, v, w;

int main(void)
{
	cin>>a>>b>>c>>d;
	l[3]=d; r[3]=2*d;
	l[3]=max(c,l[3]); r[3]=min(2*c,r[3]);
	l[2]=2*d+1; l[1]=2*d+1;
	l[2]=max(l[2],b); r[2]=2*b;
	l[1]=max(l[1],a); r[1]=2*a;
	if(l[3]>r[3]) 
	{
		cout<<-1; return 0;
	}	
	w=l[3]; l[2]=max(l[2],w+1);
	if(l[2]>r[2])
	{
		cout<<-1; return 0;
	}
	v=l[2];
	l[1]=max(l[1],v+1);
	if(l[1]>r[1])
	{
		cout<<-1; return 0;
	}
	u=l[1];
	cout<<u<<endl<<v<<endl<<w;
	return 0;
	
}