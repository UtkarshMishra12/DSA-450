#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    ll n;cin>>n;
    ll arr[n];
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<*min_element(arr+1,arr+n)<<endl;
    cout<<*max_element(arr+1,arr+n);
	// your code goes here
	return 0;
}
