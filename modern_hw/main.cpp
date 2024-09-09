#include "PPPheaders.h"
// import std; // does not work

int main() {
    std::cout << "Hello, world!" << std::endl;

    int a{1000};
    char b{'a'};

    a = narrow<int>(b);

    cout << a << endl;

    return 0;
}
