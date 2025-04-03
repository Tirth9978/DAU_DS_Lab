#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
     int longestConsecutive(vector<int> &nums){
          if (nums.size()==0){
               return 0;
          }
          sort(nums.begin(),nums.end());
          int count =0;
          int mx = INT_MIN;
          for (int i=1;i<nums.size();i++){
               if (nums[i]==nums[i-1]){
                   continue;
               }
               else if (nums[i] == nums[i-1]+1){
                   count ++;
               }
               else {
                   mx = max(mx,count);
                   count = 0;
               }
          }
          mx = max(mx,count );
          return mx+1;
     }
};

int main()
{

     Solution s;

     vector<int> a = {100, 4, 200, 1, 3, 2};

     int result = s.longestConsecutive(a);

     cout << "Longest consecutive sequence length: " << result << endl;

     return 0;
}