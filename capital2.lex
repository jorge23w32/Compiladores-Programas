/*COMPILADORES
CÓDIGO EN LEX
Fecha: Jueves 18 de Marzo de 2010 */

/*Ejemplo del análisis léxico en Lex*/

%{

#include<stdio.h>

%}

digit		[0-9]
number			{digit}+
letter		[a-zA-Z]
identifier 	{letter}+{number}+
newline			\n
whitespace	[\t]+
simbolos	[@|#|&]+
conditional	[iflthenlelselfor]+

%option noyywrap

%%


{digit} 	{printf("Encontrado un digito: %s\n",yytext);}
{simbolos} 	{printf("An special character found: %s\n",yytext);}
{number} 	{printf("Encontrado un numero: %s\n",yytext);}
{identifier} 	{printf("Encontrado un identificador: %s\n",yytext);}
{conditional} 	{printf("Palabra reservada: %s\n",yytext);}
.		{}

%%

int main(void)
{
	yylex();
	return 0;
}
