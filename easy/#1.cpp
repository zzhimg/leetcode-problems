class Solution{
public:
    vector<int> twoSum(vector<int>& nums,int target){
        unordered_map<int,int> hashtable;
        for(int i = 0 ; i<nums.size(); i++){
            int k = target - nums[i] ;
            auto it = hashtable.find(k) ; 
            if( it != hashtable.end() ){
                return { it->second , i };
            }
            hashtable[nums[i]] = i;
        }
        return {};
    };
};