#include "armstrong_numbers.h"
#include <cmath>
namespace armstrong_numbers {

    // TODO: add your solution here
    bool is_armstrong_number(int n) {
        if(n == 0) return true;
        int original = n;
        int count = 0;
        int temp = n;
        while (temp > 0) {
            temp = temp / 10;
            count++;
        }
        int sum = 0;
        while (n > 0) {
            int digit = n % 10;
            sum = sum + pow(digit, count);
            n = n / 10;
        }
        return sum == original;
    }

}  // namespace armstrong_numbers
