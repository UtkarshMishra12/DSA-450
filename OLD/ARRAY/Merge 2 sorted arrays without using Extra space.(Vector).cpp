#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    ll n,m;cin>>n>>m;
    vector <int> a1;
    vector <int> a2;
    vector <int> arr(n+m);
    for(ll i=0;i<n;i++){
        ll a;cin>>a;
        a1.push_back(a);
    }
    for(ll i=0;i<m;i++){
        ll b;cin>>b;
        a2.push_back(b);
    }
    merge(a1.begin(), a1.end(), a2.begin(), a2.end(), arr.begin());
    for(ll i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
	// your code goes here
	return 0;
}
