class Solution {
    public double findMedianSortedArrays(int[] nums1, int[] nums2) {
        int [] newarr = new int [nums1.length + nums2.length];
        int i = 0, j = 0, k = 0;
        while (i < nums1.length && j < nums2.length){ 
            if(nums1[i] > nums2[j]){
                newarr[k++] = nums2[j++];
            }
            else{
                newarr[k++] = nums1[i++];
            }
        }
        while(i < nums1.length){
            newarr[k++] = nums1[i++];
        }
        while(j < nums2.length){
            newarr[k++] = nums2[j++];
        }
        double median = 0;
        int n = newarr.length/2;
        if(newarr.length % 2 == 0){
            median = (newarr[n-1] + newarr[n])/2.0;
        }
        else{
            median = (newarr[n]);
        }
        return median;
    }
}
