#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

class Solution
{
public:
    string reverseWords(string s)
    {
        istringstream iss(s);
        vector<string> words;

        string word;
        while (iss >> word)
        {
            words.push_back(word);
        }
        string reversed;
        for (auto i = words.rbegin(); i != words.rend(); ++i)
        {
            reversed += *i;
            if (i+1 != words.rend())
            {
                reversed += " ";
            }
        }
        return reversed;
    }
};

int main()
{
    Solution obj;

    string inputString = "  hello world  ";

    cout << obj.reverseWords(inputString);
    return 0;
}