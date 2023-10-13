#include<iostream>
#include <bits/stdc++.h>


using namespace std;

void swapAlternate(int num[], int n)
{
    int i;
    for(i=0;i<n;i=i+2)
    {
        if((i+1)<n){
            swap(num[i],num[i+1]);
        }
    }
}

void reverse(int num[], int n)
{
    int start=0 , end=(n-1);
    while(start<=end)
    {
        swap(num[start],num[end]);
        start++;
        end--;
    }
}

void printArray(int num[], int n)
{
    for (int i =0 ; i<n ; i++)
    {
        cout<< num[i] <<" ";
    }
    cout<<endl;
}

int sum(int num[], int n)
{
    int sum;
    for(int i=0;i<n;i++)
    {
        sum=sum+num[i];
    }
    return sum;
}

int getMin(int num[], int n)
{
    int min = INT_MAX;

    for(int i=0; i<n ;i++)
    {
        if(num[i]<min)
        {
            min=num[i];
        }
    }
    return min;
}

int getMax(int num[], int n)
{
    int max = INT_MIN;

    for(int i=0; i<=n ;i++)
    {
        if(num[i]>max)
        {
            max=num[i];
        }
    }
    return max;
}

int main()
{
    int n;
    cout<<"How many times you want this program to run - ";
    cin>>n;
    cout<<endl;
    while(n>0){

    int size;
    cout<<"\nEnter size of array - ";
    cin>>size;

    int num[100];
    cout<<"Enter the elements of arrray\n";

    for(int i=0;i<size;i++)
    {
        cin>>num[i];
    }
    cout<<"Normal array is ";
    printArray(num,size);

    cout<<" Max " << getMax(num,size)<<endl;
    cout<<" Min " <<getMin(num,size)<<endl;  
    cout<<" Sum of Array = " << sum(num,size)<<endl;

    swapAlternate(num,size);
    cout<<" Alternate swapped \n";
    printArray(num,size);

    reverse(num,size);
    cout<<"Reversed array is \n";
    printArray(num,size);

    n--;
    }
}