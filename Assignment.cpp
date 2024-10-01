// C++ Assignment:

// P1. Define a Person class like we did in the previous module. Only add name and age
#include <iostream>
#include <string>
using namespace std;

class Person {
    public:
        // Constructor that accepts both name and age
        Person(string name, int age) {
            this->name = name;
            this->age = age;
        }

        // Getter for the name
        string getName() {
            return name;
        }

        // Getter for the age (returns int instead of string)
        int getAge() {
            return age;
        }

        // Print information
        void print_info() {
            cout << "I am " << name << " and I am " << age << " years old." << endl;
        }

    public:
        string name;
        int age;
};

int main() {
    // Create a person object with name and age
    Person person1("Vignesh", 22);

    // Print info
    person1.print_info();

    return 0;
}
_________________________________________________________________________________________________________________________________________________________________
// P2. Create two instances of Person and call print_info() on the
#include <iostream>
#include <string>
using namespace std;

class Person {
    public:
        // Constructor that accepts both name and age
        Person(string name, int age) {
            this->name = name;
            this->age = age;
        }

        // Getter for the name
        string getName() {
            return name;
        }

        // Getter for the age (returns int instead of string)
        int getAge() {
            return age;
        }

        // Print information
        void print_info() {
            cout << "I am " << name << " and I am " << age << " years old." << endl;
        }

    public:
        string name;
        int age;
};

int main() {
    // Create a person object with name and age
    Person person1("Ramesh", 22);
    Person person2("Umesh",25);
    person1.print_info();
    person2.print_info();

    return 0;
}
_____________________________________________________________________________________________________________________________________________________________________

// P3. Make the attributes private and see if you can still access them from outside the class.
//
//
#include <iostream>
#include <string>
using namespace std;

class Person {
    private:
        // Constructor that accepts both name and age
        Person(string name, int age) {
            this->name = name;
            this->age = age;
        }

        // Getter for the name
        string getName() {
            return name;
        }

        // Getter for the age (returns int instead of string)
        int getAge() {
            return age;
        }

        // Print information
        void print_info() {
            cout << "I am " << name << " and I am " << age << " years old." << endl;
        }

    private:
        string name;
        int age;
};

int main() {
    // Create a person object with name and age
    Person person1("Vignesh", 22);

    // Print info
    person1.print_info();

    return 0;
}
________________________________________________________________________________________________________________________________________________________________
// P7. Add a class called Student that inherits from Person. Add a field called department. Add a constructor that takes a name, age and department. Add a method called print_info() that prints out the name, age and department of the student.



#include <iostream>
#include <string>
using namespace std;

class Person {
    public:
        // Constructor that accepts both name and age
        Person(string name, int age) {
            this->name = name;
            this->age = age;
        }

        // Getter for the name
        string getName() {
            return name;
        }

        // Getter for the age (returns int instead of string)
        int getAge() {
            return age;
        }

        // Print information
        virtual void print_info() {
            cout << "I am " << name << " and I am " << age << " years old." << endl;
        }

    public:
        string name;
        int age;
};

class Student:public Person{
        public:
                Student(string name,int age,string department ):Person(name,age){
                        this->department=department;
                }

                void print_info() override{
                        cout << "I am" <<getName() <<",I am" <<getAge() <<"years old and I study in the " <<department << "department." <<endl;
                }
        private:
                string department;
};


int main() {
    // Create a person object with name and age
    Person person1("Umesh", 25);
    person1.print_info();
    return 0;
}

___________________________________________________________________________________________________________________________________________________________________
// P8. Create an instance of Student and call print_info() on it.

#include <iostream>
#include <string>
using namespace std;

class Person {
    public:
        // Constructor that accepts both name and age
        Person(string name, int age) {
            this->name = name;
            this->age = age;
        }

        // Getter for the name
        string getName() {
            return name;
        }

        // Getter for the age (returns int instead of string)
        int getAge() {
            return age;
        }

        // Print information
        virtual void print_info() {
            cout << "I am " << name << " and I am " << age << " years old." << endl;
        }

    public:
        string name;
        int age;
};

class Student:public Person{
        public:
                Student(string name,int age,string department ):Person(name,age){
                        this->department=department;
                }

                void print_info() override{
                        cout << "I am" <<getName() <<",I am" <<getAge() <<"years old and I study in the " <<department << "department." <<endl;
                }
        private:
                string department;
};


int main() {
    // Create a person object with name and age
    Person person1("Umesh", 25);
    Student student1("Manish",22,"ECE");
    person1.print_info();
    student1.print_info();

    return 0;
}
____________________________________________________________________________________________________________________________________________________________________
// P9. Create a class called Teacher that inherits fr`om Person. Add a field called salary. Add a constructor that takes a name, age and salary. Add a method called print_info() that prints out the name, age and salary of the teacher


#include <iostream>
#include <string>
using namespace std;

class Person {
    public:
        // Constructor that accepts both name and age
        Person(string name, int age) {
            this->name = name;
            this->age = age;
        }

        // Getter for the name
        string getName() {
            return name;
        }

        // Getter for the age (returns int instead of string)
        int getAge() {
            return age;
        }

        // Print information
        virtual void print_info() {
            cout << "I am " << name << " and I am " << age << " years old." << endl;
        }

    public:
        string name;
        int age;
};

class Student:public Person{
        public:
                Student(string name,int age,string department ):Person(name,age){
                        this->department=department;
                }

                void print_info() override{
                        cout << " I am " <<getName() <<",I am " <<getAge() <<" years old and I study in the " <<department << "department." <<endl;
                }`
        private:
                string department;
};
class Teacher:public Person{
        public:
                Teacher(string name,int age,int salary):Person(name,age){
                        this->salary = salary;
                }
                void print_info() override{
                        cout<< "I am " << name << " and i am" << age << " years old and my salary is " << salary << "."<<endl;
                }
        private:
                int salary;
};

int main() {
    // Create a person object with name and age`
    Person person1("Umesh", 25);
    Student student1("Umesh",21,"ECE");
    Teacher teacher1("Umesh",22,100000);
    person1.print_info();
    student1.print_info();
    return 0;
}

_________________________________________________________________________________________________________________________________________________________________
// P10. Create an instance of Teacher and call print_info() on it.



#include <iostream>
#include <string>
using namespace std;

class Person {
    public:
        // Constructor that accepts both name and age
        Person(string name, int age) {
            this->name = name;
            this->age = age;
        }

        // Getter for the name
        string getName() {
            return name;
        }

        // Getter for the age (returns int instead of string)
        int getAge() {
            return age;
        }

        // Print information
        virtual void print_info() {
            cout << "I am " << name << " and I am " << age << " years old." << endl;
        }

    public:
        string name;
        int age;
};

class Student:public Person{
        public:
                Student(string name,int age,string department ):Person(name,age){
                        this->department=department;
                }

                void print_info() override{
                        cout << " I am " <<getName() <<",I am " <<getAge() <<" years old and I study in the " <<department << "department." <<endl;
                }`
        private:
                string department;
};
class Teacher:public Person{
        public:
                Teacher(string name,int age,int salary):Person(name,age){
                        this->salary = salary;
                }
                void print_info() override{
                        cout<< "I am " << name << " and i am" << age << " years old and my salary is " << salary << "."<<endl;
                }
        private:
                int salary;
};

 int main() {
    // Create a person object with name and age`
    Person person1("Umesh", 25);
    Student student1("Shubham",21,"ECE");
    Teacher teacher1("Sanketh",22,100000);
    person1.print_info();
    student1.print_info();
    teacher1.print_info();

    return 0;
}