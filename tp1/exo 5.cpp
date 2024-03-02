#include<stdio.h>
int rep=0;
int honoi(int n,char first,char medium,char last){
	if(n==1){
		printf("%c -> %c",first,last);
		rep++;
	}
	else{
		honoi(n-1,first,medium,last);
		printf("\n%c -> %c",first,last);
		printf("\n");
		honoi(n-1,first,last,medium);
}}

int main(){
	int n;
	char first,medium,last;
	printf("entrer le nombre des disques:");
	scanf(" %d",&n);
	printf("\n");
	honoi(n,'a','b','c');
}