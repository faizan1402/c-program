struct date{
	int d,m,y; /*this is declare */
};
 void main(){
 	struct date today,d1;
 	today.d=23;
 	today.m=2;
 	today.y=2019;
 	d1=today;
 	printf("Enter today's date");
 	scanf("%d",d1.d);
 	scanf("%d",d1.m);
 	scanf("%d",d1.y);
 	printf("%d",d1.d);
 	printf("%d",d1.m);
 	printf("%d",d1.y);
 	getch();  
 	
 }
