class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i=0,mid=0;
        int j=nums.size()-1;
        if(j==0)return;
        while(mid<=j&&mid<nums.size()&&j>=0){
            if(nums[mid]==2){
                swap(nums[mid],nums[j]);
                j--;
            }
            else if(nums[mid]==0){
                swap(nums[mid],nums[i]);
               {
                    i++;
                    mid++;
                }
            }
            else if(nums[mid]==1){
                mid++;
            }
        }
    }
};
