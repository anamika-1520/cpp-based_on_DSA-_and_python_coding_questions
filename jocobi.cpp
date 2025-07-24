//Solving Poisson Equation using Jacobi Method.

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
float func(float x, float y)
{
    return((10)*(x*x+y*y+10));
}
int main()
{
    float arr[10][10], h,e, u1, u2, u3, u4;
    int count=1;
    cout<<"Enter mesh length: ";
    cin>>h;
    cout<<"Enter permissible error: ";
    cin>>e;
    cout<<"Enter Boundary values: "<<endl;
    for(int i=0; i<=3; i++)
    {
        for(int j=0; j<=3; j++)
        {
            if((i==0)or(i==3)or(j==0)or(j==3))
            {
            cout<<"Enter value of arr"<<"["<<i<<"]"<<"["<<j<<"]"; 
            cin>>arr[i][j];
            }
        }
    }
arr[1][1]=0;
arr[1][2]=0;
arr[2][1]=0;
arr[2][2]=0;
do
{
    u1=arr[1][1];
    u2=arr[1][2];
    u3=arr[2][1];
    u4=arr[2][2];

    arr[1][1]=(h*h*func(1,2)+(u2+u3))*(0.25);
    arr[1][2]=(h*h*func(2,2)+(u1+u4))*(0.25);
    arr[2][1]=(h*h*func(1,1)+(u1+u4))*(0.25);
    arr[2][2]=(h*h*func(2,1)+(u2+u3))*(0.25);
    count++;
}
while( (fabs(u1-arr[1][1]))>e && (fabs(u2-arr[1][2]))>e && (fabs(u3-arr[2][1]))>e && (fabs(u4-arr[2][2]))>e );

cout<<"Final answer: "<<endl;
cout<<"u1: "<<u1<<endl;
cout<<"u2: "<<u2<<endl;
cout<<"u3: "<<u3<<endl;
cout<<"u4: "<<u4<<endl;
cout<<"No. of iterations are: "<<count;
}