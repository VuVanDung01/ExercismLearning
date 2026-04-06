#include "darts.h"

namespace darts {

    // TODO: add your solution here
    int score (double x, double y) {
        double d = x * x + y * y;
        if(d <= 1) {
            return 10;
        }
        else if (d <= 25) {
            return 5;
        }
        else if(d <= 100) {
            return 1;
        }
        else {
            return 0;
        }
    }

}  // namespace darts
