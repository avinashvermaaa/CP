// Easy

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for(int n2 = m, j = 0; j<n; j++)
        {
            nums1[n2] = nums2[j];
            n2++;
        }

        sort(nums1.begin(),nums1.end());
    }
};
