#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, maximum;
        cin >> n;
        int p[n], s[n], sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> p[i] >> s[i];
            if (p[i] > 8)
            {
                s[i] = 0;
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (p[i] == p[j])
                {
                    maximum = max(s[i], s[j]);
                    s[i] = maximum;
                    s[j] = 0;
                }
            }
            sum += s[i];
        }
        cout << sum << endl;
    }
    return 0;
}
