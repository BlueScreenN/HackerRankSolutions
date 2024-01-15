#include <iostream>
#include <string>

class Student {
    public:
    int age;
    std::string firstName;
    std::string lastName;
    int standard;

};

int main() {

    Student st;
    std::cin >> st.age >> st.firstName >> st.lastName >> st.standard;
    std::cout << st.age << " " << st.firstName << " " << st.lastName << " " << st.standard;
    return 0;
}