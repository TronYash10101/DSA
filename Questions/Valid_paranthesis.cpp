#include <iostream>
#include <stack>

using namespace std;

class Solution
{
public:
    bool isValid(string s)
    {

        stack<char> check;
        for (char c : s)
        {
            if (c == '(' || c == '[' || c == '{')
            {
                check.push(c);
            }
            else
            {
                if (check.empty() || check.top() == '[' && c != ']' || check.top() == '(' && c != ')' || check.top() == '{' && c != '}')
                {
                    cout << c;
                    return 0;
                }
                check.pop();
            }
                        
        }
        return check.empty();
        

        
    }
};

int main()
{
    Solution obj;
    string s = "[]";

    cout << obj.isValid(s);

    return 0;
}