#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    ll n;cin>>n;
    vector <ll> v1,v2;
    for(ll i=0;i<n;i++){
        ll a;cin>>a;
        v1.push_back(a);
    }
    for(ll i=0;i<n;i++){
        ll a;cin>>a;
        v2.push_back(a);
    }
    ll s=n+n;
    vector <ll> v3(s);
    merge(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());
    ll a=s/2;
    ll b=a-1;
    cout<<(v3[a]+v3[b])/2;
	// your code goes here
	return 0;
}
