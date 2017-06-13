#include <iostream>
#include <fstream>                                              // fpr file streams
class Person
{
protected:
    char name[80];                                              // person name
    short age;                                                  // person age
public:
    void showData()                                             // display person data
    {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Age: " << age << std::endl;
    }
};
int main() {
    Person person;

    std::ifstream inFile("Person.dat",std::ios::binary);        // create steram
    inFile.read(reinterpret_cast<char*>(&person), sizeof(person));

    person.showData();
    return 0;
}