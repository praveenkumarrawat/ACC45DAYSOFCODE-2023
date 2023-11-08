#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, chef = 0, chefina = 0;
        cin >> n;
        string a, b;
        cin >> a;
        cin >> b;
        for (int i = 0; i < n; i++)
        {
            if ((a[i] == 'R' && b[i] == 'S') || (a[i] == 'S' && b[i] == 'P')||(a[i] == 'P' && b[i] == 'R'))
            {
                chef++;
            }
            else if(a[i]==b[i]){
                continue;
            }
            else
            {
                chefina++;
            }
        }
        if (chefina > chef)
        {
            cout << ((chefina - chef)/2)+1 << endl;
        }
        else if (chefina == chef)
        {
            cout << 1 << endl;
        }
        else{
            cout << 0 << endl;
        }
    }
    return 0;
}
