#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    string s;cin>>s;
    map <char,ll> m;
    for(ll i=0;i<s.size();i++){
        m[s[i]]++;
    }
    map <char,ll> ::iterator it;
    for(it=m.begin();it!=m.end();it++){
        if(it->second>1)
        cout<<it->first<<" "<<it->second<<endl;
    }
	// your code goes here
	return 0;
}
