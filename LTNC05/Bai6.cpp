#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int q;
    cin>>q;

    map<string,int>m;

    int type;
    string x;
    int y;

    while(q--) {
        cin>>type;

        if (type==1) {
            cin>>x>>y;
            m[x]+=y;
        }
        else if (type==2) {
            cin>>x;
            m.erase(x);
        }
        else if (type==3) {
            cin>>x;
            map<string,int>::iterator itr=m.find(x);
            if(itr == m.end()) cout<<0<<endl;
            else cout<<m[x]<<endl;
        }
    }

    return 0;
}


