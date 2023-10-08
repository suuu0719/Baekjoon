#include <iostream>
using namespace std;

unsigned long long Factorial(int N){
    if (N<=1){
        return 1;
    }
    else {
        return N*Factorial(N-1);
    }
}

int main(){
    int N;
    cin >> N;
    unsigned long long fac=Factorial(N);
    cout << fac << endl;
}
