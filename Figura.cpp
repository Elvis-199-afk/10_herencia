#include<iostream>
#include<string>
using namespace std;

class Figura{
	private:
		string color;
	public:
		Figura(string);
};
Figura::Figura(string c){
	color=c;
}

class Circulo : public Figura{
	private:
		float radio;
	public:
		Circulo(string,float);
		void calcularArea();
		void calcularPerimetro();
};
Circulo::Circulo(string c,float r):Figura(c){
	radio=r;
}
void Circulo::calcularArea(){
	float A;
	A=3.1416*radio*radio;
	cout<<"El Area del circulo es: "<<A<<endl;
}
void Circulo::calcularPerimetro(){
	float P;
	P=2*3.1416*radio;
	cout<<"El Perimetro del circulo es: "<<P<<endl;
}

class Rectangulo : public Figura{
	private:
		float base;
		float altura;
	public:
		Rectangulo(string,float,float);
		void calcularArea();
};

Rectangulo::Rectangulo(string c,float b,float h):Figura(c){
	base=b;
	altura=h;
}
void Rectangulo::calcularArea(){
	cout<<"El area del rectangulo es: "<<base*altura<<endl;
}


class Triangulo : Figura{
	private:
		float base;
		float altura;
		string tipo;
	public:
		Triangulo(string,float,float,string);
		void calcularArea();
};

Triangulo::Triangulo(string c,float b,float h,string t):Figura(c){
	base=b;
	altura=h;
	tipo=t;
}
void Triangulo::calcularArea(){
	cout<<"El area del Triangulo es: "<<(base*altura)/2<<endl;
}

int main(){
	Circulo c("Verde",5);
	int op;
	do{
		system("cls");
		cout<<"== FIGURAS ==\n\n";
		cout<<"1. Circulo\n";
		cout<<"2. Rectangulo\n";
		cout<<"3. Triangulo\n";
		cout<<"4. SALIR\n\n";
		cout<<"Ingrese una de las opciones: ";
		cin>>op;
		
		switch(op){
			case 1:
				cout<<"Ingrese el color del circulo: ";
				string col;
				cin>>col;
				cout<<"Ingrese el radio del circulo: ";
				float radi;
				cin>>radi;
				Circulo c(col,radi);
				int oper;
				do{
					system("cls");
					cout<<"1. Calcular Area\n";
					cout<<"2. Calcular Perimetro\n";
					cout<<"3. Regresar\n\n";
					cin>>oper;
					switch(oper){
						case 1:
							c.calcularArea();
							system("pause");
							break;
						case 2:
							c.calcularPerimetro();
							system("pause");
							break;
						case 3:
							break;
						default:
							cout<<"Ingrese una opcion valida\n";
							system("pause");
							break;
					}
				}while(oper!=3);
				
		}
	}while(op!=4);
	
	
	
	

	cout<<endl;
	
	
	return 0;
}
