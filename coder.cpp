#include<bits/stdc++.h>
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define db double
#define bo bool
#define vo void
#define ch char
#define fl float
#define ull unsigned long long
#define ll long long
#define str string
#define re return
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()
using namespace std;
const int MAX=200000;
int main()
{
    faster
    ll n,res=0,i,c,j,t;
    cin>>n;
    vector<ll> a(n),d(MAX+1,0);
    for(i=0;i<n;i++)
	{
		cin>>a[i];
		d[a[i]]++;
	}
	for(i=0;i<n;i++)
	for(j=i;j<n;j++)
	{
		t=a[i]+a[j];
		if(t>MAX) continue;
		c=d[t];
		if(a[i]==t) c--;
		if(a[j]==t) c--;
		res+=c;
	}
	cout<<res;
    re 0;
}