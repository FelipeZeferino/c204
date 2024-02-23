#include <iostream>

using namespace std;

struct Produto
{
    string name;
    int estoque;
    int id;
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

bool binarySearch(Produto produtos[], int quant, int id) {
    int left = 0, right = quant - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (produtos[mid].id == id)
            return true;
        if (produtos[mid].id < id)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return false;
}

void bubbleSort(Produto produtos[], int quant) {
    for (int i = 0; i < quant - 1; i++) {
        for (int j = 0; j < quant - i - 1; j++) {
            if (produtos[j].id > produtos[j + 1].id) {
                Produto temp = produtos[j];
                produtos[j] = produtos[j + 1];
                produtos[j + 1] = temp;
            }
        }
    }
}

int main() {
    
    int quant;
    string item_procurado;
    int id_procurado;
    cout << "Entre com a quantidade de produtos a serem registrados:" << endl;
    cin >> quant;
    Produto produtos[quant];

    for (int i = 0; i < quant; i++)	
    {
        cout << "Entre com o id do produto:" << endl;
        cin >> produtos[i].id;
        cout << "Entre com o nome do produto:" << endl;
        getline(cin >> ws, produtos[i].name);
        cout << "Entre com a quantidade de itens no estoque:" << endl;
        cin >> produtos[i].estoque;
    }


    bubbleSort(produtos, quant);

    cout << "Entre com o id do produto procurado:";
    cin >> id_procurado;
    cout << endl;

    if (binarySearch(produtos, quant, id_procurado))
        cout << "O produto existe no estoque." << endl;
    else
        cout << "Nao existem produtos com esse codigo em estoque!" << endl;

    return 0;
}