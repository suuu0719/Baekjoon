#include <iostream>
using namespace std;


int a[1001][1001]={0};

int main(){
    int arr[1001];
    int n, sum= 0;
    cin >> n;
    for (int i=1; i<=n; i++){
        for (int j=1; j<=n; j++){
            cin >> a[i][j];
        }
    }
    if (n>=3){
        sum=(a[1][2]+a[1][3]+a[2][3])/2;
        arr[1]=sum-a[2][3];
        for (int i=2; i<=n; i++){
            arr[i]=a[1][i]-arr[1];
        }
        for (int i=1; i<=n; i++){
            cout << arr[i] <<" ";
        }
        
    }
    else{
        cout<<"1 1"<<endl;
    }
}