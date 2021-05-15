#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    ll m,n;cin>>m>>n;
    ll x;cin>>x;
    ll mat[m][n];
    for(ll i=0;i<m;i++){
        for(ll j=0;j<n;j++){
            cin>>mat[i][j];
        }
    }
    ll min=mat[0][0],max=mat[m-1][n-1];
    ll i=0,j=m-1;
    ll c=0;
    while( i<m && j>=0){
        if (mat[i][j] == x){
            c=1;
            break;
        }
        if (mat[i][j] > x){
            j--;
        }    
        else{
            i++; // Check if mat[i][j] < x
        }    
    }
    if(c==1){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
	// your code goes here
	return 0;
}
