class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int wind1 = 0, wind2 = k;
        int sum = 0;
        for(int i=wind1; i<wind2; ++i)
        {
            sum += nums[i];
        }
        int max = sum;
        while(wind2 < nums.size())
        {
            sum += (nums[wind2]-nums[wind1]);
            if(sum>max)
            {
                max = sum;
            }
            wind1++;
            wind2++;
        }
        
        return (double)max/k;
    }
};