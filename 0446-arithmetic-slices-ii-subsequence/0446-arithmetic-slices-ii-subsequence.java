class Solution {
    public int numberOfArithmeticSlices(int[] nums) {
        Map<Integer,Integer>[]map=new HashMap[nums.length];
        int ans=0;
        
        for(int i=0;i<nums.length;i++)
            map[i]=new HashMap<>();
            
        
        
 for(int i=0;i<nums.length;i++){
           for(int j=0;j<i;j++){
            long d=(long)nums[i]-(long)nums[j];
    
         if(d<Integer.MIN_VALUE || d>Integer.MAX_VALUE){
          continue;
    }
    
    int diff=(int) d;
    
    int count=map[j].getOrDefault(diff,0);
    
    map[i].put(diff,map[i].getOrDefault(diff,0)+count+1);
    
    ans+=count;
    
}
        }
        
        return ans;
    }
}