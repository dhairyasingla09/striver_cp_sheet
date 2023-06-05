#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    if(m%n!=0){
        cout<<-1<<endl;
    }
    else{
        int loops=0;
        int d=m/n;
        while(d%2==0){
            d=d/2;
            loops++;
        }
        while(d%3==0){
            d=d/3;
            loops++;
        }

        if(d!=1){
            cout<<-1<<endl;
        }
        else{
            cout<<loops<<endl;
        }
    }
    return 0;
}
