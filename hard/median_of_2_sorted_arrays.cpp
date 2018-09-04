class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
       double median1=0;
        nums1.insert( nums1.end(), nums2.begin(), nums2.end() );
        std::sort(nums1.begin(), nums1.end());
        int size = nums1.size();
        int i = size/2;
        if(size%2 == 0)
        {
            median1 = (nums1[i-1] + nums1[i])/2.0;
        }
        else
        {
            median1 = nums1[i];
        }
        
        return median1;
        
    }
};