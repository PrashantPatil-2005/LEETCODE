class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int pre=1,suff=1;
        int n=nums.size();
        int maxi=INT_MIN;
        for(int i=0;i<n;i++)
{
    if(pre==0) pre=1;
    if(suff==0) suff=1;
    pre=pre*nums[i];
    suff=suff*nums[n-i-1];
    maxi=max(maxi,max(suff,pre));
}
return maxi;
    }
};