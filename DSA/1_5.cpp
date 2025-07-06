#include<iostream>
#include<vector>
using namespace std;
const int s=4;
void binarySearch(int a[][s], int n, int m, int k, int x)
{
    int l = 0, r = m - 1, mid;
    while (l <= r)
    {
        mid = (l + r) / 2;
 
        if (a[x][mid] == k)
        {
            cout << "Found at (" << x << "," << mid << ")" << endl;
            return;
        }
 
        if (a[x][mid] > k)
            r = mid - 1;
        if (a[x][mid] < k)
            l = mid + 1;
    }
    cout << "Element not found" << endl;
}
void get(int a[][s],int n,int m,int k){
     int l = 0, r = n - 1, mid;
 
    while (l <= r)
    {
        mid = (l + r) / 2;
        if (k == a[mid][0]) 
        {
            cout << "Found at (" << mid << ",0)" << endl;
            return;
        }
 
        else if (k == a[mid][m - 1]) 
        {
            int t = m - 1;
            cout << "Found at (" << mid << "," << t << ")" << endl;
            return;
        }
 
        else if (k > a[mid][0] && k < a[mid][m - 1])
        {
            binarySearch(a, n, m, k, mid);
            return;
        }
        else if (k < a[mid][0])
            r = mid - 1;
        else if (k > a[mid][m - 1])
            l = mid + 1;
            
    }
    cout<<"element not found";
}

int main(){
    
    int a[][s]={{1,2,3,4},
                {5,6,7,8},
                {9,10,11,12}};
    int n=3;
    int m=4;
    int x=7;
    get(a,n,m,x);
}