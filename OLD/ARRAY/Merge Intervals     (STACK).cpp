#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    ll n;cin>>n;
    vector <pair<int,int>> a;
    for(ll i=0;i<n;i++){
        ll x,y;cin>>x>>y;
        a.push_back({x,y});
    }
    sort(a.begin(),a.end());
    stack <pair<int,int>> s;
    s.push({a[0].first,a[0].second});
    for(ll i=1;i<n;i++){
        ll start1= s.top().first;
        ll end1= s.top().second;
        ll start2= a[i].first;
        ll end2= a[i].second;
        
        if(end1<start2){
            s.push({start2,end2});
        }
        else{
            s.pop();
            end1= max(end1,end2);
            s.push({start1,end1});
        }
    }
    while(!s.empty()){
        cout<<s.top().first<<" "<<s.top().second<<" ";
        s.pop();
    }
	// your code goes here
	return 0;
}
