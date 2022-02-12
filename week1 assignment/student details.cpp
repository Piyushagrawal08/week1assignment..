#include<stdio.h>
int main()
{
	char name,branch,hobbies;
	int reg_no;
	
	printf("input your name : ");
	scanf("%s",&name);
	printf("input your branch : ");
	scanf("%s",&branch);
	printf("input your reg_no : ");
	scanf("%d",&reg_no);
	printf("input your hobbies : ");
	scanf("%s",&hobbies);
	
    printf("%s %s %d %s ",name,branch,reg_no,hobbies);  

	
	return 0;
	
}
