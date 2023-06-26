#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    long long int arr[n];
    long long int ans[n]={0};
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    ans[n - 1] = arr[n - 1];
    long long int sum = ans[n - 1];
    //cout <<"sum "<< sum << endl;

    for (int i = n-2; i >= 0; i--){
        if(arr[i]>=ans[i+1]){
            if(ans[i+1]-1>0){
                ans[i] = ans[i + 1] - 1;
                //cout << "ans[" <<i+1 <<"]1 " <<ans[i]<<endl;
            }
            else{
                ans[i] = 0;
                //cout << "ans[i]2 " << ans[i] << endl;
            }
        }
        else{
            ans[i] = arr[i];
        }
    }
    for (int i = 0; i < n-1; i++){
       // cout << i+1 <<" "<< ans[i] << endl;
        sum += ans[i];
    }

        cout << sum << endl;
    return 0;
}
