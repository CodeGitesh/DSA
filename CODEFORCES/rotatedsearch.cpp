#include<iostream>
using namespace std;
int getPivot(int arr[],int n){
    int s=0,end=n-1;
    while(s<end){
        int mid = s +(end-s)/2;
        if(arr[mid]>=arr[0]){
            s=mid+1;
        }else{
            end=mid;
        }
    }
    return s;
}

int BinarySearch(int arr[],int st,int end, int k){
    int s=st,e=end;
    while(s<=e){
        int mid= s + (e-s)/2;
        if(arr[mid]==k) return mid;
        else if(arr[mid]>k) e = mid-1;
        else s = mid+1;
    }
    return -1;
}

int search(int arr[], int n, int k)
{
    int pivot = getPivot(arr,n);

    if (k >= arr[pivot] && k <= arr[n-1]) {
        return BinarySearch(arr, pivot, n-1, k);
    } else {
        return BinarySearch(arr, 0, pivot-1, k);
    }
}

int main() {
    int arr1[6]={9,8,10,1,2,4};
    cout<<search(arr1,6,2)<<endl;
    return 0;
}