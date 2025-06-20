#include <bits/stdc++.h>
using namespace std;
const int N = 1000;
int n, m;
string dhadha[N];
pair<int, int> parent[N][N];
bool visited[N][N];
int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};
char move[] = {'U', 'D', 'L', 'R'};

int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> dhadha[i];
    }

    pair<int, int> start, end;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
        {
            if (dhadha[i][j] == 'A')
                start = make_pair(i, j);
            if (dhadha[i][j] == 'B')
                end = make_pair(i, j);
        }

    queue<pair<int, int>> q;
    q.push(start);
    visited[start.first][start.second] = true;
    bool found = false;

    while (!q.empty())
    {
        pair<int, int> p = q.front();
        int x = p.first;
        int y = p.second;
        q.pop();

        if (make_pair(x, y) == end)
        {
            found = true;
            break;
        }

        for (int d = 0; d < 4; d++)
        {
            int nx = x + dx[d];
            int ny = y + dy[d];

            if (nx >= 0 && nx < n && ny >= 0 && ny < m && !visited[nx][ny] && dhadha[nx][ny] != '#')
            {
                visited[nx][ny] = true;
                parent[nx][ny] = make_pair(x, y);
                q.push(make_pair(nx, ny));
            }
        }
    }

    if (!found)
    {
        cout << "NO" << endl;
    }
    else
    {
        string path;
        pair<int, int> cur = end;

        // cout << "Parent cells along the path (from B to A):\n";
        while (cur != start)
        {
            pair<int, int> p = parent[cur.first][cur.second];
            int px = p.first;
            int py = p.second;

            //  Debug: show parent cell for current cell
            // cout << "Current: (" << cur.first << "," << cur.second << ")";
            // cout << "  Parent: (" << px << "," << py << ")\n";

            if (px == cur.first - 1)
                path += 'D';
            else if (px == cur.first + 1)
                path += 'U';
            else if (py == cur.second - 1)
                path += 'R';
            else if (py == cur.second + 1)
                path += 'L';

            cur = make_pair(px, py);
        }

        reverse(path.begin(), path.end());
        cout << "YES" << endl;
        cout << path.size() << endl;
        cout << path << endl;
    }

    return 0;
}
