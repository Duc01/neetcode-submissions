class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i1 = 0;
        int n = numbers.size();
        int i2 = n-1;

        while (i1 < n && i2 >= 0) {
            if (numbers[i1] + numbers[i2] < target) i1++;
            else if (numbers[i1] + numbers[i2] > target) i2--;
            else if (numbers[i1] + numbers[i2] == target) return {i1+1, i2+1};
        }
        
    }
};
