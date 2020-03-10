void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int A[], int l, int r) {
    
    //Last element chosen as pivot.
    int p = A[r];
    int i = l-1;
    int j = i+1;
    while(i<j and j<r) {
        if(A[j] <= p) {
            i++;
            swap(A+j,A+i);
        }
        j++;
    }
    i++;
    swap(A+i,A+r);
    return i;
}

void QuickSort(int A[], int l, int r) {
    
    if(l<r) {
        int p = partition(A,l,r);
        QuickSort(A,l,p-1);
        QuickSort(A,p+1,r);
    }

}