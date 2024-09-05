#include <format>
#include <iostream>
#include <random>

using namespace std;

int main() {
    // have to change every time programm runs
    unsigned int seed{12};

    default_random_engine engine{seed};
    uniform_int_distribution randomDie{1, 6};

    int frequency1{0};
    int frequency2{0};
    int frequency3{0};
    int frequency4{0};
    int frequency5{0};
    int frequency6{0};

    for (int roll{1}; roll <= 60'000'000; ++roll) {
        switch (const int face{randomDie(engine)}) {
        case 1:
            frequency1++;
            break;
        case 2:
            frequency2++;
            break;
        case 3:
            frequency3++;
            break;
        case 4:
            frequency4++;
            break;
        case 5:
            frequency5++;
            break;
        case 6:
            frequency6++;
            break;
        default:
            cout << "Program should never get here!" << endl;
            break;
        }
    }

    cout << format("{:>4}{:>13}\n", "Face", "Frequency");
    cout << format("{:>4d}{:>13d}\n", 1, frequency1)
         << format("{:>4d}{:>13d}\n", 2, frequency2)
         << format("{:>4d}{:>13d}\n", 3, frequency3)
         << format("{:>4d}{:>13d}\n", 4, frequency4)
         << format("{:>4d}{:>13d}\n", 5, frequency5)
         << format("{:>4d}{:>13d}\n", 6, frequency6);
}
