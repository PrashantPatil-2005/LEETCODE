class Solution {
public:
    bool containsDuplicate(vector<int> &nums) {
        std::unordered_set<int> seen;
        for(int num:nums){
            if(seen.find(num)!=seen.end(num)){
                return true;
            }
            seen.insert(num);
        }
        return false;
    }

};