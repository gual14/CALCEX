#include <iostream>
#include <string.h>
using namespace std;
double oprand1, oprand2, result;
char opr,qmark, andequal;
bool compres;
double math_expr(){
    cin >> opr >> oprand1 >> oprand2 >> qmark;
    if (qmark == '?')
    {
        switch (opr)
    {
    case '+':
        result = oprand1 + oprand2;
        break;
    case '-':
        result = oprand1 - oprand2;
        break;
    case '*':
        result = oprand1 * oprand2;
        break;
    case '/':
        result = oprand1 / oprand2;
        break;
    default:
        break;
    }
    cout<<">>"<<result<<"\n";
    }
    else{
        cout<<">>"<<"wrong expression, try agin\n";
    }
    return result;
}
bool compare(){
    cin >> opr >> oprand1 >> oprand2 >> qmark;
    if (qmark == '?'){
        switch (opr)
    {
     case '>':
        if (oprand1 > oprand2){
            compres = true;
        }
        else{
            compres = false;
        }
        break;
    case '<':
        if (oprand1 < oprand2){
            compres = true;
        }
        else{
            compres = false;
        }
        break;
    case 'B':
        if (oprand1 >= oprand2){
            compres = true;
        }
        else{
            compres = false;
        }
        break;
    case 'S':
        if (oprand1 > oprand2){
            compres = true;
        }
        else{
            compres = false;
        }
        break;
    case 'E':
        if (oprand1 > oprand2){
            compres = true;
        }
        else{
            compres = false;
        }
        break;
    case 'D':
        if (oprand1 != oprand2){
            compres = true;
        }
        else{
            compres = false;
        }
        break;
    default:
        break;
    }
    cout<<">>"<<compres<<"\n";
    }
    else{
        cout<<">>"<<"wrong expression, try agin\n";
    }
    return compres;
}
bool logate(){
    cin>> opr >> oprand1 >> oprand2 >> qmark;
    if (qmark == '?'){
        switch (opr)
        {
        case 'A':
            compres = oprand1 && oprand2;
            break;
        case 'O':
            compres = oprand1 || oprand2;
        case 'N':
            compres = !oprand1;
        default:
            break;
        }
        cout<<">>"<<compres<<"\n";
    }
    else{
        cout<<">>"<<"wrong expression, try agin\n";
    }
    return compres;
}
bool logical_expr(){
    char choose;
    cin>>choose;
    switch (choose)
    {
    case 'C':
        cout<<"in compare mode\n";
        compare();
        break;
    case 'G':
        cout<<"in logical gates mode\n";
        logate();
    default:
        cout<<"enter C to compare or G to logical gates\n";
        break;
    }
    return compres;
}
int main(int argc, char const *argv[])
{
    cout<<"START\n";
    char command;
    while (command != 'e')
    {
        cout << "choose section:\n ";
        cin>>command;
        switch (command)
        {
        case 'm':
            cout<<"moved to math section\n";
            /*cout<<">>"<<*/math_expr()/*<<"\n"*/;
            break;
        case 'l':
            cout<<"moved to logical section\n";
           /* cout<<">>"<<*/logical_expr()/*<<"\n"*/;
        default:
            break;
        }
    }
    cout<<"GOODBAY!";
    getchar();
    return 0;
}
