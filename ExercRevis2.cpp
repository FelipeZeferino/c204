#include <iostream>
using namespace std;

struct Inseto
{
	string name;
	float size;
};

void ordenacao(Inseto insetos[], int num)
{
	for (int i = 0; i < num - 1; i++)
	{
		for (int j = 0; j < num - i - 1; j++)
		{
			if (insetos[j].size > insetos[j + 1].size)
			{
				Inseto temp = insetos[j];
				insetos[j] = insetos[j + 1];
				insetos[j + 1] = temp;
			}
		}
	}
};

void printArray(Inseto insetos[], int quant)
{
	for (int i = 0; i < quant; i++)
	{
		cout << insetos[i].name << " " << insetos[i].size << endl;
	}
};


int main()
{
	int quant;

	cout << "Entre com a quantidade de insetos a serem registrados:" << endl;
	cin >> quant;
	Inseto insetos[quant];

	for (int i = 0; i < quant; i++)	
	{
		cout << "Entre com o nome cientifico do inseto:" << endl;
		cin >> insetos[i].name;
		cout << "Entre com o tamanho em centimetros do inseto:" << endl;
		cin >> insetos[i].size;
	}

	ordenacao(insetos, quant);
	for (int i = 0; i < quant; i++)
	{
		cout << insetos[i].name << endl;
	}

	return 0;
}