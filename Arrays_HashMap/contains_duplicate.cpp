// neetcode problem 1 : Contains Duplicate
class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
       int k= 0;
       for(int i=0;i<nums.size();i++){

        if(nums[i] == nums[i+1]){
            k = 1;
            break;
        }
       }
       if(k == 1){
        return true;
       }
       return false;
    }
};


class Solution {
unordered_set <int> duplicates;
public:
    bool hasDuplicate(vector<int>& nums) {
       for(auto& elem : nums){
         if(duplicates.find(elem) != duplicates.end()){
            return true;
         }else{
            duplicates.insert(elem);
         }
       }
       return false;
    }
};
