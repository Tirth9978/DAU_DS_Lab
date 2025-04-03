#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
     vector<int> twoSum(vector<int> &nums, int target)
     {
          int s = 0;
          int e = nums.size() - 1;
          vector<int> ans(2);
          for (int i=0;i<nums.size()-1;i++){
               s = i;
               e = nums.size()-1;
               while(e >= 0){
                    if (nums[s]+nums[e] == target && s != e){
                         ans[0]=s;
                         ans[1]=e;
                         break;
                    }
                    e--;
               }
          }
          return ans ;
     }
};

int main()
{

     Solution s;

     vector<int> nums = {2, 7, 11, 15};
     int target = 9;

     vector<int> result = s.twoSum(nums, target);

     cout << "Indices: ";
     for (int i = 0; i < result.size(); i++)
     {
          cout << result[i] << " ";
     }
     cout << endl;

     return 0;
}