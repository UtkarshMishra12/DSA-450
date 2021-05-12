#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    ll n,k;cin>>n>>k;
    ll arr[n];
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
    ll c=0;
    // NAIVE APPROACH O(n^2)
    for(ll i=0;i<n-1;i++){
        for(ll j=i+1;j<n;j++){
            if(arr[i]+arr[j]==k){
                c++;
            }
        }
    }
    cout<<c;
	// your code goes here
	return 0;
}
