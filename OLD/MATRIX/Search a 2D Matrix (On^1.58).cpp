#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    ll m,n;cin>>m>>n;
    ll k;cin>>k;
    ll arr[m][n];
    for(ll i=0;i<m;i++){
        for(ll j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    ll c=0;
    for(ll i=0;i<m;i++){
        for(ll j=0;j<n;j++){
            if(arr[i][j]==k){
                c++;
                break;
            }
        }
    }
    if(c==1){
        cout<<"TRUE";
    }
    else{
        cout<<"FALSE";
    }
	// your code goes here
	return 0;
}
