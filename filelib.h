#pragma once

#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

class File {
private:
    string path;

    string convert_vector(vector<string> vec);

public:
    File(string path) : path(path) {}

    void write(string text);
    void add(string text);
    void clear();
    vector<string> read();
};