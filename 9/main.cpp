#include <iostream>

using namespace std;
//Sobrecargar el operador << para que funcione la función print de la clase DynamicArray
//Implementar la Clase USCurrency (vista en clase), sobrecargar los operadores: +, -, +=, -=. <<
//Crear un objeto DynamicArray de USCurrency's. Deberia funcionar todo sin problemas.
class USCurrency {
public:
    int dollars;
    int cents;
    USCurrency()
    {
        dollars=0;
        cents=0;
    }
    USCurrency(const int dollar,const int cents)
    {
        this->dollars=dollars;
        this->cents=cents;
    }
};
    USCurrency& operator +(const USCurrency &m, const USCurrency &o) {
        USCurrency tmp ;
        tmp.cents = m.cents + o.cents;
        tmp.dollars = m.dollars + o.dollars;

        if(tmp.cents >= 100) {
            tmp.dollars += 1;
            tmp.cents -= 100;
        }
        return tmp;
    }
    USCurrency& operator -(const USCurrency &m, const USCurrency &o) {
        USCurrency tmp ;
        tmp.cents = m.cents - o.cents;
        tmp.dollars = m.dollars - o.dollars;

        if(tmp.cents >= 100) {
            tmp.dollars = 1;
            tmp.cents += 100;
        }
        return tmp;
    }
    USCurrency& operator +=(const USCurrency &m, const USCurrency &o) {
        USCurrency tmp ;
        tmp.cents = m.cents + o.cents;
        tmp.dollars = m.dollars + o.dollars;

        if(tmp.cents >= 100) {
            tmp.dollars += 1;
            tmp.cents -= 100;
        }
        return tmp;
    }
ostream& operator<<(ostream &output, const USCurrency &o)
{
    output << "$" << o.dollars << "." << o.cents;
    return output;
}
int main() {
    USCurrency a = {2, 50};
    USCurrency b = {1, 75};
    USCurrency c = a + b;
    cout << c << endl;
    return 0;
}
