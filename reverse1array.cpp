#include<iostream>
#include<vector>
using namespace std;

vector<int> reverseArray(vector<int> v)
{
    int s=0, e=v.size()-1;
    while(e>s)
    {
        swap(v[e-1], v[e]);
        e--;
    }
    //swap(v[e-1],v[0]);
    return v;
}


int main()
{
    vector<int> v = {11, 7, 3, 12, 4};
    vector<int> ans= reverseArray(v);

    for(int x:ans )
        cout<<x<<" ";
    cout<<endl;
}