#include <iostream>
using namespace std;

int main() {
    //3Sum


}
// class Solution { // Brute Force
// public:
//     vector<vector<int>> threeSum(vector<int>& nums) {
//         int n = nums.size();
//         vector<vector<int>> ans;
        

//         set<vector<int>> s; //set <uniqueTriplets>

//         for(int i=0; i<n; i++) {
//              for(int j=0; j<n; j++) {
//                  for(int k=0; k<n; k++) {
//                     if (nums[i] + nums[j] + nums[k] == 0) {
//                         vector<int> trip = {nums[i], nums[j], nums[k]};
//                         sort(trip.begin(), trip.end());

//                         if(s.find(trip) == s.end()) {
//                             s.insert(trip);
//                             ans.push_back(trip);
//                         }
//                     }
//                  }
//              }
//         }
//         return ans;
//     }
// };