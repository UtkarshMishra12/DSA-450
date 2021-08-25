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
    ll l,r,c=0;
    for(ll i=0;i<n-2;i++){
        l=i+1;
        r=n-1;
        while(l<r){
            if(arr[i]+arr[l]+arr[r]==k){
             c=1;
             break;
            }
            else if(arr[i]+arr[l]+arr[r]<k){
                l++;
            }
            else{
                r--;
            }
        }
    }
    if(c==1){
        cout<<"1"<<endl;
    }
    else{
        cout<<"0";
    }
	// your code goes here
	return 0;
}
