#include<iostream>
using namespace std;
int f(int arr[12],int low,int high)
{
    int pivot=arr[high];
    int i=low-1;
    int j=low;
    for(j=low;j<=high-1;j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[i],arr[j]);
        }

    }
    swap(arr[i+1],arr[high]);
    return i+1;
    
}
int    QS(int arr[12],int low,int high){
    if(low<=high){
        int partition=f(arr,low,high);
        QS(arr,low,partition-1);
        QS(arr,partition+1,high);

    }
    return 0;
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