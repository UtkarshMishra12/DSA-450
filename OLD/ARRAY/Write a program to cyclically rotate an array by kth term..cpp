#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    ll n;cin>>n;
    ll arr[n];
    ll k;cin>>k;
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
    ll a=k%n,ar[n]={0};
    for(ll i=0;i<n;i++){
        ar[a++]=arr[i];
        if(a==n) a=0;
    }
    for(ll i=0;i<n;i++){
        cout<<ar[i]<<" ";
    }
	// your code goes here
	return 0;
}
