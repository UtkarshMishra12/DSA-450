#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    string s;cin>>s;
    ll n=s.size();
    char arr[n];
    ll b=0;
    while(n--){
        arr[b++]=s[n];
    }
    for(ll i=0;i<b;i++){
        cout<<arr[i]<<" ";
    }
	// your code goes here
	return 0;
}
