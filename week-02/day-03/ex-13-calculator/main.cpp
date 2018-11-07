#include <iostream>
#include <vector>
#include <sstream>
#include <string>


int calculator(const std::string& calc) {
    char operat = calc[0];
    char temp;
    std::vector<int> numbers;
    bool firstDone = false;
    int i = 2;
    if ((operat == '/' || operat == '*' || operat == '-' || operat == '+' || operat == '%') && calc.length() > 1) {
        do {
            temp = calc[i];
            if (temp >= 48 && temp <= 57 && !firstDone) {

            }
        } while (i <= calc.size() && temp >= 48 && temp <= 57 || temp == 32);


    }
}
    int main() {
        // Create a simple calculator application which reads the parameters from the prompt
        // and prints the result to the prompt.
        // It should support the following operations,
        // create a method named "calculate()":
        // +, -, *, /, % and it should support two operands.
        // The format of the expressions must be: {operation} {operand} {operand}.
        // Examples: "+ 3 3" (the result will be 6) or "* 4 4" (the result will be 16)


        // It should work like this:
        // Start the program
        // It prints: "Please type in the expression:"
        // Waits for the user input
        // Print the result to the prompt
        // Exit

        char c = '0';
       // std::cout << c << " is " << (int) c << std::endl;
        std::string szamok = "0123456789";
        //for (int i = 0; i < 10; i++) {
       //     std::cout << szamok[i] << " is " << (int) szamok[i] << std::endl;
       // }

        std::string read;
       // std::getline(std::cin, read);
        std::cout << read;
        std::vector<int> nums;
        int temp;

        std::string stringvalues = "125 320a 512a750 333";
        std::istringstream iss(stringvalues);
        for (int i = 0; i < 5; i++) {
            iss >> temp;
            //std::cout << temp << ' ' << (int) temp << ' ';
            nums.push_back(temp);
            std::cout << nums[i] << '\n';

        }
            return 0;

}