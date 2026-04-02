#include <string>
using namespace std;
namespace log_line {
string message(string line) {
    // return the message
    int pos = line.find(']');
    return line.substr(pos + 3);
}

string log_level(string line) {
    // return the log level
    int pos = line.find(']');
    return line.substr(1, pos - 1);
}

string reformat(string line) {
    // return the reformatted message
    int pos = line.find(']');
    string level = line.substr(1, pos - 1);
    string msg = line.substr(pos + 3);
    return msg + " (" + level + ")";
}
}  // namespace log_line
