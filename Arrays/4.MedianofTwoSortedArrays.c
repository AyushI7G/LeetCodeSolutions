double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    int n = nums1Size + nums2Size;
    int res[n];
    int i = 0, j = 0, k = 0;
    while(i < nums1Size && j < nums2Size){
        if(nums1[i] <= nums2[j]){
            res[k] = nums1[i];
            i++;
            k++;
        }
        else{
            res[k] = nums2[j];
            j++;
            k++;
        }
    }
    while(i < nums1Size){
        res[k++] = nums1[i++];
    }
    while(j < nums2Size){
        res[k++] = nums2[j++];
    }
    double median = 0;
    if(n % 2 == 0){
        int m = n/2;                     
        median = (res[m-1] + res[m])/2.0;
        return median;            
    }
    else{
        int m = n/2;
        median = res[m];
        return median;
    }
}
