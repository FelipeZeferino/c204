#include <iostream>

using namespace std;

struct Produto
{
	string name;
	int estoque;
};

void InStock(string item, Produto produtos[], int quant){
    for (int i = 0; i < quant; i++)
    {
        if (item == produtos[i].name)
        {
            cout << item << " em estoque!" << endl;
            return;
        }
    }
    cout << "Nao existe " << item << " em estoque." << endl;
};



int main() {
    
    int quant;
    string item_procurado;
	cout << "Entre com a quantidade de produtos a serem registrados:" << endl;
	cin >> quant;
    Produto produtos[quant];

	for (int i = 0; i < quant; i++)	
	{
		cout << "Entre com o nome do produto:" << endl;
		getline(cin >> ws, produtos[i].name);
		cout << "Entre com a quantidade de itens no estoque:" << endl;
		cin >> produtos[i].estoque;
	}
    cout << "entre com o nome do produto procurado:";
    getline(cin >> ws, item_procurado);
    cout << endl;
    InStock(item_procurado, produtos, quant);

    return 0;
}
