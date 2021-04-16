class Solution {
public:
    int maxArea(vector<int>& height) {
        int res = 0;
        int pos1 = 0;
        int pos2 = height.size()-1;
        int size = 0;
        while(pos1 != pos2){  
          if(height.at(pos1) <= height.at(pos2) ){
              size =  (pos2 - pos1) * height.at(pos1);
              pos1++;
          } 
          else{
              size =  (pos2 - pos1) * height.at(pos2);
              pos2--;
          }
          res = res < size? size : res;
        };
        return res;
    }
};