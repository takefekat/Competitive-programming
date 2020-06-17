#include <bits/stdc++.h>
using namespace std;

int main(){

    int x,n;
    cin >> x >>  n;

    vector<vector<int>> v(x);

    for (int i = 0; i < n; i++)
    {
        int a; cin >> a;
        if(a==0){
            int b,c;
            scanf("%d%d",&b,&c);
            v[b].push_back(c);
        }
        else if(a==1){
            int b;           
            scanf("%d",&b);
            for (size_t j = 0; j < v[b].size(); j++)
            {
                printf("%d",v[b][j]);
                if(j != v[b].size()-1)
                   printf(" ");
            }  
            printf("\n");
     
        }
        else{
             int b;   scanf("%d",&b);
             v[b].clear();
        }

    }


}