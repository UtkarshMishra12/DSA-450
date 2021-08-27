#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int

vector <int> FuncCall(){
    
}

int maxSubarraySum(int arr[], int n){
        int cursum=0,maxsum=INT_MIN;
        for(int i=0;i<n;i++){
           cursum+=arr[i];
           if(cursum>maxsum){
              maxsum=cursum;
           }
           if(cursum<0){
             cursum=0;
           }
        }
        return maxsum;
    }

int main() {
    //Call Func
	// your code goes here
	return 0;
}
 