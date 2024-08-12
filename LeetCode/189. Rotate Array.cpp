// MEDIUM

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        

        if( k >= nums.size())
        {
            k %= nums.size();
        }
        
        {
            reverse(begin(nums),end(nums));
            reverse(begin(nums),begin(nums)+k);
            reverse(begin(nums)+k,end(nums));
        }

    }
};

auto init = [](){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin.tie(nullptr);

    return 'c';
}();
