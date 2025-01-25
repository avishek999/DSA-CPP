#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        vector<vector<int>> ans;

        for(int i = 0 ;i < nums.size();i++){
            for(int j = i+1 ; j < nums.size();j++){
            for(int k = j+1 ; k < nums.size();k++){
            
           if(nums[i] + nums[j] + nums[k] == 0){
            vector<int> temp;
            temp.push_back(nums[i]);
            temp.push_back(nums[j]);
            temp.push_back(nums[k]);
            ans.push_back(temp);
          

<<<<<<< HEAD
            }
            }
            }
=======
        for(int i = 0 ;i < nums.size(); i++ ){
         for(int j = i+1 ; j < nums.size() ; j++){
         for(int k = j+1 ; k < nums.size() ; k++){

            if( nums[i] + nums[j]  + nums[k]== target){
                return {i , j ,k};
            }

         }
         }
>>>>>>> cb2d8ff (added some stuff)
        }
        return ans;
        
    }
};