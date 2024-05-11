 /**
  *    author:  Udipto
  *    created: Saturday
11 May 2024
Dhaka, Bangladesh
 **/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    unordered_map<string, int> names;

    for (int i = 0; i < n; ++i)
    {
        string name;
        cin >> name;

        if (names.find(name) == names.end())
        {
            names[name] = 1;
            cout << "OK" << endl;
        }
        else
        {
            while (names.find(name + to_string(names[name])) != names.end())
            {
                names[name]++;
            }
            string new_name = name + to_string(names[name]);
            names[new_name] = 1;
            cout << new_name << endl;
        }
    }

    return 0;
}
