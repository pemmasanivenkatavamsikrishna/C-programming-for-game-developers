# include <stdio.h>
# include <conio.h>
struct  player
{
char name[20] ;
int runs ;
} ;

int  main( )
{
int i, s = 0 ;
struct player a[11] ;
printf("\n Enter Name of Player Runs Scored \n") ;
printf(" ---------------------------------------------\n") ;
for(i = 0; i <= 10; i++ )
{
      printf(" Enter %d Player Name : ", i + 1) ;
      scanf("%s",a[i].name) ;
      printf(" Enter %d Player Runs : ", i + 1) ;
      scanf("%d",&a[i].runs);
}
for(i = 0; i<=10; i++ )
      s = s + a[i].runs ;

printf("\n ---------------------------------------------\n") ;
printf("\n Runs Scored by Player \n") ;
printf(" Name \t\tRuns\n") ;
for(i = 0; i <= 10; i++ )
{
      printf(" %s \t\t%d\n", a[i].name, a[i].runs) ;
}
printf(" Total Runs Scored by Team: %d", s) ;
return 0 ;
}
