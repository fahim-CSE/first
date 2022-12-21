#include<iostream>
#include<string>
#include<stdio.h>
using namespace std;

int main(){
    int i;
    int j;
    cout<< "enter start and stop integer number :" << endl;
    cin >> i>> j;
    for (i;i<=j;i++){
        if(i%2 != 0){
            cout<<"prime number is:"<<i<<endl;
        }
        else{
            cout<<i<<" this is not a prime number"<<endl;
        }
    }



}
