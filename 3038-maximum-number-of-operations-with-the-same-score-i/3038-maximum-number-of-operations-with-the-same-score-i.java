class Solution {
    public int maxOperations(int[] nums) {
        int s=nums[0]+nums[1];
        int count=0;
        for(int i=0;i+1<nums.length;i+=2){
            if(s==nums[i]+nums[i+1]){
                count++;
            }else{
                break;
            }
        }
        return count;
    }
}