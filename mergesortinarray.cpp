#include<iostream>
using namespace std;
int f(int arr[12],int low,int mid,int high)
 {

 }
int main(){
    int arr[12];
    int low=0;
    int size;
    cout<<"enter the size of the array ->>"<<endl;
    cin>>size;
    cout<<"enter the elements of array : "<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    //cout<<endl;
    cout<<"the unsorted array is :"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"the sorted array is : "<<endl;
    QS(arr,low,size-1);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}