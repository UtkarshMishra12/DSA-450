#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    string s;cin>>s;
    ll n=s.size();
    ll c0=0,c1=0,count=0;
    for(ll i=0;i<n;i++){
        if(s[i]=='0'){
            c0++;
        }
        else{
            c1++;   
        }
        if(c0==c1){
            count++;
        }
    }
    if(c0!=c1){
        cout<<"-1";
    }
    else{
        cout<<count;
    }
	// your code goes here
	return 0;
}
