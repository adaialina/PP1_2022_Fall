#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin>>n;
    int arr[n][n];

    for(int i = 0; i < n; ++i)
        for(int j = 0; j < n; ++j)
        cin >> arr[i][j];

    int maximum=arr[0][0];

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j){
            if(maximum < arr[i][j]){
                maximum = arr[i][j];
            }
        }
     }
    cout << maximum;
    return 0;
}