#include<iostream>

using namespace std;

bool palindrome(char name[],int n)
{
    int s=0, e=n-1;
    while(s<=e)
    {
        if(name[s]!=name[e])
            return 0;
        else
            s++;e--;
    }
    return 1;
}

void reverse(char name[],int n)
{
    int s=0 , e=n-1;
    while(s<=e)
        swap(name[s++],name[e--]);
    
}

int getLength(char name[])
{
    int count=0;
    for(int i=0; name[i]!='\0';i++)
        count++;    
    return count;
}

int main()
{
    char name[20];
    
    cout<<"Enter your name"<<endl;
    cin>>name;

    cout<<"Your name is ";
    cout<<name<<endl;
    int n = getLength(name);

    cout<<"Length: "<<n<<endl;

    reverse(name,n);
    cout<<"Your name is ";
    cout<<name<<endl;

    cout<<"1 if palindrome 0 if not, \n  and its--->> "<<palindrome(name,n)<<endl;
}