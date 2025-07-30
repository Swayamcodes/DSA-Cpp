#include <iostream>
#include <vector>
using namespace std;

// vector<int> pairSum(vector<int> nums, int target) { //brute force
//     int n = nums.size();
//     vector<int> ans;

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i + 1; j < n; i++)
//         {
//             if (nums[i] + nums[j] == target)
//             {
//                 ans.push_back(i);
//                 ans.push_back(j);
//                 return ans;
//             }
            
//         }
        
//     }
// }

vector<int> PairSum(vector<int> nums, int target) {  //O(n)
    int n = nums.size();
    vector<int> ans;
    int i = 0; int j = n-1;

    while (i<j)
    {
        int pairSum = nums[i] + nums[j];
        if (pairSum > target )
        {
            j--;    
        }
        else if (pairSum < target) {
            i++;
        }
        else
        {
           ans.push_back(i);
           ans.push_back(j);
            return ans;
        }
        
    }
}

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 26;

    vector<int> ans = PairSum(nums, target);
    cout << ans[0] << ", " << ans[1];
    return 0; 
    
    
}