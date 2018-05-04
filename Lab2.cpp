#include <iostream>
#include <string>
#include <math.h>
#include <ctype.h>

using std::cout;
using std::cin;
using std::string;
using std::endl;

int menu(){
	int x1,x2,x3,x4,y1,y2,y3,y4;
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
	    	cout<<"Ingrese X 1"<<endl;
		cin >> x1;
		cout<<"Ingrese Y 1"<<endl;
		cin >> Y1
		cout<<"Ingrese X 2"<<endl;
		cin >> x2;
		cout<<"Ingrese Y 2"<<endl;
		cin >> y2;
		

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
