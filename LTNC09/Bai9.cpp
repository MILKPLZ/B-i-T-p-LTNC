#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    map <string,int> dic;
    int num, phon_num;
    string name;
    cin>>num;
    for(int i=0;i<num;i++)
    {
        cin>>name>>phon_num;
        dic.insert(pair<string,int>(name,phon_num));
    }
    string key;
    for(int i=0;i<num;i++)
    {
        cin>>key;
        auto result=dic.find(key);

        if(result!=dic.end())
        {
            cout<<result->first<<"="<<result->second<<endl;
        }
        else{
            cout<<"Not found"<<endl;
        }
    }
    return 0;
}
