#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int


int main() {
    vector <int> v;
    ll a=0,b=0,c=0;
    for(ll i=0;i<n;i++){
        if(arr[i]==0){
            a++;
        }
        else if(arr[i]==1){
            b++;
        }
        else{
            c++;
        }
    }
    while(a--){
        v.push_back(0);
    }
    while(b--){
        v.push_back(1);
    }
    while(c--){
        v.push_back(2);
    }
    //Call Func
	// your code goes here
	return 0;
}
 