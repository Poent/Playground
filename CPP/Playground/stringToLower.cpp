#include <iostream>
#include <string>
#include <algorithm>
int main() {
    std::string data = "This is a sample string.";
    // convert string to upper case
    std::for_each(data.begin(), data.end(), [](char & c) {
        c = ::toupper(c);
    });
    std::cout << "In Upper Case : " << data << std::endl;
    // convert string to back to lower case
    std::for_each(data.begin(), data.end(), [](char & c) {
        c = ::tolower(c);
    });
    std::cout << "In Lower Case : " << data << std::endl;
}

