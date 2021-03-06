#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main()
{
    int test;
    int start = 0, end = 0;
    string input;
    string result;

    stack<char> st;

    cin >> test;
    cin.ignore();

    for (int t = 0; t < test; t++)
    {
        getline(cin, input);
        int num = input.length();

        for (int i = 0; i < input.length() + 1; i++)
        {
            if (input[i] == ' ' || input[i] == '\0' || input[i] == '\n')
            {
                while (!st.empty())
                {
                    cout << st.top();
                    st.pop();
                }
                cout << " ";
            }
            else
            {
                st.push(input[i]);
            }
        }
    }

    return 0;
}