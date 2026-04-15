#include "allergies.h"
#include <vector>
#include <unordered_set>

using namespace std;

namespace allergies {

allergy_test::allergy_test(int score) {
    this->score = score;
}

bool allergy_test::is_allergic_to(string name) {
    vector<pair<string, int>> allergens = {
        {"eggs", 1},
        {"peanuts", 2},
        {"shellfish", 4},
        {"strawberries", 8},
        {"tomatoes", 16},
        {"chocolate", 32},
        {"pollen", 64},
        {"cats", 128}
    };

    for (const auto& a : allergens) {
        if (a.first == name) {
            return (score & a.second) != 0;
        }
    }
    return false;
}

unordered_set<string> allergy_test::get_allergies() {
    unordered_set<string> result;

    vector<pair<string, int>> allergens = {
        {"eggs", 1},
        {"peanuts", 2},
        {"shellfish", 4},
        {"strawberries", 8},
        {"tomatoes", 16},
        {"chocolate", 32},
        {"pollen", 64},
        {"cats", 128}
    };

    for (const auto& a : allergens) {
        if ((score & a.second) != 0) {
            result.insert(a.first);
        }
    }

    return result;
}

} // namespace allergies