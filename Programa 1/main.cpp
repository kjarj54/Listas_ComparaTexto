#include "Comparar.h"

int main(int argc, char** argv)
{
	setlocale(LC_ALL,"");//actualiza la tabla ASCII para que salgan tildes y la letra � en pantalla
	Comparar *C=new  Comparar();
	C->comparo();
	return 0;
}





