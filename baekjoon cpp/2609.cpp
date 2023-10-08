#include <iostream>
using namespace std;

int GCD(int a, int b){
    int tmp;
    while(b){
        tmp=a%b;
        a=b;
        b=tmp;
    }
    return a;
}

int GCD2(int a, int b, int gcd){
    int i=a/gcd;
    return b*i;
}

int main(void){
    int a,b;
    cin >> a >> b;
    int gcd=GCD(a,b);
    cout << gcd << "\n";
    cout << GCD2(a,b,gcd) << "\n";

}