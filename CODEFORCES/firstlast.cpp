#include <iostream>

int main(){
    int getPivot(vector<int> &arr,int n){
        int answer;
        int s=0,end=n-1;
        while(s<=e){
            int mid = s +(e-s)/2;
            if(arr[mid]>=arr[0]){
                s=mid+1;
            }else{
                end=mid;
            }
        }
        return answer;
    }
    
}