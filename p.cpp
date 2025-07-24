/*#inc

bool ispossible(vector<int> &boards,int n,int m,int mid){
    int painters=1;
    int sum=0;
    for(int i=0;i<n;i++){
        if(sum+boards[i]<=mid){
            sum+=boards[i];
        }
        else{
            painters++;
            if(painters>m|| boards[i]>mid){
               return false;
            }
            sum+=boards[i];
        }
    }
    return true;
}
int findLargestMinDistance(vector<int> &boards, int k,int n)
{
    //    Write your code here.
    int s=0;
    int ans=0;int sum=0;
    for(int i=0;i<n;i++){
        sum+=boards[i];
    }
    int e=sum;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(ispossible(boards,n,k,mid)){
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;

}*/