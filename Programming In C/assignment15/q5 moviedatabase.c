#include<stdio.h>
#include<string.h>
typedef struct movie
{
	char title[50];
	char direct[50];
	int yr;
	char genre[50];
}movie;
movie addmovie();
void updatemovie(movie*m1,int count);
void displaymovie(movie*m1,int count);
void main()
{
	int n,count=0;
	movie m1[3];
	while(1)
{

	printf("enter choice\n");
	printf("01.add movies\n");
	printf("02.update movie record\n");
	printf("03.display data\n");
	printf("04.exit\n");
	scanf("%d",&n);
	if(n==1)
	{
		if(count<3)
		{
			m1[count]=addmovie();
			count++;
		}
		else
		{
			printf("array is full!!!\n");
		}
	  	
	}
	else
	{
		if(n==2)
		{
		  updatemovie(m1,count);	
		}
		else
		{
		   if(n==3)
		   {
		   	 displaymovie(m1,count);
		   }
		   else
		   {
		   	 if(n==4)
		   	 {
		   	 	break ;
			 }
			 else
			  {
				printf("invalid choice!!!!\n");
			  }
		   }
		}
    }
}
}
movie addmovie()
{
	 
	 movie m1;
	    printf("add movies:\n");
		printf("title:");
		scanf("%s",m1.title);
		printf("director:");
		scanf("%s",m1.direct);
		printf("year:");
		scanf("%d",&m1.yr);
		printf("genre:");
		scanf("%s",m1.genre);
     return m1;
	
}
void updatemovie(movie*m1,int count)
{
	char s[50];
	int yy,fact=0;
	printf("movie title:");
	scanf("%s",s);
	printf("year:");
	scanf("%d",&yy);
	for(int i=0;i<count;i++)
	{
		if(strcmp(m1[i].title,s)==0&&m1[i].yr==yy)
		{
			fact++;
			printf("update movies:\n");
	    	printf("title:");
		   scanf("%s",m1[i].title);
		   printf("director:");
		   scanf("%s",m1[i].direct);
		   printf("year:");
		   scanf("%d",&m1[i].yr);
		   printf("genre:");
		   scanf("%s",m1[i].genre);
		   break;
		}
	}
	if(fact!=0)
	{
		printf("update successfuly.\n");
	}
	else
	{
		printf("invalid.....");
	}
}
void displaymovie(movie*m1,int count)
{

	printf("display data\n");
	for(int i=0;i<count;i++)
	{
       printf("title:%s\n",m1[i].title);
       printf("director name:%s\n",m1[i].direct);
       printf("year:%d\n",m1[i].yr);
       printf("genre:%s\n",m1[i].genre);
    }
}