#include<iostream>
using namespace std;
int main(){
    int cor=0;
    int edge=0;
    int rem=0;int sum=0;
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(i==0 || i==2){
                if(j==0||j==2){
                    cor=cor+arr[i][j];
                    cout<<" !!! "<< i <<j<<",cor== "<<cor<<endl;
                }
            else if(i==0 || i==2 || i==1){    
                edge=edge+arr[i][j];
                cout<<"@@ edge "<<i<<","<<j <<" "<<edge<<endl;}
            }
            else if(i!=0|| i!=2){
                if(j==0 || j==2){
                    rem=rem+arr[i][j];
                    cout<<"rem = "<<rem<<endl;
                }

            }
            else{
                sum=sum+arr[i][j];
                cout<<"sum ="<<sum<<endl;
            }
        }
    }
}