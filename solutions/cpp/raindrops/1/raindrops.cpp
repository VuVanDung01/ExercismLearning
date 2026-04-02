#include "raindrops.h"
#include "string"

using namespace std; 

namespace raindrops {

    // TODO: add your solution here
    string convert(int num) {
        string result = "";
        if (num % 3 == 0) {
            result = result + "Pling";
        }
        if (num % 5 == 0) {
            result = result + "Plang";
        }
        if (num % 7 == 0) {
            result = result + "Plong";
        }
        if (result == "") {
            result = to_string(num);
        }
        return result;
    }

}  // namespace raindrops
