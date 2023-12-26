#include <bits/stdc++.h>
int binarySearch(int *arr, int low, int high, int x);
using namespace std;

int main()
{
    int x, low=0;
    cout<<"Enter the number to get square root"<<endl;
    cin>>x;
    if(x<0){
        cout<<"only positive numbers"<<endl;
        return 0;
    }
    int high=x;
    int arr[x+1];
    for (int i = 0; i <= x; ++i) {
        arr[i] = i;
    }
    int result= binarySearch(arr,low,high,x);
    if(result == -1){
        cout<<"The number you entered has no square root"<<endl;
    }
    else{
        cout<<"The square root for your entered number : "<<result;
    }
    return 0;
}
int binarySearch(int *arr, int low, int high, int x){


    while(low<=high){
        int mid= (low + high)/2;
        if((arr[mid]*arr[mid])==x){
            return mid;
        }
        if((arr[mid]*arr[mid])>x){
            high=mid-1;
        }
        else if((arr[mid]*arr[mid])<x){
            low=mid+1;
        }
    }

return -1;
}
