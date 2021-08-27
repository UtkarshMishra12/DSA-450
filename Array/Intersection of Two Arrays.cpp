#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int

void Intersection(vector <int> v1, vector <int> v2){
    int m=v1.size();
    int n=v2.size();
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    int i=0,j=0;
    vector <int> v;
    while(i<m && j<n){
        if(v1[i]==v2[j]){
            v.push_back(v1[i]);
            i++;
            j++;
        }
        else if(v1[i]>v2[j]){
            j++;
        }
        else{
            i++;
        }
    }
    for(auto i:v){
        cout<<i<<" ";
    }
    //return v;
}

int FuncCall(){
    
    
}

int main() {
    vector <int> n1{1,2,2,1}, n2{2,2};
    Intersection(n1,n2);
    //Call Func
	// your code goes here
	return 0;
}
 