#include "trinary.h"
#include <string>
using namespace std;
namespace trinary {

// TODO: add your solution here
    int to_decimal (string num) {
        int result = 0;
        for(size_t i = 0; i < num.length(); ++i) {
            if (num[i] != '1' && num[i] != '2' && num[i] != '0') {
                return 0;
            } 
            else {
                result = result * 3 + (num[i] - '0');
            }
            
        }
        return result;
    }

}  // namespace trinary
