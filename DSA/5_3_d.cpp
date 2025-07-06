#include <iostream>
#include <queue>
#include <string>

using namespace std;

void generateBinaryNumbers(int N) {
    queue<string> q;
    
    q.push("1");
    for (int i = 1; i <= N; ++i) {
        string current = q.front();
        q.pop();
        cout << current << endl;
        q.push(current + "0");
        q.push(current + "1");
    }
}

int main() {
    int N;
    cout << "Enter the value of N: ";
    cin >> N;
    
    cout << "Binary numbers from 1 to " << N << " are: " << endl;
    generateBinaryNumbers(N);
    
    return 0;
}
