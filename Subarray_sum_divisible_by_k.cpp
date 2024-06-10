class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        map<int,int>mp;
      //to handle case where sum is zero 
        mp.insert({0,1});
        int count=0;
        int sum=0;
        
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            int mod=sum%k;
            //negative remainder to positive equivalent remainder
            if(mod<0){
                mod=(mod)%k+k;
            }
            if(mp.count(mod)){
                count+=mp[mod];
                mp[mod]+=1;
            }
            else{
                mp.insert({mod,1});
            }
        }
        return count;
    }
};
