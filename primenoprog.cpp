#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter any number\n";
    cin>>n;
    if(n==0||n==1||n<0){
        cout<<"number is not prime";
    }
    for(int i=2;i<n;i++){
        if(n%i!=0){
        cout<<"the number is prime";
        break;}
        else{
        cout<<"the number is composite";
        break;}
    }
}