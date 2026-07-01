class Solution {
public:
    int findfirst(vector<int>& nums,int low,int high,int target){
        if(low>high){
            return -1;
        }
        int mid=low+(high-low)/2;

        if(nums[mid]==target && (mid==0 || nums[mid-1]<target)){
            return mid;
        }else if(nums[mid]>=target){
            return findfirst(nums,low,mid-1,target);
        }else{
            return findfirst(nums,mid+1,high,target);
        }
    }

    int findlast(vector<int>& nums,int low,int high,int target){
        if(low>high){
            return -1;
        }
        int mid=low+(high-low)/2;
        
        if(nums[mid]==target && (mid==nums.size()-1 || nums[mid+1]>target)){
            return mid;
        }else if(nums[mid]>target){
            return findlast(nums,low,mid-1,target);
        }else{
            return findlast(nums,mid+1,high,target);
        }
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        int first = findfirst(nums,0,nums.size()-1,target);
        int last = findlast(nums,0,nums.size()-1,target);
        return {first,last};
    }
};