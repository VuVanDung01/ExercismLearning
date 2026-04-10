#include "luhn.h"
#include <cctype>
#include <string>
using namespace std;
namespace luhn {

    // TODO: add your solution here
    bool valid (string num) {
        int sum = 0;
        int count = 0;
        bool double_digit = false;
        for(int i = num.length() - 1; i >= 0; --i) {
            char c = num[i];
            if(c == ' ') continue;
            if(!isdigit(c)) return false;
            int digit = c - '0';
            count++;

            if(double_digit) {
                digit *= 2;
                if(digit > 9) {
                    digit -= 9;
                }
            }
            sum += digit;
            double_digit = !double_digit;

        }
        if(count <= 1) return false;
        return sum % 10 == 0;
    }
}  // namespace luhn
