#include<iostream>
using namespace std;
int main(){
    float n,a;
    float j;
    cout<<"enter any number";
    cin>>n;
     a=1;
    int c=0;
    for(int i=1;i<=n;i++){
        j=n/(a*a);
        a = a+1;
        if(j==1){
          c=1;
          break;
        }
    }
    if(c==1){
    cout<<"it is a perfect square";}
    else{
    cout<<"it is not a perfect square";}}
