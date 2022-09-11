#include <vector>
#include <iostream>
using namespace std;
int main()
{
    vector<int> ar = {1, 2, 3};
    for (int i = 0; i < ar.size(); i++)
    {
        cout << ar[i] << " ";
    }
    cout << endl;
    ar.insert(ar.begin() + 2, 7);
    for (int i = 0; i < ar.size(); i++)
    {
        cout << ar[i] << " ";
    }
    cout << endl;
    ar.insert(ar.begin() + 2, 10);
    for (int i = 0; i < ar.size(); i++)
    {
        cout << ar[i] << " ";
    }
    return 0;
}
