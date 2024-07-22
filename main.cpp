#include <iostream>
#include <map>
#include <string>

bool isAnagram(const std::string &str1, const std::string &str2) {
    std::map<char, int> charCount1;
    std::map<char, int> charCount2;
    for (const auto& c : str1) {
        charCount1[(char)tolower(c)]++;
    }
    for (const auto& c : str2) {
        charCount2[(char)tolower(c)]++;
    }
    for (const auto& pair : charCount1) {
        if (charCount2[pair.first] != pair.second) {
            return false;
        }
    }
    return true;
}

int main() {
    if (isAnagram("listen", "silent")) {
        std::cout << "The strings are anagrams." << std::endl;
    } else {
        std::cout << "The strings are not anagrams." << std::endl;
    }
    return 0;
}
