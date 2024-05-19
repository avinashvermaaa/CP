// Weekly Contest 398


class Solution {
public:
    vector<bool> isArraySpecial(vector<int>& nums, vector<vector<int>>& queries) {
        
      int no = nums.size();
vector<int> pre_mismatches(no,0);
for(int i =1;i<no;i++)
{
   pre_mismatches[i] = pre_mismatches[i-1];
   if(nums[i]%2 == nums[i-1] %2)
   {
      pre_mismatches[i]++;
   }
}

vector<bool> answer;
for(const auto&query : queries)
{
   int last = query[1],start = query[0];
   if(start == last)
   {
      answer.push_back(true);
      continue;
   }
   int no_match = pre_mismatches[last] - pre_mismatches[start];
   answer.push_back(no_match == 0);
}

return answer;
    }
};
