#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter no of rows";
    cin>>n;
    int i,j;
    
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            cout<<" ";
        }
        int x=1;
        for(int c=1;c<=(2*i-1);c++){
            
            if(x%2!=0){
             cout<<"*";
             x++;
            }
            else{
                cout<<" ";
                x++;
            }
            
        }
        cout<<endl;
    }
}