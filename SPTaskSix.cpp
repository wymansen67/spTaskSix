#include <iostream>
using namespace std;

void ReverseWord(string word) {
    for (int i = word.length(); i > -1; i--) {
        cout << word[i];
    }
    cout << ' ';
}

int main() {
    char arr[1000000];

    cout << "Enter string: ";
    cin.getline(arr, 1000000);
    int i = 0;
    int counter = 1;
    int sepCounter = 0;

    string s = "";
    while (arr[i] != '\0') {
        if (arr[i] != ' ' && arr[i] != ',' && arr[i] != '.' && arr[i] != ';' && arr[i] != ':' && arr[i] != '!' && arr[i] != '?') {
            s += arr[i];
            sepCounter = 0;
        }
        else {
            sepCounter++;
            if (sepCounter == 1) {
                if (s.length() > 1) {
                    if (counter % 2 == 0) {
                        ReverseWord(s);
                        s.clear();
                        counter++;
                    }
                    else {
                        cout << s << ' ';
                        s.clear();
                        counter++;
                    }
                }
            }
        }
        i++;
    }
    cout << s << endl;
    return 0;
}

//void ReverseWord(char* word) {
//    for (int i = sizeof(word); i > -1; i--) {
//        cout << word[i];
//    }
//    cout << ' ';
//}
//
//int main() {
//    char arr[1000000];
//
//    cout << "Enter string: ";
//    cin.getline(arr, 1000000);
//    int i = 0;
//    int counter = 1;
//    int sepCounter = 0;
//
//    char* s;
//    char* e;
//    while (arr[i] != '\0') {
//        if (arr[i] != ' ' && arr[i] != ',' && arr[i] != '.' && arr[i] != ';' && arr[i] != ':' && arr[i] != '!' && arr[i] != '?') {
//            s += arr[i];
//            sepCounter = 0;
//        }
//        else {
//            sepCounter++;
//            if (sepCounter == 1) {
//                if (sizeof(s) > 1) {
//                    if (counter % 2 == 0) {
//                        ReverseWord(s);
//                        s = e;
//                        counter++;
//                    }
//                    else {
//                        cout << s << ' ';
//                        s = e;
//                        counter++;
//                    }
//                }
//            }
//        }
//        i++;
//    }
//    cout << s << endl;
//    return 0;
//}