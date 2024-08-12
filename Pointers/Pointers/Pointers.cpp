// Pointers.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>

using namespace std;

int main()
{
    int value = 25;  

    int* p;

    p = &value;



    cout << p << endl; // aqui deve me retornar o endereço de memória de VALUE;

    cout << *p << endl; //aqui deve me retornar o valor de 25;











    return 0;
}

