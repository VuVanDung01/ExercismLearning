#include "bob.h"
#include <cctype>
#include <string>
using namespace std;
namespace bob {

    // TODO: add your solution here
    string hey(string answer) {
        size_t start = answer.find_first_not_of(" \t\n\r\f\v");
        if(start == string::npos) return "Fine. Be that way!";
        size_t end = answer.find_last_not_of(" \t\n\r\f\v");
        answer = answer.substr(start, end - start + 1);
        if(answer.empty()) {
            return "Fine. Be that way!";
        }
        bool has_letter = false;
        bool has_lowercase = false;
        bool is_question = (answer.back() == '?');
        for(char c : answer) {
            if(isalpha(c)) {
                has_letter = true;
                if(islower(c)) {
                    has_lowercase = true;
                }

            }
        }
        bool is_yelling = (has_letter == true && has_lowercase == false);

        if(is_yelling && is_question) {
            return "Calm down, I know what I'm doing!";
        }
        else if(is_question) {
            return "Sure.";
        }
        else if(is_yelling) {
            return "Whoa, chill out!";
        }
        else {
            return "Whatever.";
        }

    }

}  // namespace bob
