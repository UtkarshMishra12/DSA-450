#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    ll n,k;cin>>n>>k;
    ll arr[n];
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
    ll small=0,big=0;
    for(ll i=0;i<n;i++){
        if(arr[i]<=k){
            small++;
        }
    }
    for(ll i=0;i<small;i++){
        if(arr[i]>k){
            big++;
        }
    }
    ll ans=big;
    for(ll i=0, j=small;j<n;i++,j++){
        if (arr[i] > k){
            big--;
        }  
        if (arr[j] > k){
            big++;
        }
        ans = min(ans,big);
    }
    cout<<ans;
	// your code goes here
	return 0;
}
