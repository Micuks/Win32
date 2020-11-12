#include<bits/stdc++.h>

using namespace std;
const double eps=1e-6;

int n,ans,dp[(1<<15)+2],cnt,sta[500];
double x[25],y[25];
bool vis[25];

int work(int X,int Y){
	int ret=(1<<(X-1))|(1<<(Y-1));
	for(int i=1;i<=n;i++){
		if(i==X || i==Y) continue;
		if(fabs((x[i]-x[X])*(y[i]-y[Y])-(x[i]-x[Y])*(y[i]-y[X]))<=eps) 
			ret|=(1<<(i-1));
	}
	return ret;
}

int main(){
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>x[i]>>y[i];
	for(int i=1;i<=n;i++)
		for(int j=i+1;j<=n;j++){
			sta[++cnt]=work(i,j);
		}
	memset(dp,0x3f,sizeof(dp));
	dp[0]=0; int S=(1<<n);
//	cout<<S<<endl;
	for(int i=0;i<S-1;i++){
		for(int j=1;j<=cnt;j++)
			dp[i|(sta[j])]=min(dp[i|sta[j]],dp[i]+1);	
	}
	ans=n;
	for(int i=1;i<=n;i++)
		ans=min(ans,dp[(S-1)^(1<<(i-1))]+1);
	ans=min(ans,dp[S-1]);
	cout<<ans;
	return 0;	
}