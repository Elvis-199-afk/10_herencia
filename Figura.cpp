#include<iostream>
#include<string>
using namespace std;

class Figura{
	private:
		string color;
	public:
		Figura(string);
		string getColor() const {
			return color;
		}
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
		void calcularPerimetro();
};

Rectangulo::Rectangulo(string c,float b,float h):Figura(c){
	base=b;
	altura=h;
}
void Rectangulo::calcularArea(){
	cout<<"El area del rectangulo es: "<<base*altura<<endl;
}
void Rectangulo::calcularPerimetro(){
	cout<<"El perimetro del rectangulo es: "<<(base+altura)*2<<endl;
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
				{
				
				cout<<"Ingrese el color del circulo: ";
				string col;
				cin>>col;
				cout<<"Ingrese el radio del circulo: ";
				float radi;
				cin>>radi;
				Circulo c(col,radi);
				int oper;
				system("cls");
				cout<<"\nLos datos del circulo son los siguientes: \n";
				cout<<"\nEl area es: ";
				c.calcularArea();
				cout<<"\nEl Perimetro es: ";
				c.calcularPerimetro();
				cout<<"El color es: ";
				cout<<c.getColor()<<endl;
				system("pause");
				break;
			}
			case 2:
				{
				
				cout<<"Ingrese el color del rectangulo: ";
				string col;
				cin>>col;
				cout<<"Ingrese la base y altura del rectangulo: \n";
				float bas,alt; 
				cout<<"B = ";
				cin>>bas;
				cout<<"H = ";
				cin>>alt;
				Rectangulo R(col,bas,alt);
				system("cls");
				cout<<"\nLos datos del rectangulo son los siguientes: \n";
				cout<<"\nEl area es: ";
				R.calcularArea();
				cout<<"\nEl Perimetro es: ";
				R.calcularPerimetro();
				cout<<"El color es: "<<R.getColor()<<endl;
				system("pause");
				break;
			}
			case 3:
				{
				
				cout<<"Ingrese el color del Triangulo: ";
				string color;
				cin>>color;
				cout<<"Ingrese la base y altura del rectangulo: \n";
				float bas,alt; 
				cout<<"B = ";
				cin>>bas;
				cout<<"H = ";
				cin>>alt;
				cout<<"Ingrese el tipo de triangulo que es: ";
				string tipo;
				cin>>tipo;
				Triangulo t(color,bas,alt,tipo);
				system("cls");
				cout<<"\nLos datos del triangulo son los siguientes: \n";
				cout<<"\nEl area es: ";
				t.calcularArea();
				cout<<"El tipo de triangulo es: "<<tipo<<endl;
				system("pause");
				break;
			}
			case 4:
				cout<<"\nSALIENDO . . . \n";
				system("pause");
				break;
			default:
            	cout<<"Opción inválida. Intente de nuevo.\n";
            	system("pause");
            	break;
		}
	}while(op!=4);
	return 0;
}
