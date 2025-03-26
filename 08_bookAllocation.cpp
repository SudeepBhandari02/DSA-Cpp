#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool isPossible(vector<int>& arr,int n,int m,int size){
    int studentCount=1;
    int currSum=0;
    for(int i=0;i<n;i++){
        if(currSum+arr[i]<=size){
            currSum+=arr[i];
            cout<<"currSum: "<<currSum<<" mid : "<< size<<endl;
        }else{
            cout<<"studentCount: "<<studentCount<<endl;
            studentCount++;
            currSum=arr[i];
            if(studentCount>m){
                cout<<"not possible"<<endl;
                return false;
            }
        }
    }
    if(studentCount>m){
        cout<<"second false"<<endl;
        return false;
    }
    cout<<"possible"<<endl;
    return true;

}

int findPages(vector<int>& arr, int n, int m) {
    if(n<m) return -1;
    if(m==n) {
        int max = *max_element(arr.begin(), arr.end());
        return max;
    }
    int s=0;
    int sum=0,ans=-1;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int e=sum;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(isPossible(arr,n,m,mid)){
            ans=mid;
            e=mid-1;
            cout<<"e: "<<e<<endl;
        }else{
            s=mid+1;
            cout<<"s: "<<s<<endl;
        }
        mid=s+(e-s)/2;
        cout<<"mid: "<<mid<<endl;
    }
    return ans;
}

int main() {
    vector<int> arr1 = {25,46,28 ,49, 24};
    vector<int> arr2 = {12, 34, 67, 90};
    vector<int> arr3 = {2 ,8 ,8 ,4 ,5 };
    vector<int> arr4 = {1 ,17 ,14 ,9 ,15 ,9 ,14  };
    int n = 5;
    int m = 4;

    //  cout << findPages(arr2, 4, 2) << endl; //test case 2
    //  cout << findPages(arr1, n, m) << endl; //test case 1
    //  cout << findPages(arr3, 5, 6) << endl;  //test case 3
    cout << findPages(arr4, 7, 7) << endl;     //test case 4

    return 0;
}