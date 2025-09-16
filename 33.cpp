class Solution {
public:
    int BinarySearch(vector<int> &arr,int st,int end,int k){
        int s=st,e=end,mid;
        while(s<=e){
            mid=s+(e-s)/2;
            if(arr[mid]==k){
                return mid;
            }else if(arr[mid]>k){
                e=mid-1;
            }else{
                s=mid+1;
            }
        }
        return -1;
    }
    int getPivot(vector<int> &arr,int n){
        int s=0,e=n-1;
        int mid;
        while(s<e){
            mid=s+(e-s)/2;
            if(arr[mid]>=arr[0]){
                s=mid+1;
            }else{
                e=mid;
            }
        }
        return s;
    }
    int search(vector<int>& nums, int target) {
        int pivot=getPivot(nums,nums.size());
        if(nums[pivot]<=target && target<=nums[nums.size()-1]){
            return BinarySearch(nums,pivot,nums.size()-1,target);
        }else{
            return BinarySearch(nums,0,pivot-1,target);
        }
    }
};