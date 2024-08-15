#include <iostream>
#include <bits/stdc++.h>
using namespace std;


string getLength(const string & s)
{
    stringstream result;
    result << setw(3) << setfill('0') << s.size();
    return result.str();
}

string encode(vector<string>& strs) {
    string result = "";
    for (const string& s : strs)
    {
        result += getLength(s);
        result += "*";
        result += s;
    }
    return result;
}

vector<string> decode(string s) {
    vector<string> strs;
    int i = 0;
    while (s[i] != '\0')
    {
        string nn = s.substr(i, 3);
        int l = stoi(nn);
        i += 4;
        string extracted = s.substr(i, l);
        i += l;
        strs.push_back(extracted);
    }
    return strs;
}

int main()
{
    // int i = 0;
    // string t = "george";
    // cout << t.substr(i,i+ 3) << endl << i << endl;
    vector<string> strs = {"george", "magdy", "tawfik"};
    string s = encode(strs);
    cout << s << endl;
    vector<string> vec = decode(s);
    for (auto i : vec)
        cout << i << " ";
    cout << "\n";
    return 0;
}