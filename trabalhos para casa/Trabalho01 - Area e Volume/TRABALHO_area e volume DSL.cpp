// Exerc�cio para encontrar os valores de �reas e Volumes
// Dorcival dos Santos Leite - Mat. 202003362174

#include <iostream>
#include <locale>
#include <math.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "portuguese");
	int l, r, B, h, op; // lado, raio, base, altura e op��o
	float pi (3.1415); // Valor de pi
	
	cout << "Escolha a opera��o que deseja executar!" << endl;
	cout << "[ 1 ] Para �rea de um QUADRADO" << endl;
	cout << "[ 2 ] Para �rea de um C�RCULO" << endl;
	cout << "[ 3 ] Para �rea de um TRI�NGULO" << endl;
	cout << "[ 4 ] Para volume de um CUBO" << endl;
	cout << "[ 5 ] Para volume de um CILINDRO" << endl;
	cout << "[ 6 ] Para volume de um CONE" << endl;
	cout << "[ 7 ] Para volume de uma ESFERA" << endl;
	cin >> op;
	cout << "A op��o escolhida foi: " << op << endl;
	
		if (op < 1 || op > 7)
	{
			cout << "numero estranho";
			return 1;
	}

	switch(op)
	{
    	case 1:
	   		cout << "Entre a medida do LADO do QUADRADO: ";
			cin >> l;
			cout << "A �rea do QUADRADO � igual a " << l * l;
    	break;
    	case 2:
	   		cout << "Entre a medida do RAIO do C�RCULO: ";
			cin >> r;
			cout << "A �rea do C�RCULO � igual a " << pi * r * r;
 		break;
    	case 3:
	   		cout << "Entre a medida da BASE do TRI�NGULO: ";
			cin >> B;
			cout << "Entre a medida da ALTURA do TRI�NGULO: ";
			cin >> h;
			cout << "A �rea do TRI�NGULO � igual a " << (B * h)/2;
 		break;
        case 4:
	   		cout << "Entre a medida do LADO do CUBO: ";
			cin >> l;
			cout << "O Volume do CUBO � igual a " << l * l * l;
 	   	break;
        case 5:
	   		cout << "Entre a medida do RAIO do CILINDRO: ";
			cin >> r;
			cout << "Entre a medida da ALTURA do CILINDRO: ";
			cin >> h;
			cout << "O Volume do CILINDRO � igual a " << pi * r * r * h;
 	    break;
		case 6:
	   		cout << "Entre a medida do RAIO do CONE: ";
			cin >> r;
			cout << "Entre a medida da ALTURA do CONE: ";
			cin >> h;
			cout << "O Volume do CONE � igual a " << ((pi * r * r)/3) * h;
 	    break;
        case 7:
	   		cout << "Entre a medida do RAIO da ESFERA: ";
			cin >> r;
			cout << "O Volume da ESFERA � igual a " << (4/3) * pi * r * r * r;
 	    break;
 	}
}