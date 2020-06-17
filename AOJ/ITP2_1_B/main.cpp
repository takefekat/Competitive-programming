#include <bits/stdc++.h>
using namespace std;

int main(){

    int n; scanf("%d",&n);

    list<int> l;
    auto idx = l.end();

    for (int i = 0; i < n; i++)
    {
        int b; scanf("%d",&b);
        if(b == 0){
            int c; scanf("%d",&c);
            idx = l.insert(idx,c);
        }
        else if(b == 1){
            int c; scanf("%d",&c);
            for (int j = 0; j< abs(c); j++)
            {
                if(c>0) ++idx;
                else    --idx;
            }
        }
        else{
            idx = l.erase(idx);
        }
    }
    for (auto ele: l){
        printf("%d\n",ele);
    }
    
    

}