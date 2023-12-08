#include<bits/stdc++.h>
using namespace std;

vector<int> runningsum(vector<int>& nums)
{
    for(int i = 1; i < nums.size(); i++)
    {
        nums[i] += nums[i-1];
    }
    return nums;
}

int main()
{
    vector<int> nums{1,2,3,4,5};
    vector<int> result = runningsum(nums);
    for(int i = 0; i < result.size(); i++)
    {
        cout<<result[i]<<endl;
    }
    return 0;
}