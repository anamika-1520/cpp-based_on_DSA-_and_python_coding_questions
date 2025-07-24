#include<iostream>
using namespace std;
/*int main(){
    float  n,p,x,sum=0;
    float  X[20];
    float Y[20];
    cout<<"enter the number of data enties :"<<endl;
    cin>>n;
    cout<<"enter the values of x :"<<endl;
    for(int i=0;i<n;i++){
        cin>>X[i];
    }
    for(int i=0;i<n;i++){
        cout<<X[i]<<" ";
    }
    cout<<endl;
    cout<<"enter the values of y :"<<endl;
    for(int i=0;i<n;i++){
        cin>>Y[i];
    }
    for(int i=0;i<n;i++){
        cout<<Y[i]<<" ";
    }
    cout<<endl;
    cout<<"enter the value of x at which i have to calculate y :"<<endl;
    cin>>x;
    for(int i=0;i<n;i++){
        p=1;
        for(int j=0;j<n;j++){
            if(i!=j){
                p=p*(x-X[j])/(X[i]-X[j]);
            }
        }
        sum=sum+p*Y[i];
    }
    cout<<"the value is :"<<sum<<endl;
}*/
/*float f(float x){
  return 1/(16+x*x);
}
float simp3by8(float a,float b,float  n){
    float h=(b-a)/n;
    float s,s1=0,s2=0;
    s=f(a)+f(b);
    for(int i=1;i<n;i++){
        if(i%3==0){
            s1=s1+f(a+i*h);
        }
        else{
            s2=s2+f(a+i*h);
        }
    }
    return (3*h/8)*(s+2*s1+3*s2);
}
int main(){
    float a,b,n;
    cout<<"enter the lower limit :"<<endl;
    cin>>a;
    cout<<"enter the upper limit :"<<endl;
    cin>>b;
    cout<<"n=enter the number 0f intervals :"<<endl;
    cin>>n;
    cout<<"the value of integral is :"<<simp3by8(a,b,n)<<endl;
    return 0;

   }*/
  