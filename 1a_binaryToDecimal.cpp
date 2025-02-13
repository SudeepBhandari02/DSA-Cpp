#include<iostream>
#include<cmath>
using namespace std;


int posDec(int n){
    int bin=0;
    int i=0;
    while(n>0){
        int bit=n&1;
        bin=(bit*pow(10,i))+bin;
        n=n>>1;
        i++;
    }
    return bin;
} 

int main(){
    //positive decimal to Binary
    int n;
    cout<<"Enter a positive decimal Number"<<endl;
    cin>>n;
    int result=posDec(n);
    cout<<result<<endl;
}