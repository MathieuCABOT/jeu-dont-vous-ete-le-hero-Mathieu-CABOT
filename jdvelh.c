#include <stdio.h>
#include <stdlib.h>
#include <string.h>


<<<<<<< Updated upstream
    int choix = 0;



        printf("\n");
        printf("\n");
        printf("[1] pour la destination 1\n");
        printf("[2] pour la destination 2\n");
      
    scanf("%d", &choix);

      if (choix == 1){

      		printf("destination 1");
      		printf("\n");
      }



      if (choix == 2){

      	  	printf("destination 1");
      		printf("\n");

      }
=======
//_______________________________________________________________________________________________________
//déclaration des variable

typedef struct chapitre chapitre;

    struct chapitre{
    	char lieuchap[1000];
    	char histoire[1000];
    	int id;

    };

	chapitre chap1 = {"la creuse","région de la france ou il n'y a rien, du coup bas y a rien a voir ici...", 1};
	chapitre chap2 = {"dans le poitou","région cool au moyen-age mais bon, au moyen-age quoi. Maintenant c un peut mort...", 2};
	chapitre chap3 = {"marseille","heuuuuuuuu...", 3};


int main(){

int choix;
int argentJoueur = 250;
int pvjoueur= 10;



//________________________________________________________________________________________________________________________________
//intro

        printf("tu entreprend la quete du graal.\n");
        printf("ou veut tu aller cherher en premier ??\n");
        printf("le voyage t'as couter 75 pieces d'or, il te reste donc %d pieces. ", argentJoueur );
        printf("et  %d point de vie.)", pvjoueur );
        printf("\n");
        printf("\n");
        printf("tapez [1] pour aller a %s", chap1.lieuchap );
        printf("\n");
        printf("tapez [2] pour aller a %s", chap2.lieuchap );
     	 printf("\n");
        printf("tapez [3] pour aller a %s", chap3.lieuchap );

    scanf("%d", &choix);

//________________________________________________________________________________________________________________________________
    	// chapitre1
	while (argentJoueur != 0){

      if (choix == chap1.id){

      		argentJoueur = argentJoueur - 75;

printf("_________________________________________________________________________________________________");
printf("\n");
printf("\n");

		printf("tu est arriver as %s", chap1.lieuchap );
		printf("\n");
		printf("%s", chap1.histoire );
		printf("\n");
      	printf("le voyage t'as couter 75 pieces d'or, il te reste donc %d pieces. ", argentJoueur );
      	printf("\n");
      	printf(" et tu as %d points de vie.", pvjoueur );
      	printf("\n");


printf("_________________________________________________________________________________________________");
printf("\n");

        printf("\n");
        printf("tapez [1] pour aller a %s", chap1.lieuchap );
        printf("\n");
        printf("tapez [2] pour aller a %s", chap2.lieuchap );
        printf("\n");
        printf("tapez [3] pour aller a %s", chap3.lieuchap );
		scanf("%d", &choix);
      }

//________________________________________________________________________________________________________________________________
      //chapitre2

      if (choix == chap2.id){

      	argentJoueur = argentJoueur - 75;


printf("_________________________________________________________________________________________________");
printf("\n");
printf("\n");

		printf("tu est arriver as %s", chap2.lieuchap );
		printf("\n");
		printf("%s", chap2.histoire );
		printf("\n");
      	printf("tu as %d pieces d'or", argentJoueur );
      	printf("\n");
      	printf(" et tu as %d points de vie.", pvjoueur );
      	printf("\n");

	

printf("_________________________________________________________________________________________________");
printf("\n");


        printf("\n");
        printf("tapez [1] pour aller a %s", chap1.lieuchap );
        printf("\n");
        printf("tapez [2] pour aller a %s", chap2.lieuchap );
		printf("\n");
		printf("tapez [3] pour aller a %s", chap3.lieuchap );
		scanf("%d", &choix);
      }

//________________________________________________________________________________________________________________________________
      //chapitre3

      if (choix == chap3.id){

      	argentJoueur = argentJoueur - 75;


printf("_________________________________________________________________________________________________");
printf("\n");
printf("\n");

		printf("tu est arriver as %s", chap3.lieuchap );
		printf("\n");
		printf("%s", chap3.histoire );
		printf("\n");
      	printf("tu as %d pieces d'or", argentJoueur );
      	printf("\n");
      	printf(" et tu as %d points de vie.", pvjoueur );
      	printf("\n");

printf("_________________________________________________________________________________________________");
printf("\n");


        printf("\n");
        printf("tapez [1] pour aller a %s", chap1.lieuchap );
        printf("\n");
        printf("tapez [2] pour aller a %s", chap2.lieuchap );
		printf("\n");
		printf("tapez [3] pour aller a %s", chap3.lieuchap );
		scanf("%d", &choix);
      }

	}


return 0;
}
>>>>>>> Stashed changes
