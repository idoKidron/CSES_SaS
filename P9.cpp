//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//int main()
//{
//    int n;
//    cin >> n;
//    int sticks[n];
//    for(int i=0; i < n; i++)
//    {
//        cin >> sticks[i];
//    }
//    sort(sticks, sticks + n);
//    int median = sticks[n/2];
//
//    long long sum = 0;
//    for(int i=0; i < n; i++)
//    {
//        sum += abs(median - sticks[i]);
//    }
//
//    cout << sum;
//}