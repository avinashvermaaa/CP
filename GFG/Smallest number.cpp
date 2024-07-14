// https://www.geeksforgeeks.org/problems/smallest-number5829/1



class Solution {
  public:
    string smallestNumber(int s, int d) {
           if(s > 9*d){
            return "-1";
        }
        vector<int> vec(d);
        vec[0] = 01;
        int sum = 01;
        int i = d-1;
        while(sum < s && i>=0){
            if(sum + 9 <= s){
                sum += 9;
                vec[i]+=9;
            }else{
                while(sum < s){
                    sum++;
                    vec[i]++;
                }
            }
            i--;
        }
        if(sum < s) return "-1";
        
        string str = "";
        for(int digit : vec){
            str += (char)digit + '0';
        }
        return str;
    }
};
