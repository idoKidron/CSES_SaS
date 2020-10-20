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
//    int n, temp, temp2;
//    cin >> n;
//    int* arr = new int[1000000001]{0};
//    vector<pairType> nums;
//    for(int i = 0; i < n; i++)
//    {
//        cin >> temp;
//        cin >> temp2;
//        nums.push_back(make_pair(temp, temp2));
//    }
//    for(int i = 0; i < n; i++)
//    {
//        for(int j = nums[i].first; j <= nums[i].second; j++)
//        {
//            arr[j]++;
//        }
//    }
//    cout << *max_element(arr, arr + 1000000001);
//}
