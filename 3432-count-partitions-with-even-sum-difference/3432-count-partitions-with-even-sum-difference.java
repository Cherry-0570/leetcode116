class Solution {
    public int countPartitions(int[] nums) {
      int count=0;
        int totalsum=0;
        int n=nums.length;
     for(int i=0;i<n;i++)
     {
        totalsum+=nums[i];
     }  
     if(totalsum%2==0)
     {
        return n-1;
     }
     return 0;

   
    }
}