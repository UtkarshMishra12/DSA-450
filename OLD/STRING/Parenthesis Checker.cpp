#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    string s;
    getline(cin,s);
    ll a=0,b=0,c=0;
    for(ll i=0;i<s.size();i++){
        if(s[i]=='{' || s[i]=='}'){
            a++;
        }
        else if(s[i]=='(' || s[i]==')'){
            b++;
        }
        else{
            c++;
        }
    }
    if(a%2==0 && b%2==0 && c%2==0){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
	// your code goes here
	return 0;
}
