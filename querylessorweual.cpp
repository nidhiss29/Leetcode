// codeforce brute force
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n1, n2, temp;

    vector<int> a;
    vector<int> b;
    vector<int> c;

    // cout << "Enter size of array a at max 70 ";
    cin >> n1;
    cin >> n2;
    int count = 0;
    // cout << "Enter elements of array a " << n1 << " elements"; // input
    for (int i = 0; i < n1; i++)
    {
        cin >> temp;
        a.push_back(temp);
    }
    // cout << "Enter elements of array b " << n2 << " elements";
    for (int i = 0; i < n2; i++)
    {
        cin >> temp;
        b.push_back(temp);
    }
    /* cout << "array a elements are "; // output
     for (int i = 0; i < n1; i++)
     {
         cout << a[i] << " ";
     }
     cout << endl;
     cout << "array b elements are ";
     for (int i = 0; i < n2; i++)
     {
         cout << b[i] << " ";
     }
     cout << endl; */
    for (int i = 0; i < n2; i++) // main loop
    {
        count = 0;
        for (int j = 0; j < n1; j++)
        {
            if (b[i] >= a[j])
                count += 1;
        }
        c.push_back(count);
    }
    // cout << "final answer ";
    for (int i = 0; i < n2; i++) // final
    {
        cout << c[i] << " ";
    }
    return 0;
}

// same question using set concept

/* #include <vector>
#include <iostream>
#include <set>
#include <algorithm> */

/* #include <iostream>
#include <algorithm>
#include <set>

using namespace std;
int main()
{

    int n, m, i;
    cin >> n >> m;

    int a[70];
    for (i = 0; i < n; i++)

        cin >> a[i];

    sort(a, a + n);

    int b[70];
    for (i = 0; i < m; i++)

    {
        cin >> b[i];
        cout << "ans:" << upper_bound(a, a + n, b[i]) - a << " "; // output is given along with input
    }

    cout << endl;
    return 0;
}
*/