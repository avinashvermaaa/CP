#include <unordered_map>
#include <queue>
using namespace std;

class NumberContainers {
private : 
    unordered_map<int, priority_queue<int, vector<int>, greater<int>>> numberToIndex;
    unordered_map<int, int> indexToNumber;
public:
  

    void change(int index, int number) {
        if (indexToNumber.count(index)) {
            int prevNum = indexToNumber[index];
            if (prevNum == number) return;
            numberToIndex[prevNum].push(INT_MAX); // Lazy deletion
        }
        numberToIndex[number].push(index);
        indexToNumber[index] = number;
    }

    int find(int number) {
        while (!numberToIndex[number].empty() && indexToNumber[numberToIndex[number].top()] != number) {
            numberToIndex[number].pop();
        }
        return numberToIndex[number].empty() ? -1 : numberToIndex[number].top();
    }
};


auto inti = [](){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    return 'c';
}();
