#include "Comparar.h"

Comparar::Comparar(){
	
}

void Comparar::comparo(){
	
	FILE* cadena;
	char cad2[]="fin";
	cadena=fopen("cadenas.txt","wb+");
	UI interf;
	do{
		cout<<"Digite una oracion\n";
		interf.leecad(cade,TAM);
		fwrite(cade,sizeof(100),1,cadena);
		fwrite(" ",sizeof(100),1,cadena);			
	}while(strcmp(cade,cad2)!=0);
	
	fclose(cadena);
	
	
	
}


