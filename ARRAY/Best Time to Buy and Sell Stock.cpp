#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    ll n;cin>>n;
    vector <int> v;
    for(ll i=0;i<n;i++){
        ll a;cin>>a;
        v.push_back(a);
    }
    ll curmin = INT_MAX, maxprofit=0;
    for(ll i=0;i<n;i++){
        if (v[i] < curmin){
            curmin = v[i];
        }
        else if (v[i] - curmin > maxprofit){
            maxprofit = v[i] - curmin;
        }    
    }
    cout<<maxprofit;
	// your code goes here
	return 0;
}
