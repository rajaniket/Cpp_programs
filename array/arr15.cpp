/*
Given a sorted array nums, remove the duplicates in-place such that each element appear only once and return the new length.
Given nums = [0,0,1,1,1,2,2,3,3,4],

Your function should return length = 5, with the first five elements of nums being modified to 0, 1, 2, 3, and 4 respectively.

*/

#include<iostream>
#include<vector>
using namespace std;
    int removeDuplicates(vector<int>& nums) {
       int right=0;
        int left=0;
        int count=0;
        while(right<nums.size()){
        if(right+1==nums.size())
        {
            count++;
             break;
        }
        else if(nums[right+1]==nums[left])
        {
            right++;
        }

        else if(nums[right+1]!=nums[left])
        {
            right++;
            left=right;
            count++;
        }
    }
        return count;

    }

    int main(){
    vector<int> arr{0,0,1,1,1,2,2,3,3,4};
    cout<<"length="<<removeDuplicates(arr);
    }
