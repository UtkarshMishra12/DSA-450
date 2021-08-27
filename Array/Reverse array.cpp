#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int


vector <int> reverse(vector <int> v){
    vector <int> vv(v);
    //reverse(vv.begin(),vv.end());
    for(int i=nums.size()-1;i>=0;i--){
        vv.push_back(i); //v is blank
    }
    return vv;
}
int main() {
    //Call Func
	// your code goes here
	return 0;
}
 