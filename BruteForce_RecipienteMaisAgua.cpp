#include <iostream>

using namespace std;
   

void maior_area (int maior1, int maior2){
   int area = maior1 * maior2;
    cout << area;
}

void maior_valor(int* distancias, int quant, int maior1, int maior2){
    for(int i = 0; i < quant; i++){
        if(distancias[i] > maior1){
            maior2 = maior1;
            maior1 = distancias[i];
        } else if(distancias[i] > maior2){
            maior2 = distancias[i];
        }
    }
   
}

int main() {

    int quant = 10;
    int distancias[quant];
    int resultado;
    int maior1 = 0;
    int maior2 = 0;


    for (int i = 0; i < quant; i++)
    {
        cin >> distancias[i];
    }
    maior_valor(distancias, quant, maior1, maior2);
    maior_area(maior1, maior2);

    return 0;
}