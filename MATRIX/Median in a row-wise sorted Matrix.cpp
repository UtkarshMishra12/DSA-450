#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    ll m,n;cin>>m>>n;
    ll mat[m][n];
    for(ll i=0;i<m;i++){
        for(ll j=0;j<n;j++){
            cin>>mat[i][j];
        }
    }
    vector <ll> v;
    for(ll i=0;i<m;i++){
        for(ll j=0;j<n;j++){
            v.push_back(mat[i][j]);
        }
    }
    sort(v.begin(), v.end());
    /*for(ll i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }*/
    cout<<v[(m*n)/2];
	// your code goes here
	return 0;
}
