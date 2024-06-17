class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int mini=1e9;int sum;
        for(int i=0;i<nums.size();i++){
            //if(i>0&&nums[i]==nums[i-1])continue;
            int j=i+1;
            int k=nums.size()-1;
            while(j<k){
                sum=nums[i]+nums[j]+nums[k];

                if(abs(sum-target)<abs(mini-target)){
                    mini=sum;
                }
                if(sum<target){
                    j++;
                }
                else if(sum>target){
                    k--;
                }
                else {
                   return sum;
                }

            }
        }
        return mini;
    }
};
