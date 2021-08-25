#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    string s;cin>>s;
    string s1(s);
    ll c=0;
    reverse(s1.begin(),s1.end());
    for(ll i=0;i<s.size();i++){
        if(s[i]!=s1[i]){
            c=1;
            break;
        }
    }
    if(c==1){
        cout<<"NOT A PALINDROME";
    }
    else{
        cout<<"PALINDROME";
    }
	// your code goes here
	return 0;
}
