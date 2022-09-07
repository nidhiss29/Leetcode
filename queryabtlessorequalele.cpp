// codeforce brute force

/* #include <iostream>
using namespace std;
int main()
{
    int n1, n2;
    int a[70], b[70], c[70];
    cout << "Enter size of array a at max 70 ";
    cin >> n1;
    cout << "Enter size of array b ";
    cin >> n2;
    int count = 0;
    cout << "Enter elements of array a " << n1 << " elements"; // input
    for (int i = 0; i < n1; i++)
    {
        cin >> a[i];
    }
    cout << "Enter elements of array b " << n2 << " elements";
    for (int i = 0; i < n2; i++)
    {
        cin >> b[i];
    }
    cout << "array a elements are "; // output
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
    cout << endl;
    for (int i = 0; i < n2; i++) // main loop
    {
        count = 0;
        for (int j = 0; j < n1; j++)
        {
            if (b[i] >= a[j])
                count += 1;
        }
        c[i] = count;
    }

    cout << "final answer ";
    for (int i = 0; i < n2; i++) // final
    {
        cout << c[i] << " ";
    }
    return 0;
}               */

// same question using set concept

#include <vector>
#include <iostream>
#include <set>
#include <algorithm>

{

    int n, m, i;
    cout << "enter size";
    cin >> n >> m;

    int a[n + 1];
    cout << "enter value of a";
    for (i = 0; i < n; i++)

        cin >> a[i];

    sort(a, a + n);

    int b[m + 1];
    cout << "operation on b";
    for (i = 0; i < m; i++)

    {

        cin >> b[i];

        cout << upper_bound(a, a + n, b[i]) - a << " ";
    }

    cout << endl;
}