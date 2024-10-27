#include <iostream>
#include <vector>
#include "filelib/filelib.h"

using namespace std;

int main() {
  File f1("/path/to/file.txt");

  f1.write("Hello, World!"); // writes to file "Hello, World!"
  vector<string> strings = f1.read(); // reads the file
  f1.clear(); // clears the file
  f1.add("Hello, World!"); // adds in the end of file "Hello, World!"

  return 0;
}
