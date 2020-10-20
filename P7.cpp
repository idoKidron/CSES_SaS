//#include <iostream>
//#include <algorithm>
//#include <vector>
//
//using namespace std;
//typedef std::pair<int, int> pairType;
//
//int main()
//{
//    // greedy algorithm
//    int n, x, temp;
//    cin >> n >> x;
//    vector<pairType> nums;
//    for(int i = 0; i < n; i++)
//    {
//        cin >> temp;
//        nums.push_back(make_pair(temp, i));
//    }
 
//    bool flag = false;
//    int left = 0;
//    int right = n - 1;
//    while(left < right)
//    {
//        if(nums[left].first + nums[right].first == x)
//        {
//            cout << nums[right].second + 1 << " " << nums[left].second + 1;
//            flag = true;
//            break;
//        }
//        if(nums[left].first + nums[right].first < x)
//        {
//            left++;
//        }
//        else
//        {
//            right--;
//        }
//    }
//
//    if(!flag)
//    {
//        cout << "IMPOSSIBLE";
//    }
//}
