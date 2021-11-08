#include <iostream>
#include "Heroes/Knight.h"
#include "Heroes/Archer.h"

using namespace std;
int main()
{
    Knight knight;
    Archer archer;
    while(knight.getHp()>0 && archer.getHp()>0)
    {
        cout << knight.getName() << " attacked " << archer.getName() << endl;
        knight.Attack(archer);
        cout << archer.getName() << " attacked " << knight.getName() << endl;
        archer.Attack(knight);
    }
    if(!knight.getHp() && !archer.getHp())
        cout << "both dead";
    else if(knight.getHp())
        cout << "Knight won!";
    else
        cout << "Archer won!";
    cout << endl;

    return 0;
}
