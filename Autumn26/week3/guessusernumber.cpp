#include <iostream>
#include <string>

int main() {
    int low, high;
    std::cout << "Enter the lower bound: ";
    std::cin >> low;
    std::cout << "Enter the higher bound: ";
    std::cin >> high;

    if (!std::cin || low > high) {
        std::cout << "Invalid range." << std::endl;
        return 1;
    }

    std::cout << "Think of an integer between " << low << " and " << high << "." << std::endl;
    std::cout << "After each guess, enter 'l' if my guess is too low, "
              << "'h' if it is too high, or 'c' if it is correct." << std::endl;

    int attempts = 0;
    while (low <= high) {
        int guess = low + (high - low) / 2;  // avoids overflow of (low + high)
        attempts++;
        std::cout << "Attempt " << attempts << ": is it " << guess << "? (l/h/c) ";

        std::string answer;
        if (!(std::cin >> answer)) {
            std::cout << "Input ended unexpectedly." << std::endl;
            return 1;
        }
        if (answer == "c" || answer == "correct") {
            std::cout << "Got it! The number is " << guess << " (" << attempts
                      << " attempts)." << std::endl;
            return 0;
        }
        else if (answer == "l" || answer == "low") {
            low = guess + 1;   // actual number is greater than the guess
        }
        else if (answer == "h" || answer == "high") {
            high = guess - 1;  // actual number is less than the guess
        }
        else {
            std::cout << "Please answer with l (low), h (high) or c (correct)." << std::endl;
            attempts--;
        }
    }

    std::cout << "Your answers were inconsistent: no number is left in the range." << std::endl;
    return 0;
}