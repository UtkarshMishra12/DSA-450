#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    ll n1,n2,n3;cin>>n1>>n2>>n3;
    ll a[n1],b[n2],c[n3];
    for(ll i=0;i<n1;i++){
        cin>>a[i];
    }
    for(ll i=0;i<n2;i++){
        cin>>b[i];
    }
    for(ll i=0;i<n3;i++){
        cin>>c[i];
    }
    ll i=0,j=0,k=0;
    while(i<n1 && j<n2 && k<n3){
        if(a[i] == b[j] && b[j] == c[k]){
            cout<<a[i]<<" ";
            i++;j++;k++;
        }
        else if(a[i]<b[j]){
            i++;
        }
        else if(b[j]<c[k]){
            j++;
        }
        else{
            k++;
        }
    }
	// your code goes here
	return 0;
}
