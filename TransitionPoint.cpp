// Function to find the transition point
int transitionPoint(int arr[], int n) {
    // code here
    int l = 0;
    int r = n;
    while(l<r) {
        int mid = l + (r-l)/2;
        if((mid > 0 && arr[mid-1]==0 && arr[mid]==1) || 
        (mid==0 && arr[mid]==1)){
            return mid;
        }
        else if(arr[mid]!=1) {
            l=mid+1;
        }else{
            r=mid;
        }
    }
    return -1;
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