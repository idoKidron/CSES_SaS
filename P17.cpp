//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//typedef std::pair<int, int> pairType;
//
//int main()
//{
//    int n, x ,temp;
//    cin >> n >> x;
//    vector<pairType> arr;
//    for(int i=0; i<n; i++)
//    {
//        cin >> temp;
//        arr.push_back(make_pair(temp, i));
//    }
//    sort(begin(arr), end(arr),
//         [](pairType& first, pairType& second)->bool { return first.first < second.first; });
//    bool flag = false;
//    for(int i=0; i < n-2; i++)
//    {
//        int j = i+1;
//        int k = n-1;
//        while(j < k)
//        {
//            if(arr[i].first + arr[j].first + arr[k].first == x)
//            {
//                cout << arr[i].second+1 << " " << arr[j].second+1 << " " << arr[k].second+1;
//                flag = true;
//                break;
//            }
//            else
//            {
//                if(arr[i].first + arr[j].first + arr[k].first > x)
//                {
//                    k--;
//                    continue;
//                }
//                else
//                {
//                    j++;
//                    continue;
//                }
//            }
//
//        }
//        if(flag)
//        {
//            break;
//        }
//    }
//    if(!flag)
//    {
//        cout << "IMPOSSIBLE";
//    }
//
//}