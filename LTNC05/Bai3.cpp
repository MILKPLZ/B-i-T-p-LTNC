#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int m;
    cin>>m;
    int h,k;
    cin>>h>>k;
    vector <int> v;
    for(int i=0;i<n;i++)
    {
        v.push_back(a[i]);
    }
    v.erase(v.begin()+m-1);
    v.erase(v.begin()+h-1,v.begin()+k-1);
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;

}

