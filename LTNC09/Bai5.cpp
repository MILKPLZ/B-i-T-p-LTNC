#include <iostream>
using namespace std;

class Person{
private:
    int age;
public:
    Person(int initialAge){
        if(initialAge < 0){
            cout << "Age is not valid, setting age to 0." << "\n";
            initialAge = 0;
            age = initialAge;
        }
        else{
            age = initialAge;
        }
    }

    void yearPasses(){ age++; }

    void amIOld(){
        // cout << age << endl;
        if(age < 13){
            cout << "You are young."  << "\n";
        }
        else if( age >= 13 && age < 18){
            cout << "You are a teenager."  << "\n";
        }
        else{
            cout << "You are old." << "\n";
        }
    }
};

int main() {

    int test;
    cin >> test;
    for(int i = 0; i < test; i++){
        int initialAge;
        cin >> initialAge;
        Person p(initialAge);
        p.amIOld();
        p.yearPasses();
        p.yearPasses();
        p.yearPasses();
        p.amIOld();
        cout << endl;
    }
    return 0;
}

