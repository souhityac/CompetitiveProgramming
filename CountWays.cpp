#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	int t,n,amt;
	cin >> t;
	for(int e=0;e<t;e++) {
	    cin >> n;
	    int coins[n];
	    for(int i=0;i<n;i++) {
	        cin >> coins[i];
	    }
	    cin >> amt;
	    int dp[n][amt+1];
	    dp[0][0] = 1;
	    for(int j=1;j<amt+1;j++) {
	        if((j%coins[0]) == 0) {
	            dp[0][j] = 1;
	        }
	        else {
	            dp[0][j] = 0;
	        }
	    }
	    for(int i=1;i<n;i++) {
	        dp[i][0] = 1;
	    }
	    for(int i=1;i<n;i++) {
	        for(int j=0;j<amt+1;j++) {
	            if(j<coins[i]) {
	                dp[i][j] = dp[i-1][j];
	            }
	            else{
	                dp[i][j] = dp[i-1][j] + dp[i][j-coins[i]];
	            }
	        }
	    }
	    cout << dp[n-1][amt] << endl;
	}
	return 0;
}