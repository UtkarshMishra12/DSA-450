#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    ll n;cin>>n;
    ll arr[n];
    for(ll i=0;i<n;i++){
        cin>>arr[i];
        //h[arr[i]]++;
    }
    ll h[300]={0};
    for(ll i=0;i<n;i++){
        h[arr[i]]++;
    }
    for(ll i=0;i<n;i++){
        if(h[i]>1){
            cout<<i;
        }
    }
	// your code goes here
	return 0;
}
