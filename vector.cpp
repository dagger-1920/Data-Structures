#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> v;

    vector<int> a(5,1);

    vector<int> last(a);

    cout<<"Capacity of vector now "<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"Capacity of vector now "<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"Capacity of vector now "<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"Capacity of vector now "<<v.capacity()<<endl;
    cout<<"Size "<<v.size()<<endl;

    cout<<"Front "<<v.front()<<endl;
    cout<<"Back "<<v.back()<<endl;


    cout<<"\nElement before pop "<<endl;
    for(int i : v)
        cout<<i<<" ";

    v.pop_back();

    cout<<"\nElement after pop "<<endl;
    for(int i:v)
        cout<<i<<" ";
    cout<<endl;
    v.clear();
    cout<<"\nSize after clear "<<v.size()<<" Capacity after Clear "<<v.capacity()<<endl;
    
    cout<<"\nchecking the vector a "<<endl;
    for(int i:a)
        cout<<i<<" ";
    
    cout<<"\nchecking the vector last "<<endl;
    for(int i:last)
        cout<<i<<" ";

}