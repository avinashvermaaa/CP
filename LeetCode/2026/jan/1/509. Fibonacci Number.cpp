class Solution {
private : 
    vector<int> fibonacci_memo = vector<int>(32,-1);    
public:
    int fibonacci(int n){
        if(n == 0) return 0;
        if(n == 1) return 1;
        if(fibonacci_memo[n] != -1) return  fibonacci_memo[n];

        return fibonacci_memo[n] = fibonacci(n-1) + fibonacci(n-2);
    }

    int fib(int n) {
        int answer = fibonacci(n);
        return answer;    
    }
};
