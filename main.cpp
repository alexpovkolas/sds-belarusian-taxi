#include <iostream>
#include <vector>
#include <string>
#include <cstdio>
#include <fstream>


#define __PROFILE__

#ifdef __PROFILE__



#endif

using namespace std;

bool is_number(const string& s)
{
    bool nonZero = false;
    string::const_iterator it = s.begin();
    while (it != s.end()) {
        int digit = *it - '0';
        if (digit < 0 || digit > 9) {
            return false;
        }
        if (digit != 0) {
            nonZero = true;
        }
        ++it;
    }
    return nonZero;
}


// TAX, TBX, TEX are used, for other regions, only TAX, TBX
bool validate(string &number) {

    if (number.size() != 9) {
        return false;
    }

    int firstNumber = number[0] - '0';

    if (firstNumber < 1 || firstNumber > 7) {
        return false;
    }

    string letters = number.substr(1, 3);

    if ((firstNumber == 7 && (letters == "TAX" || letters == "TBX" || letters == "TEX")) ||
        (firstNumber != 7 && (letters == "TAX" || letters == "TBX"))
            ) {

    } else {
        return false;
    }

    if (number[4] != ' ') {
        return false;
    }

    string digits = number.substr(5, 8);
     if (!is_number(digits)) {
        return false;
    }


    return true;
}

int main() {

    ifstream in("taxi.in");
    ofstream out("taxi.out");


    int n = 0;
    in >> n;

    vector<string> numbers(n);

    for (int i = 0; i < n + 1; ++i) {
        if (i == 0) {
            string s;
            getline(in, s);
            continue;
        }
        getline(in, numbers[i - 1]);
    }

    int counter = 0;
    for (int i = 0; i < numbers.size(); ++i) {

        if (validate(numbers[i])) {
            counter++;
        }
    }

    out << counter;

#ifdef __PROFILE__

#endif

    out << endl;

    return 0;
}
