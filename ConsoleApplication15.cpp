/*Читается строка с кодом из файла, потом создается новый файл,
куда помещается этот код, но в одну строку, путем применения \t и \n*/


/*#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream file("code.txt");
    string line;
    while (getline(file, line)) {
        cout << line << "\\n";
    }
}*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream in("code.txt");
    string line, result;
    while (getline(in, line)) {
        for (char elem : line) {
            if (elem == '\t') {
                result += "\\t";
            }
            else {
                result += elem;
            }
        }
        result += "\\n";
    }
    ofstream out("outputCode.txt");
    out << result;
}