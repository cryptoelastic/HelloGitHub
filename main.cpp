#include <iostream>

int main(int argc, const char *argv[])
{
    std::cout << "Hello,";
    if (argc <= 1) {
        std::cout << " anonymous hipster!";
    } else {
        for (auto i = 1; i < argc; i++)
            std::cout << " " << argv[i];
    }

    std::cout << "!" << std::endl;
}
