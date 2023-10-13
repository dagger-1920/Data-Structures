#include<iostream>
using namespace std;

int main() 
{
    
    int n=5;

    cout<<"Printing from 1 to n \n";
    int i=1;
    for(;;)
    {
        if(i<=n)
        {
            cout<<i<<endl;
        }
        else{
            break;
        }
        i++;
    }

    for( int a=0 ,b=1;a>=0 && b>=1; a--,b-- )
    {
        cout<<a<<" "<<b<<endl;
    }
    

}