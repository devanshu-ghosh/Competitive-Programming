#include <iostream>
#include <algorithm>

using namespace std;

const int MAXN = 300 + 5;

int h, m, tn, sz, n, ret;
long long b[MAXN], a[MAXN][MAXN], f[MAXN][MAXN], c[MAXN];

inline long long findsum (int x1, int y1, int x2, int y2) {
    return f[x2][y2] - f[x1 - 1][y2] - f[x2][y1 - 1] + f[x1 - 1][y1 - 1];
}

void merge_sort (int l, int r) {
    if (l == r)
        return ;
    merge_sort(l, (l + r) / 2);
    merge_sort((l + r) / 2 + 1, r);
    int m = (l + r) / 2, h = l;
    for(int i = m + 1; i <= r; i++) {
        while (h <= m && b[i] - b[h] >= sz)
            ++h;
        ret += h - l;
    }
    int ptr1 = l, ptr2 = m + 1;
    for(int i = l; i <= r; i++) {
        if ((ptr2 > r) || (ptr1 <= m && b[ptr1] < b[ptr2]))
            c[i] = b[ptr1++];
        else
            c[i] = b[ptr2++];
    }
    for(int i = l; i <= r; i++)
        b[i] = c[i];
}

int main(int argc, const char * argv[]) {
    cin >> tn;
    while (tn--) {
        cin >> n >> m >> sz;
        ++sz;
        for(int i = 1; i <= n; i++)
            for(int j = 1; j <= m; j++)
                cin >> a[i][j];
        for(int i = 1; i <= n; i++)
            for(int j = 1; j <= m; j++)
                f[i][j] = f[i - 1][j] + f[i][j - 1] - f[i - 1][j - 1] + a[i][j];
        
/*        for(int x1 = 1; x1 <= n; x1++)
            for(int y1 = 1; y1 <= m; y1++)
                for(int x2 = x1; x2 <= n; x2++)
                    for(int y2 = y1; y2 <= m; y2++)
                        if (findsum(x1, y1, x2, y2) < sz)
                            ++ret;
        cout << ret << endl;
        continue;*/
        
        ret = 0;
        for(int i = 1; i <= n; i++)
            for(int j = i; j <= n; j++) {
                b[0] = 0;
                for(int k = 1; k <= m; k++)
                    b[k] = findsum(i, 1, j, k);
                merge_sort(0, m);
            }
        cout << n * 1LL * (n + 1) / 2 * m * (m + 1) / 2 - ret << endl;
    }
    return 0;
}

