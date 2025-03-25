#include<iostream>
#include<vector>
using namespace std;

int search(vector<int>& nums, int target) {
    int size = nums.size();
    int s=0,e=size-1;
    int mid=s+(e-s)/2;
    if(target>=nums[s]){
        while(s<=e){
            if(nums[mid]==target) return mid;
            else if(target>nums[mid]) s=mid+1;
            else e=mid;
            int mid=s+(e-s)/2;
            cout<<"hey";
        }
    }else{
        while(s<=e){
            if(nums[mid]==target) return mid;
            else if(target>nums[mid]) s=mid+1;
            else e=mid;
            int mid=s+(e-s)/2;
            cout<<"hi";
        }
    }
     return -1;   
    }

int main() {
    vector<int> arr1={4,5,6,7,0,1,2};
    vector<int> arr2={1};
    vector<int> arr3={5,1,3};
    vector<int> arr4={1,3};
    cout<<search(arr1,0)<<endl;
    cout<<search(arr2,1)<<endl;
    cout<<search(arr3,5)<<endl;
    cout<<search(arr4,3)<<endl;
}