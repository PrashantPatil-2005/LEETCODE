class Solution {
public:
    int search(vector<int>& nums, int target) {
        int high=nums.size()-1;
        int low=0;
        int mid=0;
        while(low<=high){
            mid=(high+low)/2;
        if (target==nums[mid]){
            return mid;
        }
       else if(nums[mid]>target){
         high=mid-1;
        }
        else{
              low=mid+1;
        }  
        }
        return -1;  
    }

};