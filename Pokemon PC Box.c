/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

typedef struct
{
    char realname[12];      /*real name of the Pokemon (i.e., Shedinja) */
    char nickname[12];      /*nickname given to a Pokemon (i.e., Alexander). Will only print out real name if the real name and nickname are equal */
    char type1[8];      /*primary type of Pokemon (i.e., Bug) */
    char type2[8];      /*secondary type of Pokemon (if any) (i.e., Ghost). Will only print out primary type if primary and secondary types are the same. */
    char heldItem[20];      /*Item that is held by the Pokemon (i.e., Safety Goggles) */
    char ability[20];       /*Special ability that the Pokemon has (usually during battle) (i.e., Wonder Guard) */
    char move1[30];     /*First battle move of Pokemon (i.e., Swords Dance) */
    char move2[30];     /*Second battle move of Pokemon (i.e., X-Scissor) */
    char move3[30];     /*Third battle move of Pokemon (i.e., Shadow Claw) */
    char move4[30];     /*Fourth battle move of Pokemon (i.e., Confuse Ray) */
    char move1type[8];     /*Type of the first battle move (In this case, it's "Normal" because Swords Dance, the first move, is a Normal-type move) */
    char move2type[8];      /*Type of the second battle move (In this caee, it's "Bug" because X-Scissor, the second move, is a Bug-type move) */
    char move3type[8];      /*Type of the third battle move (In this case, it's "Ghost" because Shadow Claw, the third move, is a Ghost-type move) */
    char move4type[8];      /*Type of the fourth battle move (In this case, it's "Ghost" because Confuse Ray, the fourth move, is a Ghost-type move) */
    int level;          /*Numerical level of Pokemon (always set at maximum of 100 and minimum of 1) */
    int hp;         /*HP stat of Pokemon, just like in the mainline Pokemon games */
    int attack;         /*Attack stat of Pokemon, just like in the mainline Pokemon games */
    int defense;            /*Defense stat of Pokemon, just like in the mainline games */
    int specialAttack;      /*Special attack stat of Pokemon, just like in the mainline games */
    int specialDefense;     /*Special defense stat of Pokemon, just like in the mainline games */
    int speed;          /*Speed stat of Pokemon, just like in the mainline games */
}
Pokemon;            /*Pokemon is the name of the struct and it defines the attributes of a Pokemon */

int main()          /*Main method */
{
    int PCBoxNum;           /*Number of PC boxes required to store Pokemon */
    int PCBoxPokemonNum;        /*Number of Pokemon in the current PC Box */
    int i;
    int j;
    Pokemon attributes[i]; /*Combines all of what was defined in Pokemon struct into attributes. This was thanks to stackoverflow.com*/
    printf("\n----------------------------------------------");
    printf("\n*  Welcome to this town's Pokemon Center PC  *");
    printf("\n----------------------------------------------");
    printf("\nNumber of PC Boxes: ");
    scanf("%i", &PCBoxNum);

    for (j = 1; j <= PCBoxNum; j++)
    {
      printf("PC Box %d \n", j);
      printf("Number of Pokemon: ");
      scanf("%i", &PCBoxPokemonNum);

      for (i = 1; i <= PCBoxPokemonNum; i++)
        {
           printf("Pokemon %d \n", i);
           printf("Real name: ");
           scanf("%12s", attributes[i].realname);
           printf("\nNickname: ");
           scanf("%12s", attributes[i].nickname);
           printf("\nType: ");
           scanf("%8s", attributes[i].type1);
           scanf("%8s", attributes[i].type2);
           printf("\nHeld Item: ");
           scanf("%20s", attributes[i].heldItem);
           printf("\nAbility: ");
           scanf("%20s", attributes[i].ability);
           printf("\nMove 1: ");
           scanf("%8s", attributes[i].move1type);
           scanf("%30s", attributes[i].move1);
           printf("\nMove 2: ");
           scanf("%8s", attributes[i].move2type);
           scanf("%30s", attributes[i].move2);
           printf("\nMove 3: ");
           scanf("%8s", attributes[i].move3type);
           scanf("%30s", attributes[i].move3);
           printf("\nMove 4: ");
           scanf("%8s", attributes[i].move4type);
           scanf("%30s", attributes[i].move4);
           printf("\nLevel: ");
           scanf("%i", &attributes[i].level);
           printf("\nHP: ");
           scanf("%i", &attributes[i].hp);
           printf("\nAttack: ");
           scanf("%i", &attributes[i].attack);
           printf("\nDefense: ");
           scanf("%i", &attributes[i].defense);
           printf("\nSpecial Attack: ");
           scanf("%i", &attributes[i].specialAttack);
           printf("\nSpecial Defense: ");
           scanf("%i", &attributes[i].specialDefense);
           printf("\nSpeed: ");
           scanf("%i", &attributes[i].speed);


           if (attributes[i].level >= 1 && attributes[i].level <= 100)
           {
            printf("\n*************************************");
            printf("\n           Characteristics           ");
            printf("\n*************************************");
           printf("\nReal Name: %s", attributes[i].realname),
           printf("\nNickname: %s", attributes[i].nickname);
           printf("\nTypes: %s %s", attributes[i].type1, attributes[i].type2);
           printf("\nType: %s", attributes[i].type1);
           printf("\n**************************************");
           printf("\n             Battle Stats             ");
           printf("\n**************************************");
           printf("\nLevel: %i", attributes[i].level);
           printf("\nHP: %i", attributes[i].hp);
           printf("\nAttack: %i", attributes[i].attack);
           printf("\nDefense: %i", attributes[i].defense);
           printf("\nSpecial Attack: %i", attributes[i].specialAttack);
           printf("\nSpecial Defense: %i", attributes[i].specialDefense);
           printf("\nSpeed: %i", attributes[i].speed);
           printf("\nAbility: %s", attributes[i].ability);
           printf("\nHeld Item: %s", attributes[i].heldItem);
           printf("\n*****************************************");
           printf("\n                  Moveset                ");
           printf("\n*****************************************");
           printf("\n%s %s", attributes[i].move1type, attributes[i].move1);
           printf("\n%s %s", attributes[i].move2type, attributes[i].move2);
           printf("\n%s %s", attributes[i].move3type, attributes[i].move3);
           printf("\n%s %s", attributes[i].move4type, attributes[i].move4);
           printf("\n");

       }
       else
       {
         printf("ERROR! Level must be at minimum 1 and at maximum 100! Pokemon not registered!");
         printf("\n");

       }
      }
     if (j < PCBoxNum)
     {
       printf("Next PC Box \n");
     }
    }
    return 0;
}
