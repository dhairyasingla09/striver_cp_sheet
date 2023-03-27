#include<bits/stdc++.h>
using namespace std;

void func(int n, int arr[]){
    for(int i=0; i<n; i++){
        if(arr[i]==1){
            cout<<"HARD"<<endl;
            return;
        }
    }
    cout<<"EASY"<<endl;
    return;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    func(n,arr);
    return 0;
}
