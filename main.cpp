# include <iostream>
# include <cmath>
using std::cout;
using std::endl;
using std::cin;

// cambio ejemplo
// int, char(carácter), string, nool, float, double, cast

int main ()
{
    float x = 0.0;
    cout <<  "La variable x es: " << x << endl;
    //int z = int(x);
    int z = sqrt(4);

    cin >> z;

    if (z == 2 && x != 0)                     // AND -> &&    OR -> ||    NOT -> != 
    {
        cout << "z es 2" << endl;
    }
    else
    {
        cout << "z no es 2" << endl;
    }

    for (int i = 0; i < 10; i++)
    {
        cout << i << endl;
    }

    int i = 0;
    while (i<10)
    {
        cout << "Dentro del while" << i << endl;
        i = i + 2;
    }

    i = 0; /*<---No se pone el int, porque ya se había declarado antes*/
    do
    {
        cout << "Dentro del while" << i << endl;
        i = i + 3;
    } while (i < 10);
    




/*do while ejecuta las instrucciones y después revisa la condición
    for i in range (0,10,2) -> [start,stop,step]*/
}