//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//typedef std::pair<int, int> indPair;
//typedef std::pair<int, indPair> pairType;
//
//bool noOverlap(const pairType& a, const pairType& b)
//{
//    return a.second.first != b.second.first && a.second.first != b.second.second &&
//    a.second.second != b.second.first && a.second.second !=b.second.second;
//}
//
//int main()
//{
//    int n, x;
//    cin >> n >> x;
//    int nums[n];
//    for(int i=0; i<n; i++)
//    {
//        cin >> nums[i];
//    }
//    vector<pairType> arr;
//    for(int i=0; i<n; i++)
//    {
//        for(int j=i+1; j<n; j++)
//        {
//            arr.push_back(make_pair(nums[i]+nums[j], make_pair(i, j)));
//        }
//    }
//    sort(begin(arr), end(arr),
//         [](pairType& first, pairType& second)->bool { return first.first < second.first; });
//    int i=0;
//    int j=n*(n-1) / 2 - 1;
//    bool flag = false;
//    while(i < j && !flag)
//    {
//        if(arr[i].first + arr[j].first == x)
//        {
//            if(noOverlap(arr[i], arr[j]))
//            {
//                cout << arr[i].second.first+1<< " " << arr[i].second.second+1
//                << " " << arr[j].second.first+1 << " " << arr[j].second.second+1;
//                flag = true;
//                break;
//            }
//            else // ?
//            {
//                i++;
//            }
//        }
//        else
//        {
//            if(arr[i].first + arr[j].first > x)
//                {
//                    j--;
//                    continue;
//                }
//                else
//                {
//                    i++;
//                    continue;
//                }
//        }
//    }
//    if(!flag)
//    {
//        cout << "IMPOSSIBLE";
//    }
//
//}