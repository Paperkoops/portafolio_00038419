//Andrés Eduardo Aguilar Barahona 00039619
//Leonardo Antonio Sánchez Albiñana 00038419
//     Sección: 03
#include <iostream>
using namespace std;

int poblacionTotal(int conti);
string capitalMasPoblada();
float promedioMundial();

struct pais 
   {
     string nombre;
     string capital;
     int habitantes;
     float promedioEdad;
       
   };
   
   pais paises[5][5];
   
   bool corriendo = true;

int main()
{
    cout << "#####################################################################################" << endl;
    cout << "Ingreso de datos" << endl;
    cout << "#####################################################################################" << endl;
    
    for (int i = 0; i <= 4; i++) 
    {
        for (int j = 0; j <= 4; j++) 
        {
            cout << "#####################################################################################" << endl;
            cout << "" << j+1 << " Pais que pertenece al " << i+1 << " Continente" << endl;
            cout << "#####################################################################################" << endl;
            cout << ">Nombre: " << endl;
            getline (cin, paises[i][j].nombre);
            //cout << "Inserte el nombre del " << j+1 << " pais que pertenece al " << i+1 << " continente" << endl;
            cout << ">Capital: " << endl;
            getline (cin, paises[i][j].capital);
            cout << ">Habitantes: " << endl;
            //cout << "Inserte el nombre del " << j+1 << " pais que pertenece al " << i+1 << " continente" << endl;
            cin >> paises[i][j].habitantes;
            cout << ">Edad Promedio: " << endl;
            //cout << "Inserte el nombre del " << j+1 << " pais que pertenece al " << i+1 << " continente" << endl;
            cin >> paises[i][j].promedioEdad;
        }
        
    }
    
    while (corriendo == true)
    {
        cout << "#####################################################################################" << endl;
        cout << "Escoja una opcion" << endl;
        cout << "#####################################################################################" << endl;
        cout << ">1 Dado un continente, calcular su poblacion total" << endl;
        cout << ">2 Encontrar la capital con mayor poblacion" << endl;
        cout << ">3 Promedio de Edad Mundial" << endl;
        cout << ">4 Salir" << endl;
        cout << "#####################################################################################" << endl;
        int opcion = 0;
        cin >> opcion;
        switch(opcion)
        {
            case 1:
            //Calcular poblacion total
            cout << "#####################################################################################" << endl;
            cout << "Poblacion total" << endl;
            cout << "#####################################################################################" << endl;
            cout << "#####################################################################################" << endl;
            cout << "Ingrese el numero del continente (1-5)" << endl;
            cout << "#####################################################################################" << endl;
            int continente;
            cin >> continente;
            cout << poblacionTotal(continente) << endl;
            break;
            
            case 2:
            //Capital con mayor poblacion
            cout << "#####################################################################################" << endl;
            cout << "Mayor poblacion" << endl;
            cout << "#####################################################################################" << endl;
            cout << capitalMasPoblada() << endl;
            break;
            
            case 3:
            //Promedio de edad mundial
            cout << "#####################################################################################" << endl;
            cout << "Promedio Mundial" << endl;
            cout << "#####################################################################################" << endl;
            cout << promedioMundial() << endl;
            break;
            
            case 4:
            //Salir
            corriendo = false;
            break;
            
            default:
            //Opcion no valida
            cout << "#####################################################################################" << endl;
            cout << "La opcion ingresada no es valida" << endl;
            cout << "#####################################################################################" << endl;
            break;
        }
    }
	
	return 0;		
}

int poblacionTotal(int conti)
{
    conti = conti-1;
    int suma = 0;
    
        for (int j = 0; j <= 4; j++) 
        {
            suma += paises[conti][j].habitantes;
        }
        
    
    
    return suma;
}

string capitalMasPoblada()
{
    string capi = paises[0][0].capital;
    int r = paises[0][0].habitantes;
    
    for (int i = 0; i <= 4; i++) 
    {
        for (int j = 0; j <= 4; j++) 
        {
            if (r < paises[i][j].habitantes)
            {
                capi = paises[i][j].capital;
            }
        }
        
    }
        
    
    
    return capi;
}

float promedioMundial()
{
    int suma = 0;
    for (int i = 0; i <= 4; i++) 
    {
        for (int j = 0; j <= 4; j++) 
        {
            suma += paises[i][j].promedioEdad;
        }
        
    }
    float prom = suma/25;
    return prom;
}
