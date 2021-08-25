#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    ll n,k;cin>>n>>k;
    ll arr[n];
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
    ll a=n/k;
    ll h[300]={0};
    for(ll i=0;i<n;i++){
        h[arr[i]]++;
    }
    vector <int> v;
    for(ll i=0;i<n;i++){
        if(h[i]>a){
           v.push_back(i); 
        }
    }
    for(ll i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
	// your code goes here
	return 0;
}
