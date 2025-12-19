#include <iostream>
#include <cctype>
using namespace std;

int main() {
    string expr;
    cout << "Enter expression: ";
    cin >> expr;

    for (int i = 0; i < expr.length(); i++) {
        if (isdigit(expr[i])) {
            int num = 0;
            while (i < expr.length() && isdigit(expr[i])) {
                num = num * 10 + (expr[i] - '0');
                i++;
            }
            i--; // step back
            cout << "INTEGER(" << num << ")\n";
        }
        else if (expr[i] == '+')
            cout << "PLUS\n";
        else if (expr[i] == '*')
            cout << "MULTIPLY\n";
        else if (expr[i] == '/')
            cout << "DIVIDE\n";
        else
            cout << "UNKNOWN TOKEN\n";
    }
    return 0;
}
