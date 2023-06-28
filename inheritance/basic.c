#include <iostream>

class Person{
    public :
        Person() = default;
        Person(std::string firstName, std::string lastName) {
            this->firstName = firstName;
            this->lastName = lastName;
        }
        void        set_firstName(std::string firstName) {
            this->firstName = firstName;
        }
        void        set_lastName(std::string lastName) {
            this->lastName = lastName;
        }
        std::string get_firstName(void) {
            return this->firstName;
        }
        std::string get_lastName(void) {
            return this->lastName;
        }
    private :
        std::string firstName;
        std::string lastName;
};

class Doctor : public Person{
    public :
        Doctor() = default;
        Doctor(std::string specialty, int experience) {
            this->specialty = specialty;
            this->experience = experience;
        }
        std::string get_specialty(void) {
            return this->specialty;
        }
        int         get_experience(void) {
            return this->experience;
        }
    private :
        std::string specialty;
        int         experience;
};

int main()
{
    Doctor  ran("Cardiologie", 1);
    ran.set_firstName("rainie");
    std::cout << ran.get_firstName() << std::endl;
    std::cout << ran.get_specialty() << std::endl;
    return (0);
}