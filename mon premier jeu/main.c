#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
int main()
{
  int max=100,min=1,nombreMystere=0,votre_nombre=0,votrechoix=0,niveau=0,coup=1,continuePartie=1,j;



  printf("------bienvenu------ \n\n");
  printf("nous vous remercions pour choisir notre jeu plus au moins et nous souhitons que vous passer un temps parfait \n\n");
  printf("premierment l ordinateur va choisir un nombre aleatoire\n");
  printf("Et il faut le trouver\n ");
  printf("Maintenant nous commencons..... bon chance\n");

   do
   {




  printf("choisir le mode\n");
  printf("1.un seule joueur\n");
  printf("2.deux joueur\n");
  scanf("%d",&votrechoix);
  if(votrechoix==1)


  {
      printf("choisez le niveau de difficulte\n");
      printf("1-entre 1 et 100\n");
      printf("2-entre 1 et 1000\n");
      printf("3-entre 1 et 10000\n");
      scanf("%d",&niveau);
      switch(niveau)
      {

  case 1:
     max=100;
    break;
  case 2:
    max=1000;
    break;
  case 3:
    max=10000;
    break;
      }


  srand(time(NULL));
  nombreMystere=(rand() % (max-min+1))+min;
  printf("tapez votre nombre\n");
  scanf("%d",&votre_nombre);
  while((nombreMystere!= votre_nombre))
  {
      if(nombreMystere<votre_nombre)
      {
          printf("c'est moins!\n");
          scanf("%d",&votre_nombre);
          coup++;
      }
      else
      {
          printf("c'est plus!\n");
          scanf("%d",&votre_nombre);
          coup++;
      }
  }
  if (nombreMystere==votre_nombre)
      {
       printf("bravoo , vous avez trouve %d en %d coup\n\n\n",nombreMystere,coup) ;
       coup=1;
       printf("vous voulez faire une autre partie\n");
       printf("1-oui\n");
       printf("0-non\n");
    scanf("%d",&continuePartie);

      }

}








else
{
    printf("Ecrire le nombre par le premier joueur en secret\n");
    scanf("%d",&nombreMystere);



      for(j=0;j<30;j++)
{
    printf("\n");
}



    printf("mainetnant le role de deuxieme joueur\n");
    scanf("%d",&votre_nombre);


    while (nombreMystere != votre_nombre)
  {
      if(nombreMystere < votre_nombre)
      {
          printf("c'est moins!\n");
          scanf("%d",&votre_nombre);
          coup++;
      }
     else
      {
          printf("c'est plus!\n");
          scanf("%d",&votre_nombre);
          coup++;
      }
  }
  if (nombreMystere==votre_nombre)
      {
       printf("bravoo , vous avez trouve %d en %d coup \n\n\n",nombreMystere,coup) ;
       coup=1;
        printf("vous voulez faire une autre partie\n");
       printf("1-oui\n");
       printf("0-non\n");
    scanf("%d",&continuePartie);
      }

      }


} while(continuePartie);
if(continuePartie==0)
{
    printf("merci pour votre participation et nous esperons que vous reviendrez plus tard\n\n\n");
}


   }


