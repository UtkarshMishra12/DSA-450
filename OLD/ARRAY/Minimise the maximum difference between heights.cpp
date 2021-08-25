#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    ll n;cin>>n;
    ll k;cin>>k;
    ll arr[n];
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
    ll a= *max_element(arr,arr+n);
    ll b= *min_element(arr,arr+n);
    cout<<((a-k)-(b+k));
	// your code goes here
	return 0;
}
