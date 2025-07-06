#include<iostream>
using namespace std;

int compare(int arr[], int n, int k) 
{
    int count = 0;

    for (int i = 0; i < n; i++) 
    {
        for (int j = i; j < n; j++) 
        {
            if ((arr[i] + arr[j]) % k == 0) 
            {
                cout << "(" << arr[i] << ", " << arr[j] << ")" << endl;
                count++;
            }
        }
    }

    return count;
}

int main() 
{
    int arr[] = {3, 1, 2, 6, 9, 4};
    int n = sizeof(arr) / sizeof(arr[0]); // get the size of the array
    int k = 5;

    int result = compare(arr, n, k);
    cout << "Number of pairs: " << result << endl;

    return 0;
}