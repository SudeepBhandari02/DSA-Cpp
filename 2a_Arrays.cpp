#include<iostream>
using namespace std;
void printArray(int arr[],int length){
    for (int i = 0; i < length; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[10];
    cout<<endl<<"array contents:"<<endl;
    int length=sizeof(arr)/sizeof(arr[0]);
    printArray(arr,length); 
}