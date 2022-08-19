int Solution::solve(vector<int> &A, int B) {

int n=A.size();
int cnt=0;
for(int i=0;i<n;)
{   int pt=-1;
    for(int j=max(0,i-B+1);j<min(i+B,n);j++)
    {
        if(A[j]==1)
        {pt=j;}
    }
    
    if(pt==-1)
    {return -1;}
    
    cnt++;
    i=pt+B;
    
    
}
return cnt;

}
