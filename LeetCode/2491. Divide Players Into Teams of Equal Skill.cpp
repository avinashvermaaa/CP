class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        
        sort(begin(skill),end(skill));

        long long start = skill[0], end= skill[skill.size()-1];
        long long sum = start + end;
        start = 0,end = skill.size()-1;
        long long ans = 0;
        while(start <= end)
        {
            long long currsum = skill[start] + skill[end];
            if(sum != currsum) return -1;
            ans += (long long)skill[start]*skill[end];
            // cout<<ans<<endl;
            start++;
            end--;
        }


        return ans;
    }
};



auto init = [](){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    return 'c';
}();
