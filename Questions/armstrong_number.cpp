#include<iostream>
#include <vector>
#include <bits/stdc++.h>
#include <sstream>
#include <iomanip>
using namespace std;

string armstrong(vector<int>arr,string inputString){

    double a;

    for (int i = 0; i < arr.size(); i++)
    {
        a += pow(arr[i] , arr.size()) ;
    }
    stringstream ss;
    ss << a;
    string resultString = ss.str();
    if (resultString == inputString)
    {
        return resultString;
    }
    cout << fixed << resultString;
    return "Not armstrong number";
}

int main()
{
    string inputString = "472335975";
    vector<int> numbers;

    for (char ch : inputString) {
        int digit = ch - '0';
        numbers.push_back(digit);
    }
    string result =armstrong(numbers,inputString);

    cout << result;
    
    
    return 0;
}