#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    ll n;cin>>n;
    ll arr[n];
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
    ll res=0;
    for(ll i=1;i<n-1;i++){
        
        ll left=arr[i];
        for(ll j=0;j<i;j++){
            left=max(left,arr[j]);
        }
        
        ll right=arr[i];
        for(ll j=i+1;j<n;j++){
            right=max(right,arr[j]);
        }
        
        
        res=res+(min(left,right)-arr[i]);
        
    }
    cout<<res;
	// your code goes here
	return 0;
}
