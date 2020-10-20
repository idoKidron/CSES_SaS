//#include <iostream>
//#include <algorithm>
//#include <map>
//
//using namespace std;
//
//long long couSubarrays(long long arr[], long long n, long long x)
//{
//    map<long long, long long> prevSum;
//    long long cou = 0;
//    long long accSum = 0;
//
//    for(long long i=0; i<n; i++)
//    {
//        accSum += arr[i];
//        if(accSum == x)
//        {
//            cou++;
//        }
//
//        if(prevSum.find(accSum - x) != prevSum.end())
//        {
//            cou += prevSum[accSum - x];
//        }
//        prevSum[accSum]++;
//
//    }
//
//    return cou;
//}
//
//int main()
//{
//    long long n , x;
//    cin >> n >> x;
//    long long arr[n];
//    for(long long i = 0; i < n; i++)
//    {
//        cin >> arr[i];
//    }
//
//    cout << couSubarrays(arr, n, x);
//}
