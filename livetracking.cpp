#include <iostream>
#include <string>
#include <cctype>

// Platform-specific setup for real-time keypresses
#if defined(_WIN32) || defined(_WIN64)
    #include <conio.h> // Provides _getch() on Windows
    char getLiveChar() {
        return _getch();
    }
#else
    #include <termios.h>
    #include <unistd.h>
    // Emulates Windows _getch() for Linux/macOS
    char getLiveChar() {
        struct termios oldt, newt;
        char ch;
        tcgetattr(STDIN_FILENO, &oldt);
        newt = oldt;
        newt.c_lflag &= ~(ICANON | ECHO);
        tcsetattr(STDIN_FILENO, TCSANOW, &newt);
        ch = getchar();
        tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
        return ch;
    }
#endif

int main() {
    std::string input = "";
    const size_t MAX_LENGTH = 7;

    std::cout << "Enter Code (5 Digits + 2 Letters): ";

    while (input.length() < MAX_LENGTH) {
        char ch = getLiveChar();

        // Handle Backspace (ASCII 8 or 127)
        if (ch == 8 || ch == 127) {
            if (!input.empty()) {
                input.pop_back();
                // Move cursor back, erase the character visually, and move back again
                std::cout << "\b \b" << std::flush;
            }
            continue;
        }

        // Handle Enter key prematurely
        if (ch == '\r' || ch == '\n') {
            std::cout << "\n\n[Error] Input incomplete! Keep typing.\n";
            std::cout << "Current string: " << input << std::flush;
            continue;
        }

        // Validate the character based on its live position
        size_t currentPos = input.length();
        bool isValid = false;

        if (currentPos < 5) {
            // First 5 characters must be digits
            if (std::isdigit(ch)) {
                isValid = true;
            }
        } else {
            // Last 2 characters must be alphabetic letters
            if (std::isalpha(ch)) {
                isValid = true;
            }
        }

        // Action based on validation
        if (isValid) {
            input += ch;
            std::cout << ch << std::flush; // Print it to the screen
        } else {
            // Immediate feedback without waiting for Enter
            std::cout << "\n\n[Error] Invalid character '" << ch << "'! ";
            if (currentPos < 5) {
                std::cout << "Expected a NUMBER at position " << (currentPos + 1) << ".\n";
            } else {
                std::cout << "Expected an ALPHABET letter at position " << (currentPos + 1) << ".\n";
            }
            std::cout << "Current string: " << input << std::flush;
        }
    }

    std::cout << "\n\nSuccess! Fully validated input: " << input << std::endl;
    return 0;
}
