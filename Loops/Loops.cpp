#include <iostream>

// Loop entre 1 y 5
int main()
{
    int externo { 1 };
    while (externo <= 5)
    {
        // loop entre 1 y externo
        int interno{ 1 };
        while (interno <= externo)
        {
            std::cout << interno << ' ';
            ++interno;
        }

        // imprime una nueva línea al final de cada fila
        std::cout << '\n';
        ++externo;
    }

    return 0;
}


























/*#include <iostream>

// Iterarse a través de cada número entre 1 y 50
int main()
{
    int contador{ 1 };
    while (contador <= 50)
    {
        // print the number (los números menores de 10 les añadimos un 0 para formateado)
        if (contador < 10)
        {
            std::cout << '0';
        }

        std::cout << contador << ' ';

        // si la variable loop es divisible por 10, imprimimos una nueva línea
        if (contador % 10 == 0)
        {
            std::cout << '\n';
        }

        // incrementa el loop contador
        ++contador;
    }

    return 0;
}*/































/*#include <iostream>

int main()
{


    while (true) // loop infinito 
    {
        std::cout << "seguir con el loop (s/n)? ";
        char c{};
        std::cin >> c;

        if (c == 'n')
            return 0;
    }

    return 0;
}*/













/*int main()
{
    while (true)
    {
        // este loop se ejecutará siempre
    }

}*/





















/*#include <iostream>

int main()
{
    int contador{ 1 };
    while (contador <= 10) // esta condición nunca será false
    {
        std::cout << contador << ' '; // así que esta línea se ejecutará ∞ 
    }

    return 0; // esta línea nunca se ejecutará
}*/





























/*#include <iostream>

int main()
{
    int contador{ 15 };
    while (contador <= 10)
    {
        std::cout << contador << ' ';
        ++contador;
    }

    std::cout << "completado";

    return 0;
}*/














/*#include <iostream>

int main()
{
    int contador{ 1 };
    while (contador <= 10)
    {
        std::cout << contador << ' ';
        ++contador;
    }

    std::cout << "completado";

    return 0;
}*/



/*int condición;
int declaración;

int main() {



   if (condición)
        declaración;

}*/





/*#include <iostream>

int main()
{
    std::cout << "1 2 3 4 5 6 7 8 9 10";
    std::cout << " completado";
    return 0;
}*/












