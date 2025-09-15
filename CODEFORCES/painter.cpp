bool isValid(vector<int> &arr, int k,int n,int mid){
    int paintsum=0;
    int count=1;
    for(int i=0;i<n;i++){
        if(arr[i]+paintsum<=mid){
            paintsum+=arr[i];
        }else{
            count++;
            if(count>k || arr[i]>mid){
                return false;
            }
            paintsum=arr[i];
        }
    }
    return true;
}




int findLargestMinDistance(vector<int> &boards, int k)
{
    int s=0;
    int sum=0;
    for(int num:boards) sum+=num;
    int e=sum;
    int ans=-1;


    while(s<=e){
        int mid=s+(e-s)/2;
        if(isValid(boards,k,boards.size(),mid)){
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return ans;
}