#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter any number";
    cin>>n;
    int a=0;
    int b=1;
    int sum;
    cout<<a<<endl<<b<<endl;
    for(int i=1;i<=n-2;i++){
     sum=a+b;
    a=b;
    b=sum; 
    
    cout<<sum<<endl;}
}