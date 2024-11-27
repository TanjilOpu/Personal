#include <bits/stdc++.h>
using namespace std;

int calcScore(vector<int> &nums)
{

    const int n = nums.size();
    int maxVal = *max_element(nums.begin(), nums.end());

    if (n % 2 == 0)
        return maxVal + n / 2;

    for (int i = 0; i < n; i++)
    {
        if (nums[i] == maxVal and (i % 2) == 0)
        {
            return maxVal + n / 2 + 1;
        }
    }

    return maxVal + n / 2;
}

int main()
{

    int N;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        int n;
        cin >> n;
        vector<int> nums(n, 0);
        for (int j = 0; j < n; j++)
        {
            cin >> nums[j];
        }
        int score = calcScore(nums);
        cout << score << endl;
    }

    return 0;
}