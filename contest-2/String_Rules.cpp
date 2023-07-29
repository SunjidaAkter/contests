#include <iostream>
#include <string>
using namespace std;



int main() {
    string s;
    getline(cin, s);
    string sentence;
    int i=0;   
    while (i < s.length()) {
        if (isdigit(s[i])) {
            int number = s[i] - '0';
            string word;
            i++; 
            while (isalpha(s[i])) {
                word += s[i];
                i++;
            }
            for (int j = 0; j < number; j++) {
                sentence += word;
            }
        } else {
            sentence += s[i];
            i++;
        }
    }
    cout << sentence << endl;

    return 0;
}
