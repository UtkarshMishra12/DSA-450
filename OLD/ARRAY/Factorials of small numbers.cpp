#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll fac(ll n){
        if(n<2){
            return 1;
        }
        else{
            return n*fac(n-1);
        }
    }
int main() {
    ll n;cin>>n;
    cout<<fac(n);
	// your code goes here
	return 0;
}

