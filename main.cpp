#include <iostream>

using namespace std;

int main()
{

    /*
    int a;
    cin >> a;
    if(!cin){
        cout << "input failed";
    } else {
        cout << a << endl;
    }
    */

    int num1, num2, num3;
    char op;
    string Answers[] = {"m", "name"};
    int result;
    bool answered = false;

    cout << "WELCOME TO THE BETTER FRIENDLY CALCULATOR\n";
    cout << "Press any key and 'ENTER' to continue.\n";
    cin >> Answers[0];

    while(!answered){

    cout << "Enter first number: " <<endl;
    cin >> num1;

    cout << "Enter operator: " <<endl;
    cin >> op;

    cout << "Enter second number: " <<endl;
    cin >> num2;

        if(op == '+')
    {
        result = num1 + num2;
        answered = true;
        cout << "The answer is " << result << "." <<endl;
    }
        else if(op == '-')
    {
        result = num1 - num2;
        answered = true;
        cout << "The answer is " << result << "." <<endl;
    }
        else if(op == '*')
    {
        result = num1 * num2;
        answered = true;
        cout << "The answer is " << result << "." <<endl;
    }
        else if(op == '/')
    {
        result = num1 / num2;
        answered = true;
        cout << "The answer is " << result << "." <<endl;
    }
        else if(!cin)
    {
        cout << "Input failed. Try again."<<endl;
        answered = false;
    }
        else
    {
        answered = false;
        cout << "Can't answer that."<<endl;
        cout << "Please try again." <<endl;
    }
    }


    /* August 19, 2020
    I dont know how to get out of the loop
    i have to make a loop from the idea that unless the result is a valid one, it will keep on looping
    so that means if the result is invalid, or it's an invalid operator, it will keep looping.
    but if it's answered correctly, it will stop the loop and move on to the next friendly conversation

    i finally did it. august 20, 2020
    figured out how to loop it well if the user did not enter the correct operator, and not loop it
    if it's answered. HA!
    BUT I FOUND MY FIRST BUG.
    so the program keeps on looping when a letter is entered into the system.
    */

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
