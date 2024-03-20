#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
struct student{
    int age;
    string first_name;
    string second_name;
    int standard;
};

int main() {
    student s;
    cin>>s.age>>s.first_name>>s.second_name>>s.standard;
    cout<<s.age<<" "<<
    s.first_name<<" "<<
    s.second_name<<" "<<
    s.standard;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}

