// EASY

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int ct = 0;

        for(auto it : nums)
        {
            if(it == 0)
            {
                ct++;
            }
        }

        nums.erase(remove(begin(nums),end(nums),0), end(nums));

        for(int i = 0; i<ct;i++)
        {
            nums.push_back(0);
        }


    }
};


auto init = [](){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    return 'c';
}();
