#include <string>

using namespace std;

string operator+(string& str, int mennyivel) {
    string ujszoveg = str;
    for (int i = 0;i < ujszoveg.size(); i++){
        ujszoveg[i] += mennyivel;
    }

    return ujszoveg;
}
/*
include <string>

using namespace std;

string operator+(const string& str, int ertek) {
    string str2(str);
    for (int i = 0; i < str2.size(); i++) {
        str2[i] += ertek;
    }

    return str2;
}
 */
