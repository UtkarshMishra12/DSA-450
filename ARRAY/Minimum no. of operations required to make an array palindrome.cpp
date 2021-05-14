#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    ll n;cin>>n;
    vector <ll> v;
    for(ll i=0;i<n;i++){
        ll a;cin>>a;
        v.push_back(a);
    }
    vector <ll> v2(v);
    reverse(v2.begin(),v2.end());
    ll c=0;
    for(ll i=0;i<n;i++){
        if(v[i]!=v2[i]){
            c++;
        }
    }
    cout<<c;
	// your code goes here
	return 0;
}
