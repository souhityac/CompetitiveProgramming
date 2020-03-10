/* Input:
The first line of input contains an integer T denoting the 
number of test cases. T test cases follow. 
Each test case contains two lines of input: 
The first line contains N and X(element whose occurrence 
needs to be counted). 
The second line contains the elements of the array separated 
by spaces. */

/* Output:
For each test case, print the count of the occurrences of X in 
the array, if count is zero then print -1. */


#include <bits/stdc++.h>
using namespace std;

int find_left(int A[], int n, int x) {
    int low = 0;
    int high = n;
    while(low<high) {
        int mid = low + (high-low)/2;
        if((A[mid] == x) && (A[mid-1] < x)) {
            return (mid-1);
        }
        else if(A[mid] < x) {
            low = mid;
        }
        else {
            high = mid;
        }
    }
    return -1;
}

int find_right(int A[], int n, int x) {
    int low = 0;
    int high = n;
    while(low<high) {
        int mid = low + (high-low)/2;
        if((A[mid] == x) && (A[mid+1] > x)) {
            return (mid+1);
        }
        else if(A[mid] > x) {
            high = mid;
        }
        else {
            low = mid;
        }
    }
    return -1;
}

int bin_search(int A[], int n, int x) {
    int low = 0;
    int high = n;
    while(low<high) {
        int mid = low + (high-low)/2;
        if(A[mid] == x) {
            return 1;
        }
        else if(A[mid] < x) {
            low = mid + 1;
        }
        else {
            high = mid;
        }
    }
    return -1;
}

int main() {
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t,n,x;
	cin >> t;
	for(int j=0;j<t;j++) {
	    cin >> n >> x;
	    int A[n];
	    for(int i=0;i<n;i++) {
	        cin >> A[i];
	    }
	    
	    if(bin_search(A,n,x) != -1) {
	        int left = find_left(A,n,x);
	        int right = find_right(A,n,x);
	        cout << right-left-1;
	    }
	    else {
	        cout << -1;
	    }
	    
	    cout << "\n";
	}
	return 0;
}
