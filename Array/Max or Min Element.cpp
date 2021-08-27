#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int


void maxormin(vector <int> v){
    int max= *max_element(v.begin(),v.end());
    int min= *min_element(v.begin(),v.end());
    cout<<max<<" "<<min;
}

int main() {
    vector <int> v={1,2,3,4,5,6};
    maxormin(v);
    //Call Func
	// your code goes here
	return 0;
}
 