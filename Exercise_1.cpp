// EX 1-0
#include <iostream>
#include <string>

int main()
{
    std::cout << "Please enter your fisrt name: ";
    std::string name;
    std::cin >> name;

    const std::string greeting = "Hello, " + name + "!";

    const std::string spaces(greeting.size(),' ');
    const std::string second = "* " + spaces + " *";
    const std::string first(second.size(), '*'); // string variable definition only accepts character literal not string literal.

    std::cout << first << std::endl;
    std::cout << second << std::endl;
    std::cout << "* " + greeting + " *" << std::endl;
    std::cout << second << std::endl;
    std::cout << first << std::endl;

    return 0;
}










// EX 1-1
//Valid. "+" concatenate is left-associative and cannot concatenate a string literal and a string literal.










// EX 1-2
// Invalid as the first "+" concatenate operator attempts to concatenate a string literal with a string litereal, which is invlaid.










// EX 1-3
// Valid, as each const definition is in different units.










// EX 1-4
#include <iostream>
            #include <string>
int main() {
                { const std::string s = "a string";
                  std::cout << s << std::endl;
                { const std::string s = "another string";
                  std::cout << s << std::endl; }}
return 0; }










// EX 1-5
// Invalid as x is passed to std::cout outside of the unit that define x.










// EX 1-6
#include <iostream>
            #include <string>
int main() {
                std::cout << "What is your name? ";
                std::string name;
                std::cin >> name;
                std::cout << "Hello, " << name
                          << std::endl << "And what is yours? ";
                std::cin >> name;
                std::cout << "Hello, " << name
                          << "; nice to meet you too!" << std::endl;
return 0; }