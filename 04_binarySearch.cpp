#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key){
    int start=0;
    int end=size-1;

   // int mid=(end-start)/2;  //initialize mid to the middle of the array (Traditional Formula)
   int mid = start + (end-start)/2;  //To handle sum value going out of int range here i have modified the formula

    while(start<=end){      //loop should run until start is less than or equal to end
        if(arr[mid]==key){
            return mid;     //returning index if element found
        }
        else if(key<arr[mid]){
            end=mid-1;      
        }
        else{
            start=mid+1;
        }
        mid=start + (end-start)/2;
    }
    return -1;              //if element not found return false(-1)
}
    

int main(){
    int even[10]={2,4,6,8,10,12,14,16,18,20};
    int odd[9]={1,3,5,7,9,11,13,15,17};

    cout<<binarySearch(even,10,16)<<endl;
    cout<<binarySearch(even,10,3)<<endl;

    cout<<binarySearch(odd,9,1)<<endl;
    cout<<binarySearch(odd,9,16)<<endl;

}