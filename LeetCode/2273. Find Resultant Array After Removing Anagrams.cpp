class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        if (words.size() < 2) return words;

        vector<string> result;
        string previous = "";

        for (const auto& word : words) {
            string sorted_word = word;
            sort(sorted_word.begin(), sorted_word.end()); 
            
            if (sorted_word != previous) {
                result.push_back(word);
                previous = sorted_word; 
            }
        }

        return result;
    }
};

