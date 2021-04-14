#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    ll n,m;cin>>n>>m;
    ll arr1[n],arr2[m];
    unordered_map<int,int> map;
    for(ll i=0;i<n;i++){
        cin>>arr1[i];
        map[arr1[i]]++;
    }
    for(ll i=0;i<m;i++){
        cin>>arr2[i];
        map[arr2[i]]++;
    }
    cout<<map.size();
   
    
    
	// your code goes here
	return 0;
}
 