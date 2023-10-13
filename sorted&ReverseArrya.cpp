#include<iostream>
#include<vector>
using namespace std;

bool reverse(vector<int> nums)
{
    int count=0;
    int n=nums.size();
    for(int i =1;i<=n;i++)
    {
        if(nums[i-1]>nums[i])
            count++;
    }
    if(nums[n-1]> nums[0])
        count++;
    
    return count<=1;
}

int main()
{
    int i;
    vector<int> n={7,6,1,2,3};
    bool c=reverse(n);
    cout<<c;
}