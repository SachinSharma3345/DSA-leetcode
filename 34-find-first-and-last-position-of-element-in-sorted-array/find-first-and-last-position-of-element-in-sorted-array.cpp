class Solution {
public:
    int first_occ(vector<int>& nums, int target){
        int result = -1;
        int s = 0;
        int e = nums.size()-1;
        while(s<=e){
            int mid = s+(e-s)/2;
            if(nums[mid] == target){
                result = mid;
                e = mid-1;
            }
            else if(nums[mid]<target){
                s=mid+1;
            }
            else{
                e = mid-1;
            }
        }
        return result;

    }

    int second_occ(vector<int>& nums, int target){
        int result = -1;
        int s = 0;
        int e = nums.size()-1;
        while(s<=e){
            int mid = s+(e-s)/2;
            if(nums[mid] == target){
                result = mid;
                s = mid+1;
            }
            else if(nums[mid]<target){
                s=mid+1;
            }
            else{
                e = mid-1;
            }
        }
        return result;

    }
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        int first = first_occ(nums, target);
        int second = second_occ(nums, target);
        ans.push_back(first);
        ans.push_back(second);
        return ans;



        
    }
};