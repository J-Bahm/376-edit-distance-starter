#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>

int c_i = 2;
int c_d = 2;
int c_s = 3;
int EMPTY_COST = 0;

// IMPORTANT: Make sure to compile with the -std=c++11 (or later) tag. 

int edit_distance(std::string s1, std::string s2);  // Algorithm function
void print_memo();                                  // Helper function for 
                                                    // debugging

std::vector<std::vector<int> > memo;

// Main function - driver code
int main(int argc, char** argv) {
    // Declare test cases (you may change this)
    std::string str1 = "ALGORITHM", 
                str2 = "ALTRUISTIC";

    // Read in test files
    if (argc > 1) {
        int len1 = std::stoi(argv[1]), len2 = len1;
        if (argc > 2) len2 = std::stoi(argv[2]);
        char cstr1[len1+1], cstr2[len2+1];
        std::ifstream("macbeth.txt").read(cstr1, len1);
        std::ifstream("hamilton.txt").read(cstr2, len2);
        cstr1[len1] = cstr2[len2] = '\0';
        str1 = std::string(cstr1);
        str2 = std::string(cstr2);
    }


    // Create empty memoization table
    memo = std::vector<std::vector<int> >(str1.length() + 1, 
        std::vector<int>(str2.length() + 1, EMPTY_COST));

    // Run function and print output
    std::cout << edit_distance(str1, str2) << std::endl;

    // Expected output for this example: 
    //    15
}

// Helper function, returns a string copy of the input parameter string,
// but with the last character removed. You may find this helpful :)
std::string rem_last(std::string &s) {
    return s.substr(0, s.length() - 1);
}

// Algorithm code. Edit TODOs here. 
int edit_distance(std::string s1, std::string s2) {
    int a = s1.length(),
        b = s2.length();
    if (a == 0) {
        return EMPTY_COST; // TODO: replace <EMPTY_COST> with something meaningful 
    }
    if (b == 0) {
        return EMPTY_COST; // TODO: replace <EMPTY_COST> with something meaningful
    }

    if (memo[a - 1][b - 1] == <EMPTY_COST>)
        memo[a - 1][b - 1] = edit_distance(rem_last(s1), rem_last(s2));

    // TODO: Fill in additional code here

    if (s1.back() == s2.back()) {
        // TODO: insert something meaningful
    }

    return std::min({
        // TODO: Replace <EMPTY_COST>s with something meaningful
        EMPTY_COST, EMPTY_COST
    });
}

/** FOR DEBUGGING PURPOSES **/
void print_memo() {
    for (int i = 0; i < memo.size(); ++i) {
        for (int j = 0; j < memo[1].size(); ++j) {
            std::cout << memo[i][j] << " ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}