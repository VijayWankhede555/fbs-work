#include<stdio.h>
typedef struct player 
{
  int num;
  char name[50];
  int wicket;
  int maches;
  int runs;	
}player;
void storeplayer(player*p);
void displayplayer(player*p);
void maximumplayer(player*p);
void wicketplayer(player*p);
void main()
{
	player p[10];
	storeplayer(p);
	displayplayer(p);
	maximumplayer(p);
	wicketplayer(p);
	
}
void storeplayer(player*p)
{
	printf("enter dtails of player:\n");
	for(int i=0;i<10;i++)
	{
		printf("player number:");
		scanf("%d",&p[i].num);
		printf("player name:");
		scanf("%s",p[i].name);
		printf("wicket:");
		scanf("%d",&p[i].wicket);
		printf("maches:");
		scanf("%d",&p[i].maches);
		printf("runs:");
		scanf("%d",&p[i].runs);
	}		
}
void displayplayer(player*p)
{
	printf("display all players information\n");
	for(int i=0;i<10;i++)
	{
		printf("player number:%d\n",p[i].num);
		printf("player name:%s\n",p[i].name);
		printf("wicket:%d\n",p[i].wicket);
		printf("maches:%d\n",p[i].maches);
		printf("runs:%d\n",p[i].runs);
	}
}
void maximumplayer(player *p)
{
    int p1=p[0].runs;
    int index=0;

    for(int i=1;i<10;i++)
    {
        if(p[i].runs>p1)
        {
            p1=p[i].runs;
            index=i;
        }
    }

    printf("Maximum run\n");
    printf("This player made maximum runs\n");
    printf("Player number: %d\n", p[index].num);
    printf("Player name: %s\n", p[index].name);
    printf("Wicket: %d\n", p[index].wicket);
    printf("Matches: %d\n", p[index].maches);
    printf("Runs: %d\n", p[index].runs);
}

void wicketplayer(player*p)
{
    int p2=p[0].wicket;
    int index1 = 0;

    for(int i=1;i<10;i++)
    {
        if(p[i].wicket>p2)
        {
            p2=p[i].wicket;
            index1=i;
        }
    }
    printf("Maximum wicket\n");
    printf("This player takes maximum wickets\n");
    printf("Player number:%d\n",p[index1].num);
    printf("Player name:%s\n",p[index1].name);
    printf("Wicket:%d\n",p[index1].wicket);
    printf("Matches: %d\n",p[index1].maches);
    printf("Runs:%d\n",p[index1].runs);
}
