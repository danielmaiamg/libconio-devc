#include <conio2.h>
#include <conio.c>

int main(){

    clrscr();						//limpa a tela

	textcolor(YELLOW);				//define cor do texto
	switchbackground(GREEN);		//define cor de fundo da tela
	textbackground(BLUE);			//define cor de fundo do texto

	gotoxy(10, 5);					//posiciona cursor na coordenada x=10,y=5
	cputs("Ola a todos!\n");		//escreve na tela
	
	flashbackground(RED, 800);		//pisca o fundo da tela com determinada cor

	system("pause");

	return 0;
}
