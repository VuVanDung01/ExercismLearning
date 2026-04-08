#include "atbash_cipher.h"
#include <cctype>
#include <string>
using namespace std;
namespace atbash_cipher {

    // TODO: add your solution here
    string encode(string n) {
        int count = 0;
        string result;

        for(char c : n) {
            if(isalpha(c)) {
                c = tolower(c);
                c = 'z' - (c - 'a');
                result += c;
                count++;
                if(count == 5) {
                    result += ' ';
                    count = 0;
                }
            }
            else if(isdigit(c)) {
                result += c;
                count++;
                if(count == 5) {
                    result += ' ';
                    count = 0;
                }
            }
            else {
                continue;
            }
        }
        if(!result.empty() && result.back() == ' ') {
            result.pop_back();
        }
        return result;
    }
    string decode(string n) {
        string result;
        for(char c : n) {
            if(isalpha(c)) {
                c = tolower(c);
                c = 'z' - (c - 'a');
                result += c;
            }
            else if(isdigit(c)) {
                result += c;
            }
            else {
                continue;
            }
        }
        if(result.back() == ' ') {
            result.pop_back();
        }
        return result;
    }
}  // namespace atbash_cipher
