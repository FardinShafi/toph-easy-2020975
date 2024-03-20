#include <iostream>
#include <vector>

using namespace std;

bool is_ascending(const vector<int> &numbers)
{

    for (size_t i = 1; i < numbers.size(); ++i)
    {
        if (numbers[i] < numbers[i - 1])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int N;
    cin >> N;

    vector<int> numbers(N);
    for (int i = 0; i < N; ++i)
    {
        cin >> numbers[i];
    }

    if (is_ascending(numbers))
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}
