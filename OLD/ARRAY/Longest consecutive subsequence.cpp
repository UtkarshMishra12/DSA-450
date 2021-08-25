#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    ll n;cin>>n;
    ll arr[n+1];
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    vector <ll> v;
    ll h[1000000]={0};
    //Counting Frequency
    for(ll i=0;i<n;i++){
        h[arr[i]]++;
    }
    //Making Unique Vector 
    for(ll i=0;i<=arr[n-1];i++){
        if(h[i]>0){
            v.push_back(i);
        }
    }
    ll count=0,ans=0;
    for(ll i=0;i<v.size();i++){
        if(i>0 && v[i]==v[i-1]+1){
            count++;
        }
        else{
            ans=max(ans,count);
            count=1;
        }
    }
    cout<<max(ans,count);
	// your code goes here
	return 0;
}