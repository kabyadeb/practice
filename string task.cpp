#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s, ss;
    cin >> s;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u' && s[i] != 'A' && s[i] != 'E' && s[i] != 'I' && s[i] != 'O' && s[i] != 'U'&& s[i] != 'Y' && s[i] != 'y' )
        {
            ss += ".";
            ss += tolower(s[i]);
        }
        else
        {
           continue;
        }
    }

    cout << ss << endl;

    return 0;
}
