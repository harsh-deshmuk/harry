#include<iostream>
using namespace std;
int main(){
      int arr[8]={3,-1,-39,4,7,377,8,10};
      for(int i=0;i<=7;i++){
        if(arr[i]<0){
            continue;
        }
        else{
            if(arr[i]%2!=0){
                cout<<arr[i]<<endl;
            }
        }
      }
}