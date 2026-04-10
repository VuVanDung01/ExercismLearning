#include "hexadecimal.h"
#include <string>
#include <cctype>
using namespace std;
namespace hexadecimal {

// TODO: add your solution here
    int convert (string hex) {
        int result = 0;
        for(size_t i = 0; i < hex.length(); ++i) {
            int c = hex[i];
            c = tolower(c);
            if(isdigit(c)) {
                result = result * 16 + (c - '0');
            }
            else if(c >= 'a' && c <= 'f') {
                result = result * 16 + (c - 'a' + 10);
            }
            else {
                return 0;
            }
        }
        return result;
    }

}  // namespace hexadecimal
