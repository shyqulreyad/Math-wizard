#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	
	int i;
	int num,a;
	char s[100]="reyad";
	char s1[100],ch,che;
	printf("                      Hi i'm shezaar.\n");
	printf("                       Your math wizard.\n");
	getch();
	print1:
	printf("Are you my boss?\n please confirm your identity\n");
	getch();
	printf("enter your id =");
	gets(s1);
	system("cls");
	int d=strcmp(s,s1);
	if(d==0)
	{
		printf("welcome sir\n");
		getch();
		printf("what kind of math problem you want to solve?\n");
		
		for(i=1;i>0;i++)
		{
			     	printf("please enter A choice\n a.Decimal to octal\n b.Decimal to hexa\n");
        		printf(" c.Decimal to ascii\n d.Sum of three number\n");
	             	printf(" e.Area of triangle\n");
	            	scanf("%c",&ch);
	            	system("cls");
		
	          switch(ch)
	      	{
		     	case'a':
				
				printf("you chossed Decimal to octal\n");
				printf("enter a decimal=");
				scanf("%d",&num);
				printf("octal number is=%o\n",num);
				getch();
				system("cls");
				
			    break;
		      case'b':
		     	
				printf("you chossed Decimal to hexa\n");
				printf("enter a decimal=");
				scanf("%d",&num);
				printf("hexa number is=%x\n",num);
				getch();
				system("cls");
				break;	
		      	case'c':
		 	    printf("you chossed Decimal to Ascii.\n");
                printf("enter any decimal=");
                scanf("%d",&a);
               	printf("the ascii value or character is=%c\n",a);
            	getch();
                system("cls");
                break;
		     	case'd':
				printf("you chossed sum of three number\n");
				float k,g,j,sum,avr;
               	printf("enter three number=");
            	scanf("%f%f%f",&k,&g,&j);
            	sum= k+g+j;
             	printf("sum is=%.2f\n",sum);
             	avr=sum/3;
            	printf("avareage is=%.2f",avr);
            	getch();
            	system("cls");
            	break;
		      	case'e':
			    printf("you chossed Area of triangle\n");	
			    double base,height,area;
                printf("enter base and height=");
                scanf("%lf%lf",&base,&height);
                area = 0.5*base*height;
                printf("Area of triangle is =%.2lf\n",area);
                getch();
                system("cls");
			    break;
		     
			   	
			
	    	}
	
			
		}

	}
	else
	{
		printf("not valid user\n");
		getch();
		
	}
	
	
}
