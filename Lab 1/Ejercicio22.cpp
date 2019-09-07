#include <iostream> 
using namespace std;

int main()
{
    int matriz[5][5] = {0};
    
    cout << "Ingrese los elementos necesarios para la matriz" << endl;
    
     cin >> matriz[0][0];
     cin >> matriz[0][1];
     cin >> matriz[1][0];
     cin >> matriz[1][1];
     cin >> matriz[1][2];
     cin >> matriz[2][1];
     cin >> matriz[2][2];
     cin >> matriz[2][3];
     cin >> matriz[3][2];
     cin >> matriz[3][3];
     cin >> matriz[3][4];
     cin >> matriz[4][3];
     cin >> matriz[4][4]; 
     
     for(int i=0; i<5; i++){
          cout<<"|";
 	   for(int j=0; j<5; j++){
       	  cout<<matriz[i][j];
       	  cout<<"|";
       	 	     
 	   }
 	   cout << endl;
	}
	return 0;
}
