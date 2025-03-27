

// You are given an array 'arr' consisting of 'n' integers which denote the position of a stall.
// You are also given an integer 'k' which denotes the number of aggressive cows.
// You are given the task of assigning stalls to 'k' cows such that the minimum distance between any two of them is the maximum possible.
// Print the maximum possible minimum distance.


#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool isPossible(vector<int> &stalls, int k,int dist){
    int cowCount = 1;
    int currCowPos = stalls[0];
    for(int i=0;i<stalls.size();i++){
        if(stalls[i] - currCowPos >= dist ){
            cowCount++;
            if(cowCount==k){
                return true;
            }
            currCowPos = stalls[i];
        }
    }
    return false;
}

int aggressiveCows(vector<int> &stalls, int k)
{
    sort(stalls.begin(), stalls.end());
    int start = 0;
    int end = stalls[stalls.size() - 1] - stalls[0];
    int mid=start + (end - start) / 2;
    int ans=-1;

    while(start<=end){
        if(isPossible(stalls,k,mid)){
            ans=mid;
            start = mid+1;
        }else{
            end=mid-1;
        }
        mid=start + (end - start) / 2;
    }
    return ans;
}

int main(){
    
    vector<int> arr1={0 ,3 ,4 ,7 ,10 ,9};
    vector<int> arr2={4 ,2 ,1 ,3 ,6};
    vector<int> arr3={0 ,3 ,4 ,7 ,10 ,9};

//  cout<<"Max value possible : "<< aggressiveCows(arr1,4)<<endl;
    cout<<"Max value possible : "<< aggressiveCows(arr2,2)<<endl;

    return 0;
}