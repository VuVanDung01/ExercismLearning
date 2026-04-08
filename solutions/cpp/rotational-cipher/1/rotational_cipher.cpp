#include "rotational_cipher.h"
#include <string>
#include <cctype>
using namespace std;
namespace rotational_cipher {

// TODO: add your solution here
    string rotate(string n, int key) {
        string result;
        for(char c : n) {
            if(islower(c)) {
                c = (c - 'a' + key) % 26 + 'a';
                result += c;
            }
            else if(isupper(c)) {
                c = (c - 'A' + key) % 26 + 'A';
                result += c;
            }
            else {
                result += c;
            }
        }
        return result;
    }

}  // namespace rotational_cipher
