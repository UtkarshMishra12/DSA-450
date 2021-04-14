#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    ll n;cin>>n;
    ll arr[n];
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
    for(ll i=n-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }
	// your code goes here
	return 0;
}
