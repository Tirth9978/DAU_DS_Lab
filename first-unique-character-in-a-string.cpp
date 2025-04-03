#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
     int firstUniqChar(string s){
          map<char, int> count;
          for (auto x : s)
               count[x]++;
          for (int i = 0; i < s.size(); i++){
               if (count[s[i]] == 1)return i;
          }
          return -1;
     }
};

int main()
{

     Solution s;

     string str = "leetcode";

     int result = s.firstUniqChar(str);

     if (result != -1)
     {
          cout << "First unique character is at index: " << result << endl;
     }
     else
     {
          cout << "No unique character found." << endl;
     }

     return 0;
}