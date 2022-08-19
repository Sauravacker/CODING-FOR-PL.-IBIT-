int Solution::solve(vector<int> &A) {
int n=A.size();
int mxs[n];
mxs[n-1]=INT_MIN;
map<int,int> mp;

for(int i=n-2;i>=0;i--)
mxs[i]=max(mxs[i+1],A[i+1]);

int ans=INT_MIN;
mp[A[0]]++;
for(int i=1;i<n-1;i++)
{
 mp[A[i]]++;
 auto it=mp.lower_bound(A[i]);
 int x=INT_MIN;
 if(it==mp.begin() && it->second>1)
 x=(it->first);
 else
 {it--;x=(it->first);}
 
 if(x!=INT_MIN && mxs[i]>A[i])
 {ans=max(ans,x+A[i]+mxs[i]);}
 
}


return (ans==INT_MAX?0:ans);

}


