#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t;
	cin >> t;
	for(int c=0;c<t;c++) {
	    
	    int n,m,k,i,j,s,flag;
    	cin >> n >> m >> k;
    	int A[n],B[m];
    	for(int p=0;p<n;p++) {
    	    cin >> A[p];
    	}
    	for(int q=0;q<m;q++) {
    	    cin >> B[q];
    	}
    	i=0;
    	j=0;
    	s = 0;
    	flag = 0;
    	while(i<n && j<m) {
    	    if(A[i]<=B[j]) {
    	        if(s+1==k) {
    	            cout << A[i] << "\n";
    	            flag=1;
    	            break;
    	        }
    	        i++;
    	    }else{
    	        if(s+1==k) {
    	            cout << B[j] << "\n";
    	            flag=1;
    	            break;
    	        }
    	        j++;
    	    }
    	    s++;
    	}
    	
    	while(i<n && flag!=1) {
    	    if(s+1==k) {
    	       cout << A[i] << endl;
    	       break;
    	    }
    	    i++;
    	    s++;
    	}
    	
    	while(j<m && flag!=1) {
    	    if(s+1==k) {
    	       cout << B[j] << endl;
    	       break;
    	    }
    	    j++;
    	    s++;
    	}
    	
    	
	}
		
	return 0;
}