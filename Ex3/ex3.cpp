#include <bits/stdc++.h>
using namespace std;
void generateBinaryStrings(int n, string str)
{
    if (n == str.size())
    {
        cout << str << endl;
        return;
    }
    else
    {
        generateBinaryStrings(n, str + '0');
        generateBinaryStrings(n, str + '1');
    }
}
int main()
{
    int n;
    cin >> n;
    string s = "";
    generateBinaryStrings(n, s);
    return 0;
}