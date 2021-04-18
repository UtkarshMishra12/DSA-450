#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    ll n;cin>>n;
    vector <int> a;
    for(ll i=0;i<n;i++){
        ll x;cin>>x;
        a.push_back(x);
    }
    ll idx=0;
    for(ll i=n-1;i>0;i--){
        if(a[i]>a[i-1]){
            idx=i;
            break;
        }
    }
    if(idx==0){
        reverse(a.begin(),a.end());
    }
    else{
        ll prev=idx;
        for(ll i=idx+1;i<n;i++){
            if(a[i]>a[idx+1] and a[i]<=a[prev]){
                prev=i;
            }
        }
        swap(a[idx-1],a[prev]);
        reverse(a.begin()+idx,a.end());
    }
    for(ll i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
	// your code goes here
	return 0;
}
