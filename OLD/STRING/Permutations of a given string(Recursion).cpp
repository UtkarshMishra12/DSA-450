#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void printseq(string s, ll l,ll r){
    if(l==r){
        cout<<s<<" ";
    }
    else{
        for(ll i=l;i<=r;i++){
            swap(s[l],s[i]);
            printseq(s,l+1,r);
            swap(s[l],s[i]);
        }
    }
}
int main() {
    string s;cin>>s;
    ll n=s.size();
    ll l=0,r=n-1;
    printseq(s,l,r);
	// your code goes here
	return 0;
}
