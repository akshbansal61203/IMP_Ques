class Solution {
private:
    bool check(int day,int m ,int k,vector<int>&bloomDay){
        int total=0;
        int count=0;
        for(int i=0;i<bloomDay.size();i++){
            if(bloomDay[i]<=day){
                count++;
            }
            else{
                count=0;
            }
            if(count>=k){
                total++;
                count=0;
            }
            if(total>=m)return true;
        }
        return false;
    }
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        if((long)m*k>bloomDay.size())return -1;
        int i=1;
        int j=1e9;
        int ans=0;
        while(i<=j){
            long mid=i+(j-i)/2;
            if(check(mid,m,k,bloomDay)){
                ans=mid;
                j=mid-1;
            }
            else{
                i=mid+1;
            }
        }
        return ans;
    }
};
