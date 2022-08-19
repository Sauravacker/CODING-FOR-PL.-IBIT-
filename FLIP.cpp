vector<int> Solution::flip(string A) {
int n=A.length();vector<int> v(n);

for(int i=0;i<n;i++)
{if(A[i]=='1')
v[i]=-1;
else
v[i]=1;}



int mx=0,cur=0;
int p1=-1,p2=0;
int st=0,f=0;
for(int i=0;i<n;i++)
{
    cur+=v[i];
    if(cur<0)
    {p1=i,p2=i;cur=0;}
    
    if(cur>mx)
    {
        mx=cur;
        p2=i;
        st=p1;
        f=p2;
        
    }
}



vector<int> ans;

if(mx==0)
return ans;

ans.push_back(st+2);
ans.push_back(f+1);

return ans;



}
