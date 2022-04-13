#include <iostream>
#include <string>

void hello() {
    std::cout << "Hello" << std::endl;
}

void helloS(const std::string &name) {
    std::cout << "Hello, " << name << "!" << std::endl;
}

void bye() {
    std::cout << "Bye - bye" << std::endl;
}

int main()
{
    hello();
    bye();

}