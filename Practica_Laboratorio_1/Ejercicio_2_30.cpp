/* 2.30 Crear programa que halle el Indice de Masa Corporal*/

#include <iostream>

using namespace std;

int main()
{
    int peso;
    int altura;

    cout << "IBM Calculator\n";
    cout << "Ingrese su peso (en libras): ";            //60kg == 132 linras
    cin >> peso;
    cout << "Ingrese su altura (en pulgadas): ";        //1.70m == 66 pulgadas
    cin >> altura;

    int bmi = (peso * 730) / (altura * altura);

    cout << "\nSu Indice de Masa Corporal es: " << bmi << endl;

    cout << "------------------------------------------" << endl;
    cout << "BMI Values\nBajo de peso:\t\tmenor a 18.5\nNormal: \t\tentre 18.5 y 24.9\nExceso de peso: \tentre 25 y 29.9\nObeso: \t\t\t30 o mas";
    cout << "\n------------------------------------------------------" << endl;

    if (bmi < 19)
    {
        cout << "\nSu Indice de Masa Corporal es: " << bmi << ", por lo tanto usted esta BAJO DE PESO" << endl;
    }
    else if ((19 <= bmi) && (bmi < 25))
    {
        cout << "\nSu Indice de Masa Corporal es: " << bmi << ", por lo tanto usted esta NORMAL" << endl;
    }
    else if ((25 <= bmi) && (bmi < 30))
    {
        cout << "\nSu Indice de Masa Corporal es: " << bmi << ", por lo tanto usted esta con EXCESO DE PESO" << endl;
    }
    else if (bmi >= 30)
    {
        cout << "\nSu Indice de Masa Corporal es: " << bmi << ", por lo tanto usted esta OBESO" << endl;
    }

    return 0;
}