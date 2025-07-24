//[8:01 pm, 8/11/2024] Paras Room 48: // Merge sorting
#include<iostream>
using namespace std;
void create(int arr[],int n){
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
}
void display(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }
}
void merge(int arr[],int n,int start,int end){
    int mid = (start+end)/2;
    int n1 = mid-start+1;
    int n2 = end-mid;
    int a[n1];
    int b[n2];
    int k = start;
    for(int i=0;i<n1;i++){
        a[i]=arr[k++];
    }
    k = mid+1;
    for(int i=0;i<n2;i++){
        b[i]=arr[k++];
    }
    int i=0,j=0;
    k = start;
    while(i<n1 && j<n2){
        if(a[i]<b[j]){
            arr[k++]=a[i++];
        }
        else{
            arr[k++]=b[j++];
        }
    }
    while(i<n1){
        arr[k++]=a[i++];
    }
    while(j<n2){
        arr[k++]=b[j++]; 
    }
}
void mergesort(int arr[],int n,int start,int end){
    //base case
        if(start>=end){
            return;
        }
        int mid = (start+end)/2;
        int m1 = mid-start+1;
        int m2 = end-mid;
        //left part sort
        mergesort(arr,m1,start,mid);

        //right part sort
        mergesort(arr,m2,mid+1,end);

        //merge two sorted array
        merge(arr,n,start,end);
}
int main(){
    int arr[20];
    int n;
    cout<<"Enter length of array : ";
    cin>>n;
    cout<<"Enter the element of array : "<<endl;
    create(arr,n);
    cout<<"The array is : "<<endl;
    display(arr,n);
    mergesort(arr,n,0,n-1);
    cout<<"\nThe sorted array is : "<<endl;
    display(arr,n);
}
