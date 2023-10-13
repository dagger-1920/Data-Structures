#include<iostream>
using namespace std;

//Fabonacci Series
int fabonacci(int n)
{
    int i;
    int a=0;
    int b=1;
    cout<<a<<" "<<b<<" ";

    for(i=1;i<=n;i++)
    {
        int nextNumber=a+b;
        cout<<nextNumber<<" ";

        a=b;
        b=nextNumber;
    }
}

//Prime number
int primeNumber(int n)
{
    int i;
    bool isPrime=1;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            isPrime=0;
            break;
        }
    }
    if(isPrime == 0)
    {
        cout<<"Not a prime";
    }
    else
    {
        cout<<"Prime no.";
    }
}

int main()
{
    int n=10,s=7;
    fabonacci(n);
    primeNumber(n);
}