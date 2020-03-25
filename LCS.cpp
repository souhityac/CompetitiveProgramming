#include <cmath>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	//code
	int t,n;
	cin >> t;
	for(int e=0;e<t;e++) {
	    
	    cin >> n;
	    int arr[n];
	    for(int i=0;i<n;i++) {
	        cin >> arr[i];
	    }
	    int dp[n],lis;
	    lis = 1;
	    dp[0] = 1;
	    for (int i=1;i<n;i++) {
	        dp[i] = 1;
	    }
	    for (int i=1;i<n;i++) {
	        int j = 0;
	        while(j<i) {
	            if(arr[j] < arr[i]) {
	                dp[i] = std::max(dp[i], dp[j]+1);
	                lis = std::max(lis,dp[i]);
	            }
	            j++;
	        }
	    }
	    cout << lis << endl;
	    
	}
	    
	return 0;
}