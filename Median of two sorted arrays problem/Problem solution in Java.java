//Problem solution in Java.
class Solution {
    public double findMedianSortedArrays(int[] nums1, int[] nums2) {
       ArrayList<Integer> list = new ArrayList<Integer>();
        for(int i=0;i<nums1.length;i++)
        {
            list.add(nums1[i]);
        }
        for(int i=0;i<nums2.length;i++)
        {
            list.add(nums2[i]);
        }
        Collections.sort(list);
        int size=list.size();

        if (size % 2 == 1)   return (double) list.get(size/2);
        
          return (double) (list.get((size/2)-1) + list.get(size/2) )/2;
        
    }
}