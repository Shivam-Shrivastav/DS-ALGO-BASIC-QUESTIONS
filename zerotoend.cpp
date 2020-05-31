#include<bits/stdc++.h>
using namespace std;
void zerotoEnd(int arr[],int n)
{
    int x = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]!=0)
        {
            arr[x++] = arr[i];
        }
        
    }
    while (x<n)
        {
            arr[x++] = 0;
        }
    
}
int main(int argc, char const *argv[])
{
    int arr[] = {1, 9, 8, 4, 0, 0, 2, 7, 0, 6, 0, 9}; 
    int n = sizeof(arr) / sizeof(arr[0]);
    zerotoEnd(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
