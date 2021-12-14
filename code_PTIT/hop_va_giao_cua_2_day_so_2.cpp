#include <iostream>
#include <vector>
#include <set>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, x;
        cin >> n >> m;
        set<int> Union;
        set<int> Intersection ;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            Union.insert(x);
        }
        for (int i = 0; i < m; i++)
        {
            int before = Union.size();
            cin >> x;
            Union.insert(x);
            int after = Union.size();
            if (before == after)
                Intersection.insert(x);
        }
        for (int i : Union)
            cout << i << " ";
        cout << endl;
        for (int i : Intersection)
            cout << i << " ";
        cout << endl;
    }
}
