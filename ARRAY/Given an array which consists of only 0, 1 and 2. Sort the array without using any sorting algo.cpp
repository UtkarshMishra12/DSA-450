#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    ll n;cin>>n;
    ll arr[n];
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
    ll a=0,b=0,c=0;
    for(ll i=0;i<n;i++){
        if(arr[i]==0){
            a++;
        }
        if(arr[i]==1){
            b++;
        }
        if(arr[i]==2){
            c++;
        }
    }
    //FOR PRINTING
    for(ll i=0;i<a;i++){
        cout<<"0"<<" ";
    }
    for(ll i=0;i<b;i++){
        cout<<"1"<<" ";
    }
    for(ll i=0;i<c;i++){
        cout<<"2"<<" ";
    }
	// your code goes here
	return 0;
}
