 #include<stdio.h>
struct student{ /*this part is only declare data type and function*/
	int roll_no;
	char name[20];
	float fees;
}s;
  int main(){
  	printf("********Enter information:\n********");
  	printf("Enter your roll_ no\: ");
  	scanf("\n%d",&s.roll_no);
  	system("color 3");
  	
  	printf("    *****Enter your name\n*****   ");
  	scanf("\n%s",&s.name);
  	
  	printf("     *****Enter your college fees\n*****    ");
  	scanf("\n%f",&s.fees);
  	
  	printf("     *****Displaying the record\n*****     ");
  	 
  	printf("roll_ no is\n%d",s.roll_no);
  	printf("\n");
  	printf("name is \n%s",s.name);
  	printf("\n");
  	printf("college fees is \n%f",s.fees);
  	printf("\n");
  	return 0;
  }
