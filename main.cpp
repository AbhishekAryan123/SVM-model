
#include <bits/stdc++.h>
using namespace std;
const int N=100;
int gr[N][N];
int TSP(int s,int v){
 vector<int> ver;
 for(int i=0;i<v;i++)
 if(i!=s)
 ver.push_back(i);
 int minw=INT_MAX;
 do{
     int t=s;
     int cpath=0;
     for(int i=0;i<ver.size();i++){
         cpath+=gr[t][ver[i]];
         t=ver[i];
     }
     cpath+=gr[t][s];
     minw=min(minw,cpath);
 }while(next_permutation(ver.begin(),ver.end()));
 return minw;
}

int main()
{
   int v=4;
   gr[v][v];
   for(int i=0;i<v;i++){
      for(int j=0;j<v;j++)
       cin>>gr[i][j];
   }
   int s=0;
   cout<<TSP(s,v);

    return 0;
}

