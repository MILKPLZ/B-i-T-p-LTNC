#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
int h1=s[1]-'0';
    int h2=s[0]-'0';
    int hh = h2*10+h1%10;

    if (s[8]=='A') {
        if (hh==12) {
            return "00" + s.substr(2, 6);
        } else {
            return s.substr(0, 8);
        }
    } else {
        if (hh==12) {
            return s.substr(0, 8);
        } else {
            hh += 12;
            return to_string(hh) + s.substr(2, 6);
        }
    }
}
int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
