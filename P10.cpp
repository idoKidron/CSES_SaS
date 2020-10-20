//#include <iostream>
//#include <algorithm>
//#include <map>
//
//using namespace std;
//
//int main()
//{
//    // greedy algorithm
//    int n;
//    cin >> n;
//    int songs[n];
//    for(int i = 0; i < n; i++)
//    {
//        cin >> songs[i];
//    }
//    map<int,int> indMap; // (value, index)
//    int m = 0;
//    int lastInd = 0;
//    for(int i = 0; i < n; i++)
//    {
//        if(indMap.find(songs[i]) != indMap.end() && indMap[songs[i]] >= lastInd)
//        {
//            lastInd = indMap[songs[i]] + 1;
//        }
//        else
//        {
//            m = max(m, i - lastInd + 1);
//        }
//        indMap[songs[i]] = i;
//    }
//
//    cout << m;
//}
