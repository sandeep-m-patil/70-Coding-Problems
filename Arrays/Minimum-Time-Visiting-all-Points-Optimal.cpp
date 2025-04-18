#include <bits/stdc++.h>

using namespace std;

// Time Complexity: O(N) where N is the number of points
int minTimeToVisitAllPoints(vector<vector<int>> &points)
{
    int time = 0;

    for (int i = 0; i < points.size() - 1; ++i)
    {
        int dx = abs(points[i + 1][0] - points[i][0]);
        int dy = abs(points[i + 1][1] - points[i][1]);
        time += max(dx, dy);
    }

    return time;
}

int main()
{

    vector<vector<int>> a = {{1, 1}, {3, 4}, {-1, 0}};
    cout << minTimeToVisitAllPoints(a);

    /*
    Output:7
    */
}