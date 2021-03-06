#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>

using namespace std;

int main()
{
    unordered_map<char,char> pairs;
    pairs[')'] = '(';
    pairs[']'] = '[';
    pairs['}'] = '{';
    vector<char> queue;
    string input;

    cin >> input;
    if (input.size() % 2 == 1)
    {
        cout << "Invalid" << endl;
        return 0;
    }
    
    for (char t : input)
    {
        if (t == '(' || t == '[' || t == '{')
            queue.push_back(t);
        else if (t == ')' || t == ']' || t == '}')
        {
            if (queue.back() == pairs[t])
                queue.pop_back();
            else
            {
                cout << "Invalid" << endl;
                return 0;
            }
        } else
        {
            cout << "Invalid" << endl;
            return 0;
        }
        
    }
    if (queue.empty())
    {
        cout << "Valid" << endl;
        return 0;
    }
    else
    {
        cout << "Invalid" << endl;
        return 0;
    }
}

   
