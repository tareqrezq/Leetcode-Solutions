// Problem solution in C.
double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size){
    int len = nums1Size + nums2Size;
    int merged[len];
    int i = 0, j = 0, idx = 0;
    while (i < nums1Size || j < nums2Size) {
        if (i < nums1Size && j < nums2Size) {
            if (nums1[i] < nums2[j]) {
                merged[idx++] = nums1[i++];
            } else {
                merged[idx++] = nums2[j++];
            }
        } else if (i < nums1Size) {
            merged[idx++] = nums1[i++];
        } else {
            merged[idx++] = nums2[j++];
        }
    }
    
    if (len % 2 == 0) {
        return ((merged[len/2 - 1] + merged[len/2]) / 2.0);
    } else {
        return merged[len/2];
    }
}