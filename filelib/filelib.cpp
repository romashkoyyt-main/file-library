#include "filelib.h"

void File::write(string text) {
    ofstream file(path, ios_base::out);

    if (file.is_open()) {
        file << text;
        file.close();
    } else {
        throw runtime_error("Unable to open file \"" + path + "\"\n");
    }
}

vector<string> File::read() {
    vector<string> strings;
    ifstream file(path);

    if (file.is_open()) {
        string text;

        while(getline(file, text)) {
            strings.push_back(text);
        }

        file.close();
        return strings;

    } else {
        throw runtime_error("Unable to read file \"" + path + "\"\n");
    }
};

string File::convert_vector(vector<string> vec) {
    string final_string;

    for (string str : vec)
        final_string += str + "\n";

    final_string.pop_back();
    return final_string;
}

void File::add(string text) {
    File f(path);
    vector<string> vec = f.read();
    string str = File::convert_vector(vec);

    f.write(str + text);
}

void File::clear() {
    File f(path);
    f.write("");
}