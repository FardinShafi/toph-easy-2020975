#include <iostream>
#include <string>

using namespace std;

string createStrongPassword(const string &word)
{

    string password = word;
    password[0] = toupper(password[0]);

    size_t found = password.find('s');
    while (found != string::npos)
    {
        password[found] = '$';
        found = password.find('s', found + 1);
    }

    found = password.find('i');
    while (found != string::npos)
    {
        password[found] = '!';
        found = password.find('i', found + 1);
    }

    found = password.find('o');
    while (found != string::npos)
    {
        password.replace(found, 1, "()");
        found = password.find('o', found + 2);
    }

    password += '.';

    return password;
}

int main()
{
    string word;
    cin >> word;
    string strongPassword = createStrongPassword(word);
    cout << strongPassword << endl;
    return 0;
}
