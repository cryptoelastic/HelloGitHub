#include <iostream>

int main(int argc, const char *argv[])
{
    if (argc < 1) {
        std::cout << "Hello, anonymous hipster!";
    } else {
        std::cout << "Hello, " << argv[0] << "!";
    }
}
