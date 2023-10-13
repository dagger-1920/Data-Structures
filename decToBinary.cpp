#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    
    float ans=0;
    int i=0;

    /* Decimal to binary
    while(n !=0 )
    {
        int bit = n & 1 ;
        ans=( bit*pow(10,i) ) + ans;
        cout<<ans<<endl;
        i++;
        n=n>>1;
    }

    cout<<" Answer is "<< ans <<endl;
    */

   while(n != 0)
   {
    int bit = n %10 ;
    if(bit == 1)
    {
        ans =ans+ pow(2,i);
        
    }
    n=n/10;
    i++;
   }
   cout<<" Answer is "<< ans <<endl;

}