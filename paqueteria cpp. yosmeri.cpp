#include "iostream"
#include"string"
// La empresa p&p de servicio de paquetería, solicita los servicios de un programa para calcular el valor a pagar por el usuario segun el traslado del paquete.
using namespace std;


//mostrar un menu para seleccionar el lugar de envio, según distancia agregar criterios de peso y distancia para la tarifa.
int main (){
	
	int p1, p2, p3;

float n1, n2, n3, n4, n5, n6, kmg, kg, km  ,kmtotal, tarifa_peso, peso_volumetrico, q1, q2, q3,q4,q5,q6;
cout << "A que pais desea enviar la mercaderia" << "\n";
	cout << "opcion 1: guatemala" <<"\n";
	cout << "opcion 2: izabal" <<"\n";
	cout << "opcion 3: peten" <<"\n";
	cout << "opcion 4: chiquimula" <<"\n";
	cout << "opcion 5: retalhuleu " <<"\n";
	cin >> p3;
	switch(p3){
		case 1:
			
			q1= 10;
		break;
		case 2:
			
			q2 =300;
		break;
		case 3:
			
			q3= 460;
		break;
		
		case 4:
			q4=178;
		break;
		
		case 5:
			q5=200;
		break;
		
		
	}
	
	q6= q1+q2+q3+q4+q5;
		cout << "distacia del pais: " << q6 << "\n";

//para calcular el valor estimado, el cliente debe de seleccionar que tipo de paquete enviara		
cout << "que tipo de mercaderia desea enviar" << "\n";
	cout << "opcion 1: documentos" <<"\n";
	cout << "opcion 2: paqueteria" <<"\n";
	cout << "opcion 3: mobiliario" <<"\n";
	cout << "opcion 4: respuestos" <<"\n";
	cout << "opcion 5: art. Electronicos " <<"\n";
	cin >>p1;
	
kg= 2.5 ;
km=0.13 ;
switch (p1) {
case 1:
		 cout << "El envio y peso de paqueteria de documentos a cualquier parte que desee del pais tiene un costo de Q 40" << "\n";
		 
		 	break;
	case 2:
		 cout<< "conoce el peso del articulo?" << "\n";
		 cout << " opcion 1: si (con peso real)"<< "\n";
		 cout<< "opcion 2: No ( con peso volumetrico)"<< "\n";
		 cin>> p2;	
			switch (p2){
				
			case 1:
			cout << "ingrese el peso real" <<"\n";
		 	cin>> n2;
		 	if (n2 > 36 ){ cout << "El peso real ingresado sobrepasa el limite de la carga establecida" << "\n";	
				}
				else 
				{	
				
		 		kmtotal= km * q6;
		 		cout<< "la cantidad a pagar en distancia es: Q" << kmtotal << "\n";
		 		tarifa_peso = (n2 * kg ) + kmtotal ;
		 		
		 		cout << "total ; Q"<< tarifa_peso << "\n";
				}
		 	break;
		 	
		 	case 2:
		 		cout<< "Por favor, ingresar largo del paquete"<< "\n";
		 		cin >> n4;
		 		cout<< "Por favor, ingresar el ancho del paquete" << "\n";
		 		cin >> n5;
		 		cout << "Por favor, ingresar alto del paquete" << "\n";
		 		cin >> n6;
		 		peso_volumetrico = (n4*n5*n6)/2272; //formula.
		 		
		 		
		 		if (peso_volumetrico > 50 ){
		 			cout<< "el peso volumetrico es de: " << peso_volumetrico << "\n";
		 			cout << "Lo sentimos,el peso real ingresado sobrepasa el limite de la carga establecida" << "\n";
				 }
		 		else 
		 		{
		 		kmtotal= km * q6;
		 		cout << "el peso volimetrico es de;" << peso_volumetrico <<"\n";
		 		tarifa_peso = ( peso_volumetrico * kg ) + kmtotal;
		 		cout << "total ; Q"<< tarifa_peso << "\n";
		 			
				 }
		 	
			}
			break;
	case 3:
		 cout<< "conoce el peso del articulo?" << "\n";
		 cout << " opcion 1: si (con peso real)"<< "\n"; //si se conoce el peso real del articulo.
		 cout<< "opcion 2: No ( con peso volumetrico)"<< "\n"; //un estimado.
		 cin>> p2;	
			switch (p2){
				
			case 1:
			cout << "ingrese el peso real" <<"\n";
		 	cin>> n2;
		 	if (n2 > 36 ){ cout << "Lo sentimos, el peso real ingresado sobrepasa el limite de la carga establecida" << "\n";	
				}
				else 
				{	
				
		 		kmtotal= km * q6;
		 		cout<< "la cantidad a pagar por distancia es de: Q" << kmtotal << "\n";
		 		tarifa_peso = (n2 * kg ) + kmtotal ;
		 		
		 		cout << "total ; Q"<< tarifa_peso << "\n";
				}
		 		break;
		 	
		 	case 2:
		 		cout<< "ingresar largo del paquete"<< "\n";
		 		cin >> n4;
		 		cout<< "ingresar el ancho del paquete" << "\n";
		 		cin >> n5;
		 		cout << "ingresar alto del paquete" << "\n";
		 		cin >> n6;
		 		peso_volumetrico = (n4*n5*n6)/2272; //formula
		 		
		 		
		 		if (peso_volumetrico > 50 ){
		 			cout<< "el peso volumetrico es de: " << peso_volumetrico << "\n";
		 			cout << "El peso real ingresado sobrepasa el limite de la carga establecida" << "\n";
				 }
		 		else 
		 		{
		 		kmtotal= km * q6;
		 		cout << "el peso volimetrico es de;" << peso_volumetrico <<"\n";
		 		tarifa_peso = ( peso_volumetrico * kg ) + kmtotal;
		 		cout << "total ; Q"<< tarifa_peso << "\n";
		 			
				 }
		 	
			}
			break;
			
	case 4:
		 cout<< "conoce el peso del articulo?" << "\n";
		 cout << " opcion 1: si (con peso real)"<< "\n";
		 cout<< "opcion 2: No ( con peso volumetrico)"<< "\n";
		 cin>> p2;	
			switch (p2){
				
			case 1:
			cout << "ingrese el peso real" <<"\n";
		 	cin>> n2;
		 	if (n2 > 36 ){ cout << "Lo sentimos, el peso real ingresado sobrepasa el limite de la carga establecida" << "\n";	
				}
				else 
				{	
				
		 		kmtotal= km * q6; //formula por km
		 		cout<< "la cantidad a pagar en distacia es: Q" << kmtotal << "\n";
		 		tarifa_peso = (n2 * kg ) + kmtotal ;
		 		
		 		cout << "total ; Q"<< tarifa_peso << "\n";
				}
		 		break;
		 	
		 	case 2:
		 		cout<< "ingresar largo del paquete"<< "\n";
		 		cin >> n4;
		 		cout<< "ingresar el ancho del paquete" << "\n";
		 		cin >> n5;
		 		cout << "ingresar alto del paquete" << "\n";
		 		cin >> n6;
		 		peso_volumetrico = (n4*n5*n6)/2272;
		 		
		 		
		 		if (peso_volumetrico > 50 ){
		 			cout<< "el peso volumetrico es de: " << peso_volumetrico << "\n";
		 			cout << "Lo sentimos, el peso real ingresado sobrepasa el limite de la carga establecida" << "\n";
				 }
		 		else 
		 		{
		 		kmtotal= km * q6;
		 		cout << "el peso volimetrico es de;" << peso_volumetrico <<"\n";
		 		tarifa_peso = ( peso_volumetrico * kg ) + kmtotal;
		 		cout << "total ; Q"<< tarifa_peso << "\n";
		 			
				 }
		 	
			}
	break;
	case 5:
		 cout<< "conoce el peso del articulo?" << "\n";
		 cout << " opcion 1: si (con peso real)"<< "\n";
		 cout<< "opcion 2: No ( con peso volumetrico)"<< "\n";
		 cin>> p2;	
			switch (p2){
				
			case 1:
			cout << "ingrese el peso real" <<"\n";
		 	cin>> n2;
		 	
		 	if (n2 > 36 ){ cout << "El peso real ingresado sobrepasa el limite de la carga establecida" << "\n";	
				}
				else 
				{	
				
		 		kmtotal= km * q6;
		 		cout<< "la cantidad a pagar en distacia es: Q" << kmtotal << "\n";
		 		tarifa_peso = (n2 * kg ) + kmtotal ;
		 		
		 		cout << "total ; Q"<< tarifa_peso << "\n";
				}
		 		break;
		 	
		 	case 2:
		 		
		 		cout<< "ingresar largo del paquete"<< "\n";
		 		cin >> n4;
		 		cout<< "ingresar el ancho del paquete" << "\n";
		 		cin >> n5;
		 		cout << "ingresar alto del paquete" << "\n";
		 		cin >> n6;
		 		peso_volumetrico = (n4*n5*n6)/2272;
		 		
		 		if (peso_volumetrico > 50 ){
		 		cout<< "el peso volumetrico es de: " << peso_volumetrico << "\n";
		 		cout << "Lo sentimos, el peso real ingresado sobrepasa el limite de la carga establecida" << "\n";
				 }
				 
		 		else 
		 		{
		 		kmtotal= km * q6;
		 		cout << "el peso volimetrico es de;" << peso_volumetrico <<"\n";
		 		tarifa_peso = ( peso_volumetrico * kg ) + kmtotal;
		 		cout << "total ; Q"<< tarifa_peso << "\n";	
				 }
				 
		 	break;
			}
			break;
}
}