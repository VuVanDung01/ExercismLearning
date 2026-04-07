#include "reverse_string.h"
#include <string>
using namespace std;
namespace reverse_string {

    // TODO: add your solution here
    string reverse_string (string rev) {
        int first = 0;
        int last = rev.length() - 1;
        while (first < last) {
            int temp = rev[first];
            rev[first] = rev[last];
            rev[last] = temp;
            first++;
            last--;
        }
        return rev;
    }


}  // namespace reverse_string
