#include <iostream>
#include <string>

using namespace std;

void print(char *);

int main() {
    cout << "Hello World!" << endl;

    char * mystr = (char *)"This is function test." ;
    print(mystr);
    print((char *)"Make a call");

    string s;
    cin >> s;
    cout << "You input: " << s << endl;

    int n1, n2;
    cout << "Input two number: " << endl;
    cin >> n1 >> n2 ;
    cout << "add result: " << n1 + n2 << endl;
    return 0;
}

void print(char * str) {
    cout << str << endl;
}

int add(int a, int b) {
    return a+b;
}
