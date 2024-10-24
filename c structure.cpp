/* c structures 
Author:Brian Njoroge
Reg no:CT101/G/23290/24
Date:23/10/24
*/
#include<stdio.h>
#include<string.h>
struct student{
	char name[30];
	float height;
	char reg_no[15];
	char email[17];
	int phone;
}student1,student2;

int main(){
	printf("enter your name:");
	scanf("%s",&student1.name);
	student1.height=6.1;
	strcpy(student1.reg_no,"CT101/G/23290/24");
	strcpy(student1.email,"njoroge@gmail.com");
	student1.phone=3967;
	printf("name:%s\n",student1.name);
	printf("height:%f\n",student1.height);
	printf("reg_no:%s\n",student1.reg_no);
	printf("email:%s\n",student1.email);
	printf("phone number:%d\n",student1.phone);
	return 0;
}	