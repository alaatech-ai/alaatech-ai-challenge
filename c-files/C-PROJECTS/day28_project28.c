#include <stdio.h>
#include <string.h>

int main(){
	char name[20], prename[20], fullname[50], id[15];
	printf("enter ur name:\n");
	scanf("%s", name);
	printf("enter ur prename:\n");
	scanf("%s", prename);
	//determine the len of name and prename
	size_t l1, l2;
	l1 = strlen(name);
	l2 = strlen(prename);
	printf("NAME: %zu\n", name);
	printf("PRENAME: %zu\n", prename);
	//combine the name and prename into fullname
	strcpy(fullname, name);
	strcat(fullname, " ");
	strcat(fullname, prename);
	printf("FULLNAME: %s \n", fullname);
	//checking if name is less than 5 so we replace the empty  with 0
	if (l1>=5){
		strncpy(id, name, 5);
	
	}
	else{
		strcpy(id, name); 
		while(strlen(id)<5){
			strcat(id, "0");
		}
	}
	
	printf("ID: %s \n", id);
	
	
	  return 0;
}
