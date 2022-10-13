// Základní instance třídy - zapsání do ní - vypsání informací z třídy

#include <iostream>
using namespace std;

class Student {
public:
    double id;
    string name;
    int age;
    int semester;

    void printInfo() {
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Semester: " << semester << endl;
    }
};

int main() {

    Student* Jakub = new Student();
    Jakub -> id = 0001;
    Jakub -> name = "Jakub Solař";
    Jakub -> age = 5;
    Jakub -> semester = 1;

    Student* Denisa = new Student();
    Denisa -> id = 0002;
    Denisa -> name = "Denisa Nedomová";
    Denisa -> age = 45;
    Denisa -> semester = 2;

    Jakub -> printInfo();
    cout << "===============" << endl;
    Denisa -> printInfo();

}
