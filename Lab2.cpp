#include <iostream>
#include <string>
#include <math.h>
#include <ctype.h>

using std::cout;
using std::cin;
using std::string;
using std::endl;

int Eldos(){
	int a,b,a2,b2,aexponente,bexponente,resultadoa,resultadob,x1,x2,x3,x4,y1,y2,y3,y4;
		cout<<"Ingrese X 1"<<endl;
                cin >> x1;
                cout<<"Ingrese Y 1"<<endl;
                cin >> y1;
                cout<<"Ingrese X 2"<<endl;
                cin >> x2;
                cout<<"Ingrese Y 2"<<endl;
                cin >> y2;

                a=x2-x1;
                b=y2-y1;

                aexponente = pow(a,2);
                bexponente = pow(b,2);

                resultadoa = sqrt(aexponente+bexponente);
                cout<<"d = " << resultadoa<<endl;

                cout<<"Ingrese X 3"<<endl;
                cin >> x3;
                cout<<"Ingrese Y 3"<<endl;
                cin >> y3;
                cout<<"Ingrese X 4"<<endl;
                cin >> x4;
                cout<<"Ingrese Y 4"<<endl;
                cin >> y4;

                a2 = x4-x3;
	      	b2 = y4-y3;


}
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
	    
	    
	    }

	    if(opcion == 2){
	    	


	    }

	    if(opcion == 3){

	    }


        }while (opcion == 0);
        return opcion;
}


int main()
{
    menu();
  
}
