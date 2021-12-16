#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    double input1, input2, result;
    char oprator, qmark;
    cout<<"HELLO";
    while (oprator != 'e');
    {
        if (qmark == '?')
        {
            cin >> oprator >> input1 >> input2 >> qmark;
            switch (oprator)
            {
            case '+':
                result = input1 + input2;
                break;
            case '-':
                result = input1 - input2;
                break;
            case '*':
                result = input1 * input2;
                break;
            case '/':
                result = input1 / input2;
                break;
            case '>':
                result = input2 > input2;
                break;
            case '<':
                result = input2 < input2;
                break;
            case 'E':
                result = input1 == input2;
                break;
            case 'D':
                result = input1 != input2;
                break;
            case 'B':
                result = input1 >= input2;
                break;
            case 'S':
                result = input1 <= input2;
                break;
            case 'A':
                result = input1 && input2;
                break;
            case 'O':
                result = input1 || input2;
                break;
            case 'N':
                result = !input1;
                break;
            default:
                break;
            }
            cout<<">>>"<<result;
        }
        
    } 
    
    cout<<"GOODBAY";
    return 0;
}
