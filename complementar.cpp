#include <iostream>
#define MMAX 50
#define NMAX 50
using namespace std;
int main()
{
	bool a[MMAX][NMAX], ok;
	int m, n, i, j, nr;
	cout << "m = "; cin >> m;
	cout << "n = "; cin >> n;
	cout << "Introdu " << m*n << " numere din multimea {0,1}:\n";
	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
			cin >> a[i][j];
	for (nr = 0, j = 1; j < n; j++)
	{
		for (ok = 1, i = 0; i < m && ok; i++)
			if (a[i][j] == a[i][0])
				ok = 0;
		if (ok)
			nr++;
	}
	cout << "rezultat = " << nr;
	return 0;
}
