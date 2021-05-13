#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    ll n,m;cin>>n>>m;
    ll a[n],b[m];
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    for(ll i=0;i<m;i++){
        cin>>b[i];
    }
    sort(a,a+n);
    sort(b,b+m);
    ll c=0;
    for(ll i=0;i<m;i++){
        if(a[i]!=b[i]){
            c++;
            break;
        }
    }
    if(c==0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO";
    }
    
	// your code goes here
	return 0;
}
//1 3 7 11 13 21
//1 3 7 11