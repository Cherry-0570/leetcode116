class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int count=0;
        int totalsum=0;
        int n=nums.size();
     for(int i=0;i<nums.size();i++)
     {
        totalsum+=nums[i];
     }  
     if(totalsum%2==0)
     {
        return n-1;
     }
     return 0;


    }
};