#include <iostream>

using namespace std;

int main()
{
    int num1, num2, num3;
    string Answers[] = {"m", "name"};

    cout << "WELCOME TO THE FRIENDLY CALCULATOR\n";
    cout << "Press 'm' and 'ENTER' to continue.\n";
    cin >> Answers[0];

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    cout << "If adding them, the answer is " << num1 + num2 << "." << endl;
    cout << "If subtracting them, the answer is " << num1 - num2 << " or " << num2 - num1 << "." << endl;
    cout << "If multiplying them, the answer is " << num1 * num2 << "." << endl;
    cout << "If dividing them, the answer is " << num1 / num2 << "." << endl;
    cout << "The remainder of " << num1 << " and " << num2 << " is " << num1 % num2 << "." << endl;;

    cout << "What's your name?\n";
    cin >> Answers[1];

    cout << "Nice to meet you, " << Answers[1] << "!" << endl;
    cout << "My name is CALCULATOR.\n";

    cout << "How old are you?\n";
    cin >> num3;

    cout << "I see. You are " << num3 << " years old.\n";
    cout << "You have lived approximately " << num3 * 365 << " days.\n";

    cout << "Just so you know. I am " << num1 * num2 << " years old." << endl;

    cout << "THANK YOU FOR USING ME." << endl;

    return 0;
}
