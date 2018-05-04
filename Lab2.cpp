#include <iostream>
#include <string>
#include <math.h>


using std::cout;
using std::cin;
using std::string;
using std::endl;

int menu(){
    int opcion = 0;
    do{
        cout<<"     MENU"<<endl
            <<"Opcion  1"<<endl
            <<"Opcion  2"<<endl
            <<"Opcion  3"<<endl
            <<"Ingrese una opcion: ";
            
		 
            cin >> opcion;
            
            if(opcion < 1 || opcion > 3){
                cout <<"Opcion fuera de rango, intente de nuevo"<<endl;
                opcion = 0;
            }
	    if(opcion == 1){
	    
	    
	    }break;

	    if(opcion == 2){
	    	
		

	    }break;

	    if(opcion == 3){

	    }break;


        }while (opcion == 0);
        return opcion;
}

int main()
{
    menu();
  
}
