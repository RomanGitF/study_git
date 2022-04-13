#include <iostream>
#include <string>

void hello() {
    std::cout << "Hello" << std::endl;
}

void helloS(const std::string &name) {
    std::cout << "Hello, " << name << "!" << std::endl;
}

void bye() {
    std::cout << "Bye-bye!" << std::endl;
}

void byeS(const std::string& name) {
    std::cout << "Bue-bye, " << name << "!" << std::endl;
}

int main()
{
    hello();
    helloS("Anna");
    bye();
    byeS("Anna");

}