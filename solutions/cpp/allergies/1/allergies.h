#pragma once
#include <string>
#include <unordered_set>
namespace allergies {

// TODO: add your solution here
  
    class allergy_test {
    public:
    allergy_test(int score);
    bool is_allergic_to (std::string name);
    std::unordered_set<std::string> get_allergies();

    private:
    int score;
    };
    

}  // namespace allergies
