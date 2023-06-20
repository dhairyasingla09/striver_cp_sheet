#include <bits/stdc++.h>
using namespace std;

int main(void){
    int n, m;
    cin>>n>>m;

    int lb=(n+1)/2;
    int ans=(lb+m-1)/m*m;
    if(ans>n){
        ans=-1;
    }
    cout<<ans<<endl;
    
    return 0;
}
