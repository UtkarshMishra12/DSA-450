#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    string s1,s2;cin>>s1>>s2;
    string s3(s1);
    reverse(s3.begin(),s3.end());
    ll c=0;
    for(ll i=0;i<s1.size();i++){
        if(s2[i]!=s3[i]){
            c++;
            break;
        }
    }
    if(c==1){
        cout<<"NO";
    }
    else{
        cout<<"YES";
    }
	// your code goes here
	return 0;
}
