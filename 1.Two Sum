class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector <int> index(2);
        for (int i=0;i<nums.size()-1;++i)
            for(int j=i+1;j<nums.size();++j)
            {
                if (nums[i]+nums[j]==target)
                {
                    index[0]=i;
                    index[1]=j;
                    return index;
                }
            }
        return index;
    }
};
