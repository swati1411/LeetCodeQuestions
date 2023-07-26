class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        //vector<int> ans;
        int flag = 0;
        //ans.push_back(nums[0]);
        int z = 1;
        for(int i=1;i<n;i++)
        {
            if(nums[i] == nums[i-1] && flag != 1)
            {
                //ans.push_back(nums[i]);
                nums[z] = nums[i];
                z++;
                flag = 1;
            }
            else if(nums[i] != nums[i-1])
            {
                //ans.push_back(nums[i]);
                nums[z] = nums[i];
                z++;
                flag = 0;
            }
        }
        return z;
    }
};
