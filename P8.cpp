//#include <iostream>
//#include <algorithm>
//#include <vector>
//
//using namespace std;
//
//int main()
//{
//    // greedy algorithm
//    int n;
//    cin >> n;
//    int arr[n];
//    for(int i = 0; i < n; i++)
//    {
//        cin >> arr[i];
//    }
//
//    long long highest = arr[0];
//    long long cul = 0;
//    for(int i=0;i<n;i++)
//    {
//        cul += arr[i];
//        if(cul > highest)
//        {
//            highest = cul;
//        }
//        if(cul < 0)
//        {
//            cul = 0;
//        }
//    }
//    cout << highest;
//}
