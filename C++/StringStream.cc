#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
    vector<int> result;
    stringstream ss(str);
    string token;

    while(getline(ss, token, ',')) {
        result.push_back(stoi(token));
    }

    return result;
}

int main() {
    string str;
    getline(cin, str);
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }

    return 0;
}
