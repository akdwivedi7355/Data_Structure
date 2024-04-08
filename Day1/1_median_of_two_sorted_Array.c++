class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        vector<int>arr;
        for(int i=0;i<n;i++){
            arr.push_back(nums1[i]);
        }
        for(int j=0;j<m;j++){
            arr.push_back(nums2[j]);
        }
        sort(arr.begin(), arr.end());
        int total = arr.size();

        if (total % 2 == 1) {
            return static_cast<double>(arr[total / 2]);
        } else {
            int middle1 = arr[total / 2 - 1];
            int middle2 = arr[total / 2];
            return (static_cast<double>(middle1)+static_cast<double>(middle2)) / 2.0;
        }
    }
};