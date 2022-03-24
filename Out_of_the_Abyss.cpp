#include <bits/stdc++.h>
#define int long long int
using namespace std;
const int INF = 100000000000005;

vector<int> dist;

set<pair<int, int>> q;

void bfsutil(vector<int> adj[], int s)
{
    set<pair<int, int>>::iterator it;

    for (int i = 0; i < adj[s].size(); i++)
    {
        int v = adj[s][i];
        if (dist[s] + 1 < dist[v])
        {

            it = q.find({dist[v], v});
            q.erase(it);
            dist[v] = dist[s] + 1;
            q.insert({dist[v], v});
        }
    }

    if (q.size() == 0)
        return;

    it = q.begin();
    int next = it->second;
    q.erase(it);

    bfsutil(adj, next);
}

void bfs(vector<int> adj[], int n, vector<int> &s, int k)
{
    vector<int> source(n + 1, 0);

    for (int i = 0; i < k; i++)
        source[s[i]] = 1;

    for (int i = 1; i <= n; i++)
    {
        if (source[i])
        {
            dist[i] = 0;
            q.insert({0, i});
        }
        else
        {
            dist[i] = INF;
            q.insert({INF, i});
        }
    }

    auto itr = q.begin();
    int start = itr->second;

    bfsutil(adj, start);
}

void solve()
{
    int N, m, k, u, v, q;
    cin >> N >> m >> k;

    vector<int> adj[N + 1], special(k);

    for (int i = 0; i < m; ++i)
    {
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    for (int i = 0; i < k; ++i)
    {
        cin >> special[i];
    }

    dist = vector<int>(N + 1, INF);
    bfs(adj, N, special, k);

    cin >> q;
    while (q--)
    {
        cin >> u;
        cout << (dist[u] >= INF ? -1 : dist[u]) << endl;
    }

    return;
}

int main()
{
    int test;
    cin >> test;
    while (test--)
        solve();
    return 0;
}