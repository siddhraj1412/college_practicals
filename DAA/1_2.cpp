#include <iostream>
using namespace std;
int op=0;
int fib(int n) {op++;
    op++;if (n == 1) {
        return 1;op++;
    }  
    else{ 
        return fib(n - 1) + fib(n - 2);op++; 
    } 
}

int main() {
    int l;
    cin >> l;
    cout<<fib(l);
    cout << endl<<op;
    return 0;
}
