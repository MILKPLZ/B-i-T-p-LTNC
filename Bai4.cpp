#include <iostream>
using namespace std;
int main(){
    int i;
    cin>>i;
    string num[]={"one","two","three","four","five","six","seven","eight","nine"};
    if(1<=i && i<=9){
        cout<<num[i-1]<<endl;
    }else{
        cout<<"Greater than 9";
    }
 }
