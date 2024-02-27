#include <iostream>

using namespace std;

    struct Pedra{
        string nome;
        int volume;
        int peso;
        int preco;
    };

    int forca_bruta (int quant, Pedra* pedras){

        int maior;

        for (int i = 0; i < quant; i++){
        for (int j = i+1; j < quant;j++)
        {
            if((pedras[i].peso + pedras[j].peso) < 400){
                if((pedras[i].volume + pedras[j].volume) < 1000){
                    if((pedras[i].preco + pedras[j].preco) > maior) //análise: n^2, dois fors aninhados
                    maior = pedras[i].preco + pedras[j].preco;
                }
            }
        }
     }
     return maior;
    }
    
   
int main() {
    int quant;
    cin >> quant;
    Pedra pedras[quant];
    int maior_preco = 0;
    int maior_gulosa = 0;
    
    for (int i = 0; i < quant; i++)
    {
       cout << "passou aqui" << endl;
       cin >> pedras[i].nome;
       cin >> pedras[i].volume;
       cin >> pedras[i].peso ;
       cin >> pedras[i].preco;
    }
    maior_preco = forca_bruta(quant, pedras);
    
    
    cout << "maior preco: " << maior_preco;


    return 0;
}