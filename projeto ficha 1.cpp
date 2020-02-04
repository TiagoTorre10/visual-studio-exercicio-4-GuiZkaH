#include <iostream>
using namespace std;

int main()
{
	// Variáveis
	int num1;
	int num2;
	int soma;

	// Processo
	cout << "Insira o primeiro numero: ";
	cin >> num1;
	cout << "Insira o segundo numero: ";
	cin >> num2;
	soma = num1 + num2;
	cout << "A soma do numero " << num1 << " com o numero " << num2 << " e o numero " << soma << ".";
}