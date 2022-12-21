#include<iostream>
#include<string>
#include<stdio.h>
using namespace std;
int main(){
    int i=0;
    int j=1;
    int ne=0;
    int n;
    cout<<"Enter the fibonacci number: "<<endl;
    cin>>n;

    cout<<"fibonacci series: "<<i <<","<<j<<",";
    ne = i+j;
    while(ne <=  n){
        cout<<ne<<",";
        i=j;
        j=ne;
        ne=i+j;
    }
    return 0;


}
