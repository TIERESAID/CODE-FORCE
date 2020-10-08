
class Solution
{
public:
    vector<int> singleNumber(vector<int>& nums)
    {
        vector<int> result ;
        map <int, int> frequency;
        for(int i =0 ; i<nums.size();i++)
            frequency[nums[i]]++;
            
        for(int i =0 ; i<nums.size();i++)
        if (frequency[nums[i]]==1)
        result.push_back(nums[i]);
    
        sort(result.begin(),result.end());
        return result;
    }
};
