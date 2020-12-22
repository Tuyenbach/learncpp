#include <iostream>
#include <vector>
using namespace std;

int sinole_vetor()
{
    int n;
    vector<float> a;
    cout << "enter array size: ";
    cin >> n;

    if (n < 1)
    {
        cout << "Invalid size!";
        return 1;
    }

    a.resize(n);
    for (int i = 0; i < n; i++)
    {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }
    cout << "Data: ";
    for (float f : a)
    {
        cout << f << " ";
    }
    cout << endl;

    return 0;
}

istream &operator>>(istream &iDev, vector<float> &a)
{

    float temp;
    a.resize(0);
    while (iDev >> temp)
    {
        a.push_back(temp);
    }

    return iDev;
}
istream &operator<<(ostream &oDev, vector<float> &a)
{
    for (float f : a)
    {
        oDev << f << " ";
    }
    return oDev;
}
int main()
{
    vector<float> a;
    cout << "input ";
    cin >> a;

    cout << "output ";
    cout << a;
    return 0;
}