#include <iostream>
using namespace std;
int main() {
int n = 0, suma = 0, impar = 0;
cout << "Ingrese un numero: ";
cin >> n;
for(int i=1; i<=n; i++){
   
    if(i % 2 != 0){
        impar++;
         suma += i;
    }
}
cout << "La suma de los numeros del 1 al " << n << " es: " << suma << endl;
cout << "La cantidad de numeros impares es: " << impar << endl; 
return 0;
}