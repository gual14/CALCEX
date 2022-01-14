#include <iostream>
#include <sstream>
#include <cmath>
#include <fstream>
#include <map>
using namespace std;
string o, vname;
int l = 1;
int n1, n2, ans;
string s1;
char qmark;
enum raop {
	START, ADD, SUB, MUL, DIV, PWR, MOD,/*MODULE*/ SQRT, FLR, /*FLOOR*/AND, OR, NOT, NAND, NOR, XOR, BIG, SML, EQL, BOE, /*BIG OR EQUEAL*/SOE, /*SMALL OR EQUEAL*/DIF, STR, PSH, MOV, CLR, END
};

raop opr;
void getid(){
    if(o == "START") {opr = START;}
    else if (o =="ADD"){opr = ADD;}
    else if (o=="SUB"){opr = SUB;}
    else if (o=="MUL"){opr = MUL;}
    else if (o=="DIV"){opr = DIV;}
    else if (o=="PWR"){opr = PWR;}
    else if (o=="MOD"){opr = MOD;}
    else if (o=="SQRT"){opr = SQRT;}
    else if (o=="FLR"){opr = FLR;}
    else if (o=="AND"){opr=AND;}
    else if (o=="OR"){opr=OR;}
    else if (o=="NOT"){opr=NOT;}
    else if (o=="NAND"){opr=NAND;}
    else if (o=="NOR"){opr=NOR;}
    else if (o=="XOR"){opr=XOR;}
    else if (o=="BIG"){opr=BIG;}
    else if (o=="SML"){opr=SML;}
    else if (o=="EQL"){opr=EQL;}
    else if (o=="BOE"){opr=BOE;}
    else if (o=="SOE"){opr=SOE;}
    else if (o=="DIF"){opr=DIF;}
    else if (o=="STR"){opr=STR;}
    else if (o=="PSH"){opr=PSH;}
    else if (o=="MOV"){opr=MOV;}
    else if (o=="CLR"){opr=CLR;}
    else if (o=="END"){opr=END;}
}
int main() {
    map <string, int> svars;
	cout << "HELLO CALCEX! <alpha 0.3.01 on Cpp>"<<endl;
    while (opr != END)
    {
        cin>>o>>s1>>n2>>qmark;
        stringstream musthelp(s1);
        musthelp >> n1;
        getid();
        if (qmark == '?')
        {
            switch(opr){
                case ADD:
                    ans = n1+n2;
                    break;
                case SUB:
                    ans = n1 - n2;
                    break;
                case MUL:
                    ans = n1 * n2;
                    break;
                case DIV:
                    ans = n1 / n2;
                    break;
                case PWR:
                    ans = pow(n1,n2);
                    break;
                case MOD:
                    ans = n1 % n2;
                    break;
                case SQRT:
                    ans = sqrt(n1);
                    break;
                case FLR:
                    ans = floor(n1);
                    break;
                case AND:
                    ans = n1 && n2;
                    break;
                case OR:
                    ans = n1 || n2;
                    break;
                case  NOT:
                    ans = !n1;
                    break;
                case NAND:
                    ans = !(n1 && n2);
                    break;
                case NOR:
                    ans = !(n1 || n2);
                    break;
                case XOR:
                    ans = n1 != n2;
                    break;
                case BIG:
                    ans = n1 > n2;
                    break;
                case SML:
                    ans = n1 < n2;
                    break;
                case EQL:
                    ans = n1 == n2;
                    break;
                case BOE:
                    ans = n1 >= n2;
                    break;
                case SOE:
                    ans = n1 <= n2;
                    break;
                case DIF:
                    ans = n1 != n2;
                    break;
                case STR:
                    svars.insert({s1, n2});
                    ans = true;
                case PSH:
                    auto it = svars.find(s1);
                    if (it == svars.end())
                    {
                        ans = false;
                    }
                    else{
                        ans = it->second;
                    }
                    
            }
            cout<<"("<<l<<")>"<<ans<<endl;
            l++;
        }
        else{cout<<"missing '?' at end of expression";}
        
    }
    cout<<"GOODBYE CALCEX! <alpha 0.3.01 on CPP>";
    return 0;
}
