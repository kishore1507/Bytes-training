class Solution {
public:
        int findDuplicate(vector<int>& nums) {        
      sort(nums.begin(),nums.end());
      int i=0;
      for(i=0;i<nums.size();i++)
          if((nums[i] ^ i) ==0)break;          
      return i;   
    }
        
    
};
