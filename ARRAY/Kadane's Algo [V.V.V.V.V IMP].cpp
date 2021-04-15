#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    ll n;cin>>n;
    ll arr[n];
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
    ll cursum=0,maxsum=0;
    for(ll i=0;i<n;i++){
        cursum=cursum+arr[i];
        if(cursum>maxsum){
            maxsum=cursum;
        }
        if(cursum<0){
            cursum=0;
        }
    }
    cout<<maxsum;
	// your code goes here
	return 0;
}
