#include <iostream>
#include <algorithm>
#include <numeric>

using namespace std;

int main()
{
    int n;
    cin >> n;
    long long arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr+n);
    long long sum = 0;
    sum = accumulate(arr, arr+n, sum);
    cout << max(2*arr[n-1], sum);

}