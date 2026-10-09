class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int i=0,j=0;
        vector<int> temp;
        while(i<nums1.size() && j<nums2.size()){
            if(nums1[i] <= nums2[j]){
                temp.push_back(nums1[i]);
                i++;
            }
            else{
                temp.push_back(nums2[j]);
                j++;
            }
        }
        while(i<nums1.size()){
            temp.push_back(nums1[i]);
            i++;
        }
        while(j<nums2.size()){
            temp.push_back(nums2[j]);
            j++;
        }
        int n=temp.size();
        int mid=n/2;
        double avg;
        if(n%2 != 0){
            avg=temp[mid];
        }
        else{
            avg=(temp[mid] + temp[mid-1])/2.0;
        }
        return avg;
    }
};