//Andres Ruiz Velasco--Braulio Lopez
//Aritmetica de punteros
// 06 09  2023



#include <bits/stdc++.h>
using namespace std;
int main() {
  int opcion;
  cout<<"Que opcion deseas (1. Suma 2. Resta)";
  cin>>opcion;

  if(opcion==1){
    int x=5;
  int* num= new int[x] {2,3,5,7,11};

  cout << "La suma del primero y el ultimo: " <<*(num) + *(num+(x-1));

  cout << "/n/nTodos multipllicados por 10:/n";
  for(int i=0; i<5; i++){
    cout<<*(num+i) * 10 << "  ";
  }
  return 0;

  }if(opcion==2){
    int x=5;
  int* num= new int[x] {2,3,5,7,11};

  cout << "La resta del primero y el ultimo: " <<*(num) - *(num+(x-1));

  cout << "/n/nTodos multipllicados por 10:/n";
  for(int i=0; i<5; i++){
    cout<<*(num+i) * 10 << "  ";
  }
  return 0;
  
  }else{
    cout<<"Opcion no valida":
    return;
  }
}