#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int t;
    cin>>t;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int pos = 1, nxt;

    while (pos < t){
        nxt = pos + arr[pos - 1];
        pos = nxt;
    }

    if (pos == t)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
