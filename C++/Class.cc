#include <iostream>
#include <sstream>
using namespace std;

class Student {
private:
    int age;
    std::string firstName;
    std::string lastName;
    int standard;

public:
    void set_age(int a) {
        age = a;
    }

    void set_standard(int s) {
        standard = s;
    }

    void set_firstName(const std::string& fName) {
        firstName = fName;
    }

    void set_lastName(const std::string& lName) {
        lastName = lName;
    }

    int get_age() const {
        return age;
    }

    const std::string& get_firstName() const {
        return firstName;
    }

    const std::string& get_lastName() const {
        return lastName;
    }

    int get_standard() const {
        return standard;
    }

    std::string to_string() const {
        std::stringstream ss;
        ss << age << "," << firstName << "," << lastName << "," << standard;
        return ss.str();
    }
};

int main() {
    int age, standard;
    string firstName, lastName;

    cin >> age;
    cin.ignore();
    getline(cin, firstName);
    getline(cin, lastName);
    cin >> standard;

    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_firstName(firstName);
    st.set_lastName(lastName);

    cout << st.get_age() << "\n";
    cout << st.get_lastName() << ", " << st.get_firstName() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();

    return 0;
}
