#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n;
    cout<<"Enter the binary number :";
    cin>>n;
    int decNum=0;
    int i=0;
    while (n>0)
    {
        int bit = n%10;
        if(bit==1){
            decNum=pow(2,i)+decNum;
        }
        n/=10;
        i++;
    }
    cout<<decNum<<endl;
    
}