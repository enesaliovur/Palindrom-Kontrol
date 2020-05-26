#include <stdio.h>
#include <string.h>
#define maksimum 100


 char stack[maksimum];
 int top = 1;
 
 void push(char veri){
 	top++;
 	stack[top]=veri;
 }
 
 char pop(){
 	char data;
 	data=stack[top];
 	top--;
 	return data;
 }
 
  palindrom_kontrol(){
 	 char string[maksimum];
	 int i=0,harf=0,uzunluk;
	 printf("Cumleyi giriniz\n");
	 scanf("%s",string);
	 uzunluk=strlen(string);
	 
	
	 for(i=0;i<uzunluk;i++){
	 		push(string[i]);
	 	
	 }
	 
	 for(i=0;i<uzunluk;i++){
	 	if(string[i]==pop()){
	 		
	 		harf++;
	 		
	 		
		 }
		 
	 }
	 
	 if(uzunluk==harf){
	 
	 	printf("Bu kelime palindromdur\n");
	 }
	 
	 else{
	 	printf("Bu kelime palindrom degildir");
	 }
	 
 	
 }
 
 int main(){
 
  palindrom_kontrol();
 
 }
 

