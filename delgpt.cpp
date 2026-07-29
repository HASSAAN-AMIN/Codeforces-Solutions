#include <bits/stdc++.h>
using namespace std;

int greedy(vector<int> a){
    int n=a.size(),i=0,cnt=0; bool turn=0;
    while(i<n){
        if(turn){
            i++;
            if(i<n&&a[i]==1)i++;
        }else{
            if(a[i])cnt++;
            i++;
            if(i<n&&a[i]==0)i++;
        }
        turn=!turn;
    }
    return cnt;
}

int dp(vector<int> a){
    int n=a.size(),INF=1e9;
    vector<vector<int>> f(n+2,vector<int>(2,INF));
    f[0][0]=0;
    for(int i=0;i<n;i++){
        if(f[i][0]!=INF){
            f[i+1][1]=min(f[i+1][1],f[i][0]+a[i]);
            if(i+1<n)f[i+2][1]=min(f[i+2][1],f[i][0]+a[i]+a[i+1]);
        }
        if(f[i][1]!=INF){
            f[i+1][0]=min(f[i+1][0],f[i][1]);
            if(i+1<n)f[i+2][0]=min(f[i+2][0],f[i][1]);
        }
    }
    return min(f[n][0],f[n][1]);
}

int main(){
    for(int n=1;n<=12;n++){
        for(int m=0;m<(1<<n);m++){
            vector<int>a(n);
            for(int i=0;i<n;i++)a[i]=(m>>i)&1;
            int g=greedy(a),d=dp(a);
            if(g!=d){
                cout<<"n = "<<n<<"\n";
                for(int x:a)cout<<x<<" ";
                cout<<"\nGreedy = "<<g<<"\nDP = "<<d<<"\n";
                return 0;
            }
        }
    }
    cout<<"No failing case up to n = 12\n";
}