/*
 Reverse the Array
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"array size : "<<endl;
    cin>>n;
   int arr[100];
   
   for(int i=0;i<=n-1;i++){
    cin>>arr[i];
   }
   cout<<"reverse array  : "<<endl;
   for(int i=n-1;i>=0;i--){
    cout<<arr[i]<<endl;
   }
    

}