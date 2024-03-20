#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;


int main() {
    string s1,s2;
    cin>>s1;
    cin>>s2;
    int n=s1.length();
    int m=s2.length();
    string s=s1+s2;
    char a=s1[0];
    s1[0]=s2[0];
    s2[0]=a;
    cout<<n<<" "<<m<<endl;
    cout<<s<<endl;
    cout<<s1<<" "<<s2;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
