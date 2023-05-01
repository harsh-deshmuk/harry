#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter no of rows";
    cin>>n;
    int c;
    for(c=1;c<=n;c++){

    for(int i=1;i<=c;i++){
        cout<<"*";}
        for(int j=1;j<=(2*n)-(2*c);j++){
            cout<<" ";}
            for(int i=1;i<=c;i++){
                cout<<"*";
            }
            cout<<endl;
        }
        int x;
        for( x=1;x<=n-1;x++){
            for(int a=n-x;a>0;a--){
                cout<<"*";
            }
            for(int w=1;w<=(2*x);w++){
                cout<<" ";
            }
             for(int a=n-x;a>0;a--){
                cout<<"*";
        }
        cout<<endl;
        }}
    

