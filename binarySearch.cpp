#include<iostream>

using namespace std;

int binarySearch(int arr[], int size, int key){

    int start=0;
    int end= size-1;

    int mid= start + ((end-start)/2);
    //int mid=(start+end)/2;

    while(start <= end)
    {
        if(arr[mid]==key)
            return mid;
        
        if(arr[mid]<key)
            start = mid+1;

        if(arr[mid]>key)
            end = mid-1;

        //mid = (start+end)/2;
        mid= start + ((end-start)/2);
    }
    return -1;

}

int main()
{
    int odd[5]= {1,1,1,8,7};
    int even[6]= {5,9,21,56,87,98};

    int evenIndex = binarySearch(even,6,18);

    cout<<"The index is "<<evenIndex<<endl;
    
    int oddIndex = binarySearch(odd,5,1);

    cout<<"The index is "<<oddIndex<<endl;

}