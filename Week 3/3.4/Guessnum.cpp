#include <iostream>

int main(){
    std::cout << "Think of a number between 1 and 50" << std::endl;

    int low = 1 , high = 50, guess = 25;
    std::string clue;

    std::cout << "Is the number higher or lower than or is (H/L/Y): " << guess << std::endl;;
    std::cin >> clue;

    while (clue!= "Y"){
        if (clue == "H"){
            guess = guess + 1;
            std::cout << "Is the number higher or lower than (H/L/Y): " << guess << std::endl;;
            std::cin >> clue;
        }
        else if (clue == "L"){
            guess = guess - 1;
            std::cout << "Is the number higher or lower than (H/L/Y): " << guess << std::endl;;
            std::cin >> clue;
        }
    }

    std::cout << "Found the number, you guessed " << guess << std::endl;
}
