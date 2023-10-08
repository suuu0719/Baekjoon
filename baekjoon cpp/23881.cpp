#include <iostream>
using namespace std;
int num1, num2=0;

int selection_sort(int A[], int k, int n) {
    int cnt = 0;
    int big, index=0;
    for (int last=n-1; last >= 1; last--) {
        for (int i=0; i<last; i++){
            if(A[i]>=big){
                big=i;
            }
        }    
        int tmp=A[last];
        A[last]=A[index];
        A[index]=A[last];
        cnt++;
        if (cnt==k){
            num1=A[index];
            num2=A[last];

            return 1;
        }   
    }

    return -1;

}
int main(void) {
    int A[10001];
    int n, k = 0;
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }
    int exchange=selection_sort(A, k, n);
    if(exchange==-1){
        cout << -1;
    } else if (exchange==1){
        cout<< num1 << " "<< num2;
    }
}