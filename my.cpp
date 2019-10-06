#include <iostream>
#include <string>
#include <stblib.h>
void printout(string str){
	cout<<str;//output some text
}
int randint(int mini,int maxi){
	//create random number between maxi and mini
	int t,dif;
	if(mini > maxi){
		t=mini;
		mini=maxi;
		maxi=t;
	}dif=maxi-mini;
	return rand()%dif+mini;//return number just created
}
void set(int arr[],int len,int num){
	//setting all element of array arr to num 
	for( i = 0 ; i <= len ; i++){
		arr[i]=num;//set element equal to num
	}
}
void pickup(int f[],int to[],int len,int start,int end){
	//copy all element of array f to array to except index between start and end
	int i,cnt;
	cnt=0;//to array first element
	for( i = 0 ; i < len ; i++){
		if(i >= start && i <= end){//index between start and end
			continue;
		}
		to[cnt++]=f[i];
	}
}
