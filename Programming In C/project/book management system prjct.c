#include<stdio.h>
#include<string.h>
typedef struct book
{
	 int  id;
	 char book[50];
	 char author[50];
	 char category[100] ;
     int price; 
	 float rating;
}book;
book addbook();
void displaysortbook(book* brr,int count);
void searchbook(book* brr,int count);
void searchingbook(book*brr,int count);
void delbook(book*brr,int* count);
void categorybook(book* brr,int count);
void updatebook(book*brr,int count);
void databook(book*brr,int count);
void main()
{
	book brr[3];
	int count=0;
	while(1)
{
	int n;
	printf("enter your choice:\n");
	printf("01.add book\n");
	printf("02.search book\n");
	printf("03.show author books\n");
	printf("04.remove book\n");
	printf("05.show categorys books\n");
	printf("06.update books data\n");
	printf("07.display sorted books\n");
	printf("08.display all books\n");
	printf("09.exit\n");
	printf("enter here:");
	scanf("%d",&n);
	if(n==1)
	{
		if(count<3)
		{
	    	printf("....add book....\n");
		    brr[count]=addbook();
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
		   searchbook(brr, count);
		}
		else
		{
			if(n==3)
			{
			  printf("author books name:\n");
			  searchingbook(brr,count);
			  
			}
			else
			{
				if(n==4)
				{
					delbook(brr,&count);
				}
				else
				{
					if(n==5)
					{
						categorybook(brr,count);
					}
					else
					{
						if(n==6)
						{
						  updatebook(brr,count);	
						}
						else
						{
							if(n==7)
							{
			                    displaysortbook(brr,count);
							}
							else
							{
								if(n==8)
								{
									databook(brr,count);
								}
								else
								{
									if(n==9)
									{
										break;
									}
									else
									{
										printf("invalid choice!!!\n");
									}
								}
							}
						}
					}
				}
			}
		}
	}
		
}
}
book addbook()
{
     book brr;
     printf("ID:");
     scanf("%d",&brr.id);
     printf("book name:");
     fflush(stdin);
     fgets(brr.book,50,stdin);
     printf("author name:");
     fflush(stdin);
     fgets(brr.author,50,stdin);
     printf("category:");
     fflush(stdin);
     fgets(brr.category,50,stdin);
     printf("book price:");
     scanf("%d",&brr.price);
     printf("book rating:");
     scanf("%f",&brr.rating);
     printf("book add sucessfuly\n");
     return brr;
}
void displaysortbook(book* brr,int count)
{
	book t1;
	int n1;
	printf("....display sorted data....\n");
	printf("01.highest to lowest\n");
	printf("02.lowest to highest\n");
	printf("enter number:");
	scanf("%d",&n1);
	if(n1==1)
	{
	  for(int i=0;i<count-1;i++)
	  {
	  	for(int j=0;j<count-i-1;j++)
	  	{
	  		if(brr[j].price<brr[j+1].price||(brr[j].price==brr[j+1].price 
			  &&brr[j].rating<brr[j+1].rating))
	  		 {
	  			t1=brr[j];
	  			brr[j]=brr[j+1];
	  			brr[j+1]=t1;
			 }
		  }
		  }	
	}
	else
	{
		if(n1==2)
		{
			for(int i=0;i<count-1;i++)
	        {
	  	      for(int j=0;j<count-i-1;j++)
	  	       {
	  		    if(brr[j].price>brr[j+1].price||(brr[j].price==brr[j+1].price&&
                     brr[j].rating>brr[j+1].rating))

	  		     {
	  			  t1=brr[j];
	  			  brr[j]=brr[j+1];
	  			  brr[j+1]=t1;
			     }
		       }
		    }	
		}
		else
		{
			printf("invalid choice!!!\n");
		}
	}
	for(int i=0;i<count;i++)
	{
		printf("id:%d\n",brr[i].id);
	    printf("book name:%s\n",brr[i].book);
	    printf("author name:%s\n",brr[i].author);
	    printf("category:%s\n",brr[i].category);
	    printf("book price:%d\n",brr[i].price);
	    printf("book rating:%f\n",brr[i].rating);
	}	
}
void searchbook(book* brr,int count)
{
	int id1;
	char name1[50];
	int found=0;
	printf("...search book...\n");
	printf("enter book id:");
	scanf("%d",&id1);
	printf("enter book name:");
	fflush(stdin);
	fgets(name1,50,stdin);
		for(int i=0;i<count;i++)
		if(brr[i].id==id1&&strcmp(brr[i].book,name1)==0)
		{
			printf("....display books data....\n");
	        printf("id:%d\n",brr[i].id);
	        printf("book name:%s\n",brr[i].book);
	        printf("author name:%s\n",brr[i].author);
	        printf("category:%s\n",brr[i].category);
	        printf("book price:%d\n",brr[i].price);
	        printf("book rating:%f\n",brr[i].rating);
			found=1;
			break;
		}
	if(found==0)
	{
		printf("book not found!!\n");
	}
}
void searchingbook(book*brr,int count)
{
	for(int i=0;i<count;i++)
	{
		printf("author name and book name=%s:%s\n",brr[i].author,brr[i].book);
	}
}
void delbook(book*brr,int* count)
{
	int d,f=0;
	printf("enter book id:");
	scanf("%d",&d);
	for(int i=0;i<*count;i++)
	{
		if(brr[i].id==d)
		{
			for(int j=i;j<*count-1;j++)
			{
			 brr[j]=brr[j+1];
		    }
			(*count)--;
		    f=1;
	      	break;	
		}
		
	}
	if(f==0)
	{
		printf("book not fount!!");
	}
	else
	{
		printf("book deleted successfuly\n");
	}
}
void categorybook(book* brr,int count)
{
    char cat[50];
	printf("this categorys book are store:\n");
	for(int i=0;i<count;i++)
	{
	   printf("%s\n",brr[i].category);	
	}
	printf("enter category:\n");
	fflush(stdin);
	fgets(cat,50,stdin);
	int a=0;
	for(int i=0;i<count;i++)
	{
		if(strcmp(brr[i].category,cat)==0)
		{
			printf("book id:%d\nbook name:%s\n",brr[i].id,brr[i].book);
			printf("author name:%s\nrating:%f\n",brr[i].author,brr[i].rating);
			a++;
		}
	}
	if(a==0)
	{
		printf("book category not found!!\n");
	}
}
void updatebook(book*brr,int count)
{
	int b,b1,b2=0;
	char ser[50];
	printf("update book\n");
	printf("enter a book id:");
	scanf("%d",&b);
	printf("enter book name:");
	fflush(stdin);
	fgets(ser,50,stdin);
	for(int i=0;i<count;i++)
	{
		if(brr[i].id==b&&strcmp(brr[i].book,ser)==0)
		{
			printf("01.update rating..\n");
			printf("02.update price..\n");
			printf("03.update both rating & price...\n");
	        printf("enter choice:\n");
	        scanf("%d",&b1);
	        b2=1;
	        if(b1==1)
	        {
	        	printf("new book rating:");
	        	scanf("%f",&brr[i].rating);
	        	printf("update rating successfully...\n");
			}
			else
			{
				if(b1==2)
				{
					printf("new book price:");
			        scanf("%d",&brr[i].price);
			        printf("update price successfully...\n");
				}
				else
				{
					if(b1==3)
					{
						printf("new book rating:");
	        	        scanf("%f",&brr[i].rating);
	        	        printf("new book price:");
			            scanf("%d",&brr[i].price);
			            printf("update rating & price successfully...\n");
					}
					else
					{
					  printf("invalid choice!!!\n");			
					}
				}
			}	
		}
	}
	if(b2==0)
	{
		printf("book not found!!\n");
	}	
}
void databook(book*brr,int count)
{
	printf("all books..\n");
	for(int i=0;i<count;i++)
	{
	  printf("....display books data....\n");
	  printf("id:%d\n",brr[i].id);
	  printf("book name:%s\n",brr[i].book);
	  printf("author name:%s\n",brr[i].author);
	  printf("category:%s\n",brr[i].category);
	  printf("book price:%d\n",brr[i].price);
	  printf("book rating:%f\n",brr[i].rating);
	}
}

