#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    ll n;cin>>n;
    ll arr[n];
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
    ll arr1[100],arr2[100];
    ll a=0,b=0;
    for(ll i=0;i<n;i++){
        if(arr[i]<0){
            arr1[a++]=arr[i];
        }
        else{
            arr2[b++]=arr[i];
        }
    }
    //FOR PRINTING
    for(ll i=0;i<a;i++){
        cout<<arr1[i]<<" ";  
    }
    for(ll i=0;i<b;i++){
        cout<<arr2[i]<<" ";
    }
	// your code goes here
	return 0;
}
