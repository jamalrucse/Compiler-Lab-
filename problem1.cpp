#include<bits/stdc++.h>
using namespace std;

bool charVar(string str);
bool intVar(string str);
bool binaryNum(string str);
bool intNum(string str);

int main(){
    freopen("input.txt", "r", stdin);
    string str;

    while (getline(cin, str))
    {

    if(charVar(str))
        cout<<"Character Variable"<<endl;
    else if(intVar(str))
        cout<<"Integer Variable"<<endl;

    else if(binaryNum(str))
        cout<<"Binary Number"<<endl;

   else if(intNum(str))
        cout<<"Integer Number"<<endl;


    else cout<<"Undefined"<<endl;
    }
    return 0;
 
}

bool charVar(string str)
{
    if(str.length() < 4) return false;

    if(!(str[0]=='c' && str[1]=='h' && str[2]=='_')) return false;

    if(!((str[3] >= 'a' && str[3] <= 'z') || (str[3] >= 'A' && str[3] <= 'Z') || (str[3] >= '0' && str[3] <= '9'))) return false;

    for(int i = 4; str[i] != '\0'; i++)
    {
        if(!((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= '0' && str[i] <= '9'))) return false;
    }

    return true;

}

bool intVar(string str)
{
    if(!((str[0]>='i' && str[0] <= 'n')||(str[0]>='I' && str[0] <= 'N')))
        return false;
    if(str[1]!='_')
        return false;
    int length = str.length();

    for(int i = 2; str[i] != '\0'; i++)
    {
        if(!((str[i]>='a' && str[i] <= 'z') || (str[i]>='A' && str[i] <= 'Z') || (str[i]>='0' && str[i] <= '9')))
            return false;
    }
    return true;
}
bool binaryNum(string str)
{
    if(str.length() < 2) return false;

    if(!(str[0] == '0')) return false;

    for(int i = 1; str[i] != '\0'; i++)
    {
        if(!(str[i] == '0' || str[i] == '1')) return false;
    }

    return true;

}

bool intNum(string str)
{


    if(!(str[0] >= '1' && str[0] <= '9')) return false;

    for(int i = 1; str[i] != '\0'; i++)
    {
        if(!(str[i] >= '0' && str[i] <= '9')) return false;
    }

    return true;
}
