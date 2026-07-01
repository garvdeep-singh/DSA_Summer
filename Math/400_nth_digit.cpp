class Solution {
public:
    int findNthDigit(int n) {
        // int i=1;
        // int last_max_range=0;
        long long i = 1;
        long long start = 1;
        while(true){
            if(n>9*i*start){
                // last_max_range=max(last_max_range,(9*i*pow(10,i-1)));
                n=n-9*i*start;
                start *= 10;
                i++;
            }
            else{
                break;
            }

        }
        long long number = start + (n - 1) / i;
        // int count=n-last_max_range;
        // return count;
        // return n;
        int index = (n - 1) % i;

        string s = to_string(number);

        return s[index] - '0';
    }
};