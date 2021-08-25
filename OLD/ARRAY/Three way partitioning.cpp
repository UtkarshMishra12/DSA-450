#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    ll n,a,b;cin>>n>>a>>b;
    ll arr[n];
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
    vector <ll> v1,v2,v3;
    for(ll i=0;i<n;i++){
        if(arr[i]<a){
            v1.push_back(arr[i]);
        }
        else if(arr[i]>=a && arr[i]<=b){
            v2.push_back(arr[i]);
        }
        else{
            v3.push_back(arr[i]);
        }
    }
    for(ll i=0;i<v1.size();i++){
        cout<<v1[i]<<" ";
    }
    cout<<endl;
    for(ll i=0;i<v2.size();i++){
        cout<<v2[i]<<" ";
    }
    cout<<endl;
    for(ll i=0;i<v3.size();i++){
        cout<<v3[i]<<" ";
    }
	// your code goes here
	return 0;
}
