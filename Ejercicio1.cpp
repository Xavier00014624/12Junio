#include <iostream>
using namespace std;
constexpr int n = 6;
void instruccion(void)
{
    cout << "Bienvenido a la calculadora de notas" << "\n";
}
double *calculo_notafin(double notas[][n], double ponderaciones[], int m)
{

    double notafinal[m];
    for (int j = 0; j < m; j++)
    {
        notafinal[j] = 0;
        for (int i = 0; i < n; i++)
        {
            notafinal[j] = notafinal[j] + notas[j][i] * ponderaciones[i];
        }
    }
    return notafinal;
}
int main()
{
    instruccion();
    int m = 0;
    string nombres[m];
    double ponderaciones[n] = {0.15, 0.2, 0.1, 0.1, 0.2, 0.25};
    cout << "cuantos estudiantes son " << "\n";
    cin >> m;
    double notas[n][m];

    for (int i = 0; i < m; i++)
    {
        cout << "Nombres de los estudiantes " << i + 1 << ":";
        cin >> nombres[i];
        cout << nombres[i] << "P1";
        cin >> notas[i][0];
        cout << nombres[i] << "P2";
        cin >> notas[i][1];
        cout << nombres[i] << "C1";
        cin >> notas[i][2];
        cout << nombres[i] << "C2";
        cin >> notas[i][3];
        cout << nombres[i] << "Lab";
        cin >> notas[i][4];
        cout << nombres[i] << "Proyecto";
        cin >> notas[i][5];
    }
    double  *notafinal = calculo_notafin(notas, ponderaciones,m);
    for (int i = 0; i < n; i++)
    {
        cout << nombres[i] << "Su nota final es " << notafinal[i] << "\n";
    }

    return 0;
}