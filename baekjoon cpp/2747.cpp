#include <iostream>
 
 using namespace std;

 
 int Fibonacci(int n)
 {
    if (n<=1)
    return n;
    else{
        int fn=0; int f1=0; int f2=1;
        for (int i=2; i<=n; i++){
            fn=f1+f2;
            f1=f2;
            f2=fn;
        }
        return fn;
    }
 }

 int main(){
    int n;
    cin >> n ;
    cout<< Fibonacci(n) << endl;
 }