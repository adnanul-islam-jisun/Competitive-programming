// Boss Adnan Is Ready For Coading

#include <bits/stdc++.h>

using namespace std;

string insertDigit(string numStr, int digit, int len)
{

    int pos = len;

    for (int i = 0; i < len; i++)
    {
        if (numStr[i] - '0' < digit)
        {
            pos = i;
            break;
        }
    }

    return (numStr.substr(0, pos) + to_string(digit) + numStr.substr(pos));
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int Size;
        int digit;
        string givenNumber;
        cin >> Size >> digit;
        cin >> givenNumber;
        string result = insertDigit(givenNumber, digit, Size);
        cout << result << endl;
    }
    return 0;
}
