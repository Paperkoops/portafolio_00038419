
#include <iostream>

using namespace std;
void contar(int direc, int num, int act);

int main()
{
    int x;
    cin >> x;
    contar(1, x, 1);

    return 0;
}

void contar(int direc, int num, int act)
{
    if(num == act)
    {
        cout << act << endl;
        contar(0, 1, act);
    }
    else if(direc == 1)
    {
        cout << act << endl;
        contar(direc, num, act+1);
        cout << "oh no" << endl;
    }
    else if(direc == 0){
        cout << act << endl;
        
        if(act == 1)
        {
            //el ciclo termina
        }
        else
        {
            contar(direc, num, act-1);
        }
        //restas 1 al actual y volver a llamar
    }
}


