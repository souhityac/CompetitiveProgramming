#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <algorithm>

using namespace std;

/* Input format: 
T - number of test cases
N - number of elements in the set
set - N space separated elements
sum - target sum

Print the subset if target sum possible with subset of the given set else print false. */

int main() {
    
	int t,n,sum;
	cin >> t;
	for(int e=0;e<t;e++) {
		cin >> n;
		int set[n];
		for(int i=0;i<n;i++) {
			cin >> set[i];
		}
		cin >> sum;
		int dp[n][sum+1];
		for(int i=0;i<n;i++) {
			dp[i][0] = 1;
		}
		for(int j=1;j<sum+1;j++) {
		    if(set[0] == j) {
		        dp[0][j] = 1;
		    }
		    else {
		        dp[0][j] = 0;
		    }
		}
	
		for(int i=1;i<n;i++) {
			for(int j=1;j<sum+1;j++) {

				if(j<set[i]) {
					dp[i][j] = dp[i-1][j];
				}
				else {
				    //can use bitwise-OR operation instead of max
					dp[i][j] = std::max(dp[i-1][j-set[i]],dp[i-1][j]);
				}
			}
		}
        /*for(int i=0;i<n;i++) {
		    for(int j=0;j<sum+1;j++) {
		        cout << dp[i][j] << " ";
		    }
		    cout << endl;
		}*/
		
		if(dp[n-1][sum] == 1) {
		    int l = n-1;
		    int r = sum;
		    while(r > 0) {
		        if(l==0) {
		            r = r - set[l];
		        }
		        else{
		            if(dp[l][r] != dp[l-1][r]) {
		            cout << set[l] << " ";
		            r = r-set[l];
		            l = l-1;
		            }
		            else {
		                l = l-1;
		            }
		        }
		        
		  }
		  cout << endl;      
		}
		else {
		    cout << "False" << endl;
		}
		

	}
	return 0;
}