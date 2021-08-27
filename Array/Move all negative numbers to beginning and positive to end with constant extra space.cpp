#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int

vector <int> move(vector <int> v){
    vector <int> n,p;
    for(auto i:v){
        if(i<0){
            n.push_back(i);
        }
        else{
            p.push_back(i);
        }
    }
    vector <int> vv(n);
    for(auto i:p){
        vv.push_back(i);
    }
    return vv;
}

int main() {
    //Call Func
	// your code goes here
	return 0;
}
 