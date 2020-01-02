#include <iostream>
#include <vector>
using namespace std;

void display(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        if (i < v.size() - 1)
        {
            cout << v[i] << " ";
        }
        else
        {
            cout << v[i] << endl;
        }
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    display(v);

    for (int i = 1; i < n; i++)
    {
        int x = v[i];
        for (int j = i - 1; j >= 0 && v[j] > x; j--)
        {
            swap(v[j + 1], v[j]);
        }
        display(v);
    }
}
