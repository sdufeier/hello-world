#include <iostream>
#include <string>

using namespace std;

void print(char *);
int add(int, int);
int sub(int, int);

int main() {
    cout << "Hello World!" << endl;

    char * mystr = (char *)"This is function test." ;
    print(mystr);

    int n1, n2;
    cout << "Input two number: " << endl;
    cin >> n1 >> n2 ;
    cout << "add result: " << add(n1, n2) << endl;
    cout << "sub result: " << sub(n1, n2) << endl;

    string s;
    print((char *)"Make a call to whom: ");
    cin >> s;
    cout << "You input: " << s << endl;

    int array[] = {1,2,3,4,5,6};
    for(int i=0; i<6; i++){
        cout << "array[" << i << "]=" << array[i] << endl;
    }

    return 0;
}

void print(char * str) {
    cout << str << endl;
}

int add(int a, int b) {
    return a+b;
}

int sub(int a, int b) {
    return a-b;
}

int dev(int a, int b) {
    return a/b;
}
