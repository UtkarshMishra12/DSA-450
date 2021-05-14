#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    ll n,k;cin>>n>>k;
    ll arr[n];
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    ll min =INT_MAX;
    for(ll i=0;i+k-1<n;i++){
        ll d=arr[i+k-1]-arr[i];
        if(d<min){
            min=d;
        }
    }
    cout<<min;
	// your code goes here
	return 0;
}
