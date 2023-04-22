#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string str;
    cin >> str;
    vector<int> input;
    int flag = 0;
    int size = str.size();
    for (int i = 0; i < size; i++)
    {
        string temp = "";
        while (str[i] != ',' && i < size)
        {
            temp += str[i];
            i++;
        }
        int sign = stoi(temp);
        if (sign < 0)
        {
            flag = 1;
        }
        input.push_back(sign);
    }
    sort(input.begin(), input.end());
    int size_input = input.size();
    int product = 0;
    if (flag && size_input >= 3)
    {
        product = max(input[0] * input[1] * input[size_input - 1], input[size_input - 3] * input[size_input - 2] * input[size_input - 1]);
    }
    else if (size_input >= 3)
    {
        product = input[size_input - 3] * input[size_input - 2] * input[size_input - 1];
    }
    cout << product << endl;
    return 0;
}
