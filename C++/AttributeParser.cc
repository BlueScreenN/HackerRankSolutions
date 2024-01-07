#include <bits/stdc++.h>
using namespace std;

int main() {
    int lineCount, queryCount;
    cin >> lineCount >> queryCount;

    string currentLine;
    vector<string> hrmlLines;
    vector<string> queryLines;
    cin.ignore();

    for (int i = 0; i < lineCount; i++) {
        getline(cin, currentLine);
        hrmlLines.push_back(currentLine);
    }

    for (int i = 0; i < queryCount; i++) {
        getline(cin, currentLine);
        queryLines.push_back(currentLine);
    }

    map<string, string> attributesMap;
    vector<string> tags;

    for (int i = 0; i < lineCount; i++) {
        currentLine = hrmlLines[i];
        currentLine.erase(remove(currentLine.begin(), currentLine.end(), '\"'), currentLine.end());
        currentLine.erase(remove(currentLine.begin(), currentLine.end(), '>'), currentLine.end());

        if (currentLine.substr(0, 2) == "</") {
            tags.pop_back();
        } else {
            stringstream stream;
            stream.str("");
            stream << currentLine;
            string tag, attribute, value;
            char tempChar;
            stream >> tempChar >> tag >> attribute >> tempChar >> value;

            string combinedTag = "";
            if (!tags.empty()) {
                combinedTag = *tags.rbegin();
                combinedTag = combinedTag + "." + tag;
            } else {
                combinedTag = tag;
            }
            tags.push_back(combinedTag);
            attributesMap[*tags.rbegin() + "~" + attribute] = value;

            while (stream) {
                stream >> attribute >> tempChar >> value;
                attributesMap[*tags.rbegin() + "~" + attribute] = value;
            }
        }
    }

    for (int i = 0; i < queryCount; i++) {
        if (attributesMap.find(queryLines[i]) == attributesMap.end())
            cout << "Not Found!\n";
        else
            cout << attributesMap[queryLines[i]] << endl;
    }

    return 0;
}
