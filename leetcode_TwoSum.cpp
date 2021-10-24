#include<vector>

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> r;
        int flag=0;
        for(int i=0;i<nums.size()-1;i++){
            for(int j=i+1;j<nums.size();j++){
                int sum=0;
                sum=nums[i]+nums[j];
                if(sum==target){
                    flag=1;
                    r.push_back(i);
                    r.push_back(j);
                    break;
                }
            }
            if(flag){
                break;
            }
        }
        return r;
    }
};