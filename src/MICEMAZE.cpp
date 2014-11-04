#include<iostream>
#include<limits.h>
#define INF 999999

using namespace std;

int main()
{
	int n, e, t, m, i, j, k, count = 0, a, b, u;
	cin >> n >> e >> t >> m;
	int g[n][n];
	for(i = 0; i < n; i++)
	{
 		for(j = 0; j < n; j++)
		{
			if(i == j)
				g[i][j] = 0;
			else
				g[i][j] = INF;
		}
	}
	for(i = 0; i < m; i++)
	{
		cin >> a >> b >> u;
		g[a - 1][b - 1] = u;
	}
	for(i = 0; i < n; i++)
		for(j = 0; j < n; j++)
			for(k = 0; k < n; k++)
				if(g[i][k] + g[k][j] < g[i][j])
					g[i][j] = g[i][k] + g[k][j];
	for(i = 0; i < n; i++)
		for(j = 0; j < n; j++)
			if((j == (e - 1)) && (g[i][j] <= t) && (g[i][j] != 0) && (g[i][j] != INF))
				count++;
	cout << (count + 1) << endl;
	return 0;
}
	
