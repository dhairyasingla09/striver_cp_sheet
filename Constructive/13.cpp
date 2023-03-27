#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n], b[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
        cin>>b[i];
    }

    // for(int i=0; i<n; i++){
    //     cout<<a[i]<<" ";
    // }
    // cout<<endl;
    // for(int i=0; i<n; i++){
    //     cout<<b[i]<<" ";
    // }
    int arr[n]={0};
    arr[0]=a[0]+b[0];
    for(int i=1; i<n; i++){
        arr[i]=arr[i-1]-a[i]+b[i];
    }

    // for (int i = 0; i < n; i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;
    cout << *max_element(arr, arr + n) << endl;

        return 0;
    }
