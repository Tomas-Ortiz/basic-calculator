#include <iostream>
#include <math.h>
void titulo();
void tablero(int *opcion);
void operaciones(int opcion, float num[], float resultado);
void limpiar(float num[]);
float sum(float num[], float resultado);
float rest(float num[], float resultado);
float mult(float num[], float resultado);
float div(float num[], float resultado);
float raiz(float resultado);
float pot(float resultado);
void condicion();


using namespace std;

int main()
{
	
int  opcion;
float num[100], resultado;

do{

	titulo();
	tablero(&opcion);
	titulo();	
	operaciones(opcion, num, resultado);

}while(opcion!=7);

		system("cls");
		
	return 0;
}

void titulo()
{

cout<<"\n"<<"\t"<<"\t"<<"\t"<<"============================"<<endl;
cout<<"\n"<<"\t"<<"\t   "<<"\t   "<<"CALCULADORA ESTANDAR"<<endl;	
cout<<"\n"<<"\t"<<"\t"<<"\t"<<"============================"<<endl;
	
}


void tablero(int *opcion)
{
cout<<"\n"<<"\n"<<" =============================="<<endl;
cout<<"\t"<<"  "<<"Calculadora"<<endl;
cout<<" =============================="<<endl;
	
cout<<"\n"<<"      (1) Suma"<<endl;
cout<<"      (2) Resta"<<endl;
cout<<"      (3) Multiplicacion"<<endl;
cout<<"      (4) Division"<<endl;
cout<<"      (5) Raiz cuadrada"<<endl;
cout<<"      (6) Potencia"<<endl;
cout<<"      (7) SALIR"<<endl;

cout<<"\n"<<" =============================="<<endl;

cout<<"\n"<<"  Seleccione una operacion: ";
cin>>*opcion;

system("cls");
	
}

void operaciones(int opcion, float num[], float resultado)
{
int cant, i, base, expo;
float  resultado1;

limpiar(num);
	
switch(opcion)
{

case 1:
 	
resultado1 = sum(num, resultado);
	
	cout<<"\n"<<"  ==============================="<<endl;
	cout<<"  Resultado: "<<resultado1<<endl;
	cout<<"  ==============================="<<endl; 

		break;

case 2:

resultado1 =  rest(num, resultado);
	
 	cout<<"\n"<<"  ==============================="<<endl;
	cout<<"  Resultado: "<<resultado1<<endl;
	cout<<"  ==============================="<<endl; 
	
	break;

case 3:
	
resultado1 = mult(num, resultado);	
	cout<<"\n"<<"  ==============================="<<endl;
	cout<<"  Resultado: "<<resultado1<<endl;
	cout<<"  ==============================="<<endl; 
		
	break;

case 4: 
	
resultado1 = div(num, resultado);
		 	
	cout<<"\n"<<"  ==============================="<<endl;
	cout<<"  Resultado: "<<resultado1<<endl;
	cout<<"  ==============================="<<endl; 

	break;

case 5:

resultado1 =  raiz(resultado);

	cout<<"\n"<<"  ==============================="<<endl;
	cout<<"  Resultado: "<<resultado1<<endl;
	cout<<"  ==============================="<<endl; 

	break;


case 6:
	
resultado1 =  pot(resultado);
		
	cout<<"\n"<<"  ==============================="<<endl;
	cout<<"  Resultado: "<<resultado1<<endl;
	cout<<"  ==============================="<<endl; 

		break;

case 7:
	
	break;
	
default:
	
	cout<<"\n"<<" Ingrese una opcion valida."<<endl;	
				
}	
			
}


void limpiar(float num[])
{
	int i;
	
	for(i=0; i<100; i++)
	{
		num[i] = 0;
	}
		
}

float sum(float num[], float resultado)
{
int cant, i;

cout<<"\n"<<"---------------------------------------------"<<endl;
cout<<"                    SUMA "<<endl;
cout<<"---------------------------------------------"<<endl;
	
cout<<"\n"<<"  Ingrese cantidad de numeros a sumar: ";

 		do{
 			
 		cin>>cant;
 		
 		condicion();
 		
 		}while(cant<1);
 		
 		for(i=0; i<cant; i++)
 		{
 			cout<<endl<<"  Numero "<<i+1<<": ";
		  	cin>>num[i];	
		  	
		   	while(!cin)
			{
				condicion(); 
				cin>>num[i];
			}

		resultado = resultado + num[i];	
		}
	
	return resultado;
}

float rest(float num[], float resultado)
{
	
int cant, i;

cout<<"\n"<<"---------------------------------------------"<<endl;
cout<<"                    RESTA "<<endl;
cout<<"---------------------------------------------"<<endl;

	cout<<"\n"<<"  Ingrese cantidad de numeros a restar: ";
	
 		do{
 			
 		cin>>cant;
 		condicion();
 		
 		}while(cant<1);
 		
 		for(i=0; i<cant; i++)
 		{
 			cout<<endl<<"  Numero "<<i+1<<": ";
		  	cin>>num[i];
		  	
			while(!cin)
			{
				condicion(); 
				cin>>num[i];
			} 
				
		 if(i==0)
		 	{
			resultado = resultado + num[i];	
			}
			
			else
			{
			resultado = resultado - num[i];	
			}
			
		}
	
	return resultado;
}

float mult(float num[], float resultado)
{
int cant, i;

cout<<"\n"<<"---------------------------------------------"<<endl;
cout<<"                MULTIPLICACION "<<endl;
cout<<"---------------------------------------------"<<endl;

cout<<"\n"<<"  Ingrese cantidad de numeros a multiplicar: ";
	
 		do{
 			
 		cin>>cant;
 		condicion(); 

 		}while(cant<1);
 		
 		resultado = 1;

 		for(i=0; i<cant; i++)
 		{
 			cout<<endl<<"  Numero "<<i+1<<": ";
		  	cin>>num[i];
		  	
		  	while(!cin)
			{
				condicion(); 
				cin>>num[i];
			}
			
 			resultado = resultado * num[i];
			
		}
	
	return resultado;
		
}

float div(float num[], float resultado)
{
	
int i;

cout<<"\n"<<"---------------------------------------------"<<endl;
cout<<"                  DIVISION "<<endl;
cout<<"---------------------------------------------"<<endl;
	
for(i=0; i<2; i++)
		{
			if(i==0)
			{
				cout<<"  Ingrese dividendo: ";
				cin>>num[i];
				condicion(); 

			}
			
				else
				{
					cout<<"  Ingrese divisor: ";
					cin>>num[i];
					condicion(); 
				}
		}
	
 		resultado = num[0] / num[1];
 		
	return resultado;		
		
}

float raiz(float resultado)
{
int n;

cout<<"\n"<<"---------------------------------------------"<<endl;
cout<<"                RAIZ CUADRADA "<<endl;
cout<<"---------------------------------------------"<<endl;

	cout<<"\n"<<"  Ingrese numero: ";
	cin>>n;
	
while(!cin)
	{
		condicion();
		cin>>n;
	}
	
	resultado = sqrt(n);
	
	return resultado;
	
}

float pot(float resultado)
{
float base, expo;

cout<<"\n"<<"---------------------------------------------"<<endl;
cout<<"                   POTENCIA "<<endl;
cout<<"---------------------------------------------"<<endl;

	
	
	cout<<"\n"<<"  Ingrese base: ";	
	cin>>base;
	
	while(!cin)
	{
		condicion();
		cin>>base;	
	}	
		
	cout<<"  Ingrese exponente: ";
	cin>>expo;
	
	while(!cin)
	{
		condicion();
		cin>>expo;	
	}	
		
	resultado = pow(base, expo);
	
	return resultado; 
	
}

void condicion()
{
	
	while(!cin)
	{
		cin.clear();
		cin.ignore();
		cout<<"  Ingrese caracter valido: ";
	}
}
