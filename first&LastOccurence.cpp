#include<iostream>

using namespace std;

int firstOccurence(int arr[], int size, int key){

    int start=0;
    int end= size-1;
    int ans=0;

    int mid= start + ((end-start)/2);
    //int mid=(start+end)/2;

    while(start <= end)
    {
        if(arr[mid]==key){
            ans = mid;
            end = mid - 1;
        }
        
        if(arr[mid]<key)
            start = mid+1;

        if(arr[mid]>key)
            end = mid-1;

        //mid = (start+end)/2;
        mid= start + ((end-start)/2);
    }
    return ans;

}

int lastOccurence(int arr[], int size, int key){

    int start=0;
    int end= size-1;
    int ans=0;

    int mid= start + ((end-start)/2);
    //int mid=(start+end)/2;

    while(start <= end)
    {
        if(arr[mid]==key){
            ans = mid;
            start = mid + 1;
        }

        
        if(arr[mid]<key)
            start = mid+1;

        if(arr[mid]>key)
            end = mid-1;

        //mid = (start+end)/2;
        mid= start + ((end-start)/2);
    }
    return ans;
}

// int peakElement(int arr[], int n)
// {
//     int s=0;
//     int e=n-1;
//     int mid= s + (e-s)/2;

//     while(s<e)
//     {
//         if(arr[mid] < arr[mid+1])
//             s=mid+1;
//         else
//             e=mid;
//         mid = s + (e-s)/2;
//     }
//     return s;
// }

int main()
{
    int odd[5]= {1,1,1,8,7};

    cout<<" First Index of 1 is at index "<<firstOccurence(odd,5,1);
    cout<<"\n Last Index of 1 is at index "<<lastOccurence(odd,5,1);
}