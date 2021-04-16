#include <algorithm>
class Solution {
public:
    static bool cmp(vector<int>& nums1,vector<int>& nums2){
            return nums1[0] < nums2[0];                
        }
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end(),cmp); //非降序排序
        vector<vector<int>> res;
        if(intervals.size() == 1) return intervals;
        int low =  0 ;
        int high = -1 ;
        for(int i = 0 ;i < intervals.size() ;i++){
            if( intervals[i][0] <= high){ //重叠
                    high = max(intervals[i][1],high);
                    res.pop_back();
                    res.push_back({low,high});
            }
            else{
                low = intervals[i][0];
                high = intervals[i][1];
                res.push_back({low,high});
            }
        }
        return res;
    }
};