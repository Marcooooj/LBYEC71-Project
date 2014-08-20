/*Title: Our Quiz
Date Submitted: August 20, 2014
Submitted by: Antonio Louis Coronel
              Christian Marco Janairo
              Oliver Ian Ocampo
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

int nLife=5;
int Score=0;

void viewCategories();
void getCategories();
void getAstronomy();
void getInternet();
void getLiterature();
void getInstructions();
void getMovies();
void getMusic();
void getHistory();
void getPinoyculture();
void getTelevision();
void getVocabulary();
void getComputer();
void getGames();
void gethardware();
int getRandom(int nHigh);

//Main Program
main()
{
	char menu;
	
	while(1){
	system("cls");
	printf("\n");
	printf(" _________________                                                        \n");
	printf(" \\_______|_______/ \t    _    _  ____  __    ___  _____  __  __  ____      \n");
	printf("         |          \t   ( \\/\\/ )( ___)(  )  / __)(  _  )(  \\/  )( ___)  \n");
	printf("         |          \t    )    (  )__)  )(__( (__  )(_)(  )    (  )__)      \n");
	printf("        &&&         \t   (__/\\__)(____)(____)\\___)(_____)(_/\\/\\_)(____) \n");
	printf("       <o.o>        \t                                                    \n");
	printf("        \\-/        \t                         TO                           \n");
	printf("         W          \t   ___   __ __  ____        ___   __ __  ____  _____ \n");
	printf("        /|\\        \t  /   \\ |  |  ||    \\      /   \\ |  |  ||    ||     |\n");
	printf("       / | \\       \t |     ||  |  ||  D  )    |     ||  |  | |  | |__/  |\n");
	printf("      O  |  O       \t |  O  ||  |  ||    /     |  Q  ||  |  | |  | |   __|\n");
	printf("        / \\        \t |     ||  :  ||    \\     |     ||  :  | |  | |  /  |\n");
	printf("       /   \\       \t |     ||     ||  .  \\    |     ||     | |  | |     |\n");
	printf("      /     \\      \t  \\___/  \\__,_||__|\\_|     \\__,_| \\__,_||____||_____|\n");
	printf("     ()     ()     \n\n\n");
	printf("\t                                   [N]ew Game\n");
	printf("\t                                   [I]nstructions\n");
	printf("\t                                   [Q]uit\n");
	printf("\t                                   Enter Selection: ");	
	scanf("%c",&menu);
	
	{
                if (menu=='N' || menu=='n')
                  {
                      system("cls");
                      getCategories();
                  }
                else if (menu=='I' || menu=='i')
                  {
                      system("cls");
                      getInstructions();
                  }  
                else if (menu=='Q' || menu=='q')
                  {
                             system("cls");
                             printf("\a\n");
                             printf("\t\t        ``\n");
                             printf("\t\t      .0O1 .^\n");
                             printf("\t\t      u$ON=1\n");
                             printf("\t\t      z00BA|\n");
                             printf("\t\t     |..=~.\n");
                             printf("\t\t    ;s<'''\n");
                             printf("\t\t    NRX~=-`\n");
                             printf("\t\t    z0c^<x^                   G O O D B Y E !\n");
                             printf("\t\t    ~B0s~^`\n");
                             printf("\t\t     @@$H~'               See you again next time!\n");
                             printf("\t\t    n$0=XN;.`  \n" );
                             printf("\t\t   iBBB0vU1=~'`\n");
                             printf("\t\t   `$@00cRr`vu|\n");
                             printf("\t\t    FAHZugr-'\n");
                             printf("\t\t    ZZUFA@FI.`\n");
                             printf("\t\t   ;BRHv n$U^-\n");
                             printf("\t\t  `ARN1   ^@si\n");
                             printf("\t\t 'Onv~     01.' \n");
                             printf("\t\t cOqr      rs.`  \n");
                             printf("\t\t aUU`       u|` \n");
                             printf("\t\t`RO-        :.` \n");
                             printf("\t\tnn~`        -=.~|-`  \n");
                             printf("\t\t=1^'..`     `..`   \n");
                             Sleep(2300);
            				 exit(0);
                             Sleep(200);
                             
                  }
		getchar();
	    printf("\n");
	}
}
}

//Display Categories
void viewCategories()
{
	printf("\n");
	printf(" ............................................................................. \n");
	printf(" .      o   \\ o /  _ o        __|    \\ /     |__         o _  \\ o /   o      .\n");
	printf(" .     /|\\    |     /\\   __\\o   \\o    |    o/     o/__   /\\     |    /|\\     .\n");
	printf(" .     / \\   / \\   | \\  /) |    ( \\  /o\\  / )    |   (\\  / |   / \\   / \\     .\n");
	printf(" ............................................................................. \n\n");
	printf("  Remaining Lives/Life: %d \n", nLife);
	printf("  Score: %d\n\n", Score);
	printf("  Please choose your category from below \(if you wish to go back to the main \n  menu, type Z instead).");
	printf("\n\t  A - Astronomy");
	printf("\n\t  B - Computer Software");
	printf("\n\t  C - Games");
	printf("\n\t  D - Hardware and Gadgets");
	printf("\n\t  E - History");
	printf("\n\t  F - Literature");
	printf("\n\t  G - Movies");
	printf("\n\t  H - Music");
	printf("\n\t  I - Pinoy Culture");
	printf("\n\t  J - Television");
	printf("\n\t  K - The Internet");
	printf("\n\t  L - Vocabulary \n");
	printf("  Enter Selection: ");
}

//Game Play
void getCategories()
{
	char select;
	printf("Remaining Lives/Life: %d \n", nLife);
	printf("Score: %d\n\n", Score);
	while(nLife>0 && Score<35)
	{
		system("cls");
		viewCategories();
		scanf(" %c",&select);
		printf("\n\n");
		switch(select)	
		{
			case 'A':
			case 'a':		
				system("cls");
				printf(" ............................................................................. \n");
				printf(" .      o   \\ o /  _ o        __|    \\ /     |__         o _  \\ o /   o      .\n");
				printf(" .     /|\\    |     /\\   __\\o   \\o    |    o/     o/__   /\\     |    /|\\     .\n");
				printf(" .     / \\   / \\   | \\  /) |    ( \\  /o\\  / )    |   (\\  / |   / \\   / \\     .\n");
				printf(" ............................................................................. \n\n\n\n");
				printf("\t Loading Astronomy questions...\n\n\n");
				Sleep(1000);
				printf("\t 3... "); Sleep(1000);
				printf("\t 2... "); Sleep(1000);
				printf("\t 1...\n\n\n"); Sleep(1000);
				printf("\t Get Ready!"); Sleep(1000);
				printf("\n \n");
				Sleep(1000);
				getchar();
				getAstronomy();
				system("cls");
				break;
			case 'B':
			case 'b':
				system("cls");			
				printf(" ............................................................................. \n");
				printf(" .      o   \\ o /  _ o        __|    \\ /     |__         o _  \\ o /   o      .\n");
				printf(" .     /|\\    |     /\\   __\\o   \\o    |    o/     o/__   /\\     |    /|\\     .\n");
				printf(" .     / \\   / \\   | \\  /) |    ( \\  /o\\  / )    |   (\\  / |   / \\   / \\     .\n");
				printf(" ............................................................................. \n\n\n\n");
				printf("\t Loading Computer Software questions...\n\n\n");
				Sleep(1000);
				printf("\t 3... "); Sleep(1000);
				printf("\t 2... "); Sleep(1000);
				printf("\t 1...\n\n\n"); Sleep(1000);
				printf("\t Get Ready!"); Sleep(1000);
				printf("\n \n");
				Sleep(1000);
				getchar();
				getComputer();
				system("cls");
				break;	
			case 'C':
			case 'c':
				system("cls");			
				printf(" ............................................................................. \n");
				printf(" .      o   \\ o /  _ o        __|    \\ /     |__         o _  \\ o /   o      .\n");
				printf(" .     /|\\    |     /\\   __\\o   \\o    |    o/     o/__   /\\     |    /|\\     .\n");
				printf(" .     / \\   / \\   | \\  /) |    ( \\  /o\\  / )    |   (\\  / |   / \\   / \\     .\n");
				printf(" ............................................................................. \n\n\n\n");
				printf("\t Loading Games questions...\n\n\n");
				Sleep(1000);
				printf("\t 3... "); Sleep(1000);
				printf("\t 2... "); Sleep(1000);
				printf("\t 1...\n\n\n"); Sleep(1000);
				printf("\t Get Ready!"); Sleep(1000);
				printf("\n \n");
				Sleep(1000);
				getchar();
				getGames();
				system("cls");
				break;			
			case 'D':
			case 'd':
				system("cls");			
				printf(" ............................................................................. \n");
				printf(" .      o   \\ o /  _ o        __|    \\ /     |__         o _  \\ o /   o      .\n");
				printf(" .     /|\\    |     /\\   __\\o   \\o    |    o/     o/__   /\\     |    /|\\     .\n");
				printf(" .     / \\   / \\   | \\  /) |    ( \\  /o\\  / )    |   (\\  / |   / \\   / \\     .\n");
				printf(" ............................................................................. \n\n\n\n");
				printf("\t Loading Hardware and Gadgets questions...\n\n\n");
				Sleep(1000);
				printf("\t 3... "); Sleep(1000);
				printf("\t 2... "); Sleep(1000);
				printf("\t 1...\n\n\n"); Sleep(1000);
				printf("\t Get Ready!"); Sleep(1000);
				printf("\n \n");
				Sleep(1000);
				getchar();
				gethardware();
				system("cls");
				break;
			case 'E':
			case 'e':
				system("cls");		
				printf(" ............................................................................. \n");
				printf(" .      o   \\ o /  _ o        __|    \\ /     |__         o _  \\ o /   o      .\n");
				printf(" .     /|\\    |     /\\   __\\o   \\o    |    o/     o/__   /\\     |    /|\\     .\n");
				printf(" .     / \\   / \\   | \\  /) |    ( \\  /o\\  / )    |   (\\  / |   / \\   / \\     .\n");
				printf(" ............................................................................. \n\n\n\n");
				printf("\t Loading History questions...\n\n\n");
				Sleep(1000);
				printf("\t 3... "); Sleep(1000);
				printf("\t 2... "); Sleep(1000);
				printf("\t 1...\n\n\n"); Sleep(1000);
				printf("\t Get Ready!"); Sleep(1000);
				printf("\n \n");
				Sleep(1000);
				getchar();
				getHistory();
				system("cls");
				break;
			case 'F':
			case 'f':
				system("cls");
				printf(" ............................................................................. \n");
				printf(" .      o   \\ o /  _ o        __|    \\ /     |__         o _  \\ o /   o      .\n");
				printf(" .     /|\\    |     /\\   __\\o   \\o    |    o/     o/__   /\\     |    /|\\     .\n");
				printf(" .     / \\   / \\   | \\  /) |    ( \\  /o\\  / )    |   (\\  / |   / \\   / \\     .\n");
				printf(" ............................................................................. \n\n\n\n");			
				printf("\t Loading Literature questions...\n\n\n");
				Sleep(1000);
				printf("\t 3... "); Sleep(1000);
				printf("\t 2... "); Sleep(1000);
				printf("\t 1...\n\n\n"); Sleep(1000);
				printf("\t Get Ready!"); Sleep(1000);
				printf("\n \n");
				Sleep(1000);
				getchar();
				getLiterature();
				system("cls");
				break;
			case 'G':
			case 'g':
				system("cls");			
				printf(" ............................................................................. \n");
				printf(" .      o   \\ o /  _ o        __|    \\ /     |__         o _  \\ o /   o      .\n");
				printf(" .     /|\\    |     /\\   __\\o   \\o    |    o/     o/__   /\\     |    /|\\     .\n");
				printf(" .     / \\   / \\   | \\  /) |    ( \\  /o\\  / )    |   (\\  / |   / \\   / \\     .\n");
				printf(" ............................................................................. \n\n\n\n");
				printf("\t Loading Movies questions...\n\n\n");
				Sleep(1000);
				printf("\t 3... "); Sleep(1000);
				printf("\t 2... "); Sleep(1000);
				printf("\t 1...\n\n\n"); Sleep(1000);
				printf("\t Get Ready!"); Sleep(1000);
				printf("\n \n");
				Sleep(1000);
				getchar();
				getMovies();
				system("cls");
				break;
			case 'H':
			case 'h':
				system("cls");
				printf(" ............................................................................. \n");
				printf(" .      o   \\ o /  _ o        __|    \\ /     |__         o _  \\ o /   o      .\n");
				printf(" .     /|\\    |     /\\   __\\o   \\o    |    o/     o/__   /\\     |    /|\\     .\n");
				printf(" .     / \\   / \\   | \\  /) |    ( \\  /o\\  / )    |   (\\  / |   / \\   / \\     .\n");
				printf(" ............................................................................. \n\n\n\n");			
				printf("\t Loading Music questions...\n\n\n");
				Sleep(1000);
				printf("\t 3... "); Sleep(1000);
				printf("\t 2... "); Sleep(1000);
				printf("\t 1...\n\n\n"); Sleep(1000);
				printf("\t Get Ready!"); Sleep(1000);
				printf("\n \n");
				Sleep(1000);
				getchar();
				getMusic();
				system("cls");
				break;
			case 'I':
			case 'i':	
				system("cls");
				printf(" ............................................................................. \n");
				printf(" .      o   \\ o /  _ o        __|    \\ /     |__         o _  \\ o /   o      .\n");
				printf(" .     /|\\    |     /\\   __\\o   \\o    |    o/     o/__   /\\     |    /|\\     .\n");
				printf(" .     / \\   / \\   | \\  /) |    ( \\  /o\\  / )    |   (\\  / |   / \\   / \\     .\n");
				printf(" ............................................................................. \n\n\n\n");		
				printf("\t Loading Pinoy Culture questions...\n\n\n");
				Sleep(1000);
				printf("\t 3... "); Sleep(1000);
				printf("\t 2... "); Sleep(1000);
				printf("\t 1...\n\n\n"); Sleep(1000);
				printf("\t Get Ready!"); Sleep(1000);
				printf("\n \n");
				Sleep(1000);
				getchar();
				getPinoyculture();
				system("cls");
				break;
			case 'J':
			case 'j':			
				system("cls");
				printf(" ............................................................................. \n");
				printf(" .      o   \\ o /  _ o        __|    \\ /     |__         o _  \\ o /   o      .\n");
				printf(" .     /|\\    |     /\\   __\\o   \\o    |    o/     o/__   /\\     |    /|\\     .\n");
				printf(" .     / \\   / \\   | \\  /) |    ( \\  /o\\  / )    |   (\\  / |   / \\   / \\     .\n");
				printf(" ............................................................................. \n\n\n\n");
				printf("\t Loading Television questions...\n\n\n");
				Sleep(1000);
				printf("\t 3... "); Sleep(1000);
				printf("\t 2... "); Sleep(1000);
				printf("\t 1...\n\n\n"); Sleep(1000);
				printf("\t Get Ready!"); Sleep(1000);
				printf("\n \n");
				Sleep(1000);
				getchar();
				getTelevision();
				system("cls");
				break;
			case 'K':
			case 'k':
				system("cls");	
				printf(" ............................................................................. \n");
				printf(" .      o   \\ o /  _ o        __|    \\ /     |__         o _  \\ o /   o      .\n");
				printf(" .     /|\\    |     /\\   __\\o   \\o    |    o/     o/__   /\\     |    /|\\     .\n");
				printf(" .     / \\   / \\   | \\  /) |    ( \\  /o\\  / )    |   (\\  / |   / \\   / \\     .\n");
				printf(" ............................................................................. \n\n\n\n");		
				printf("\t Loading The Internet questions...\n\n\n");
				Sleep(1000);
				printf("\t 3... "); Sleep(1000);
				printf("\t 2... "); Sleep(1000);
				printf("\t 1...\n\n\n"); Sleep(1000);
				printf("\t Get Ready!"); Sleep(1000);
				printf("\n \n");
				Sleep(1000);
				getchar();
				getInternet();
				system("cls");
				break;
			case 'L':
			case 'l':			
				system("cls");
				printf(" ............................................................................. \n");
				printf(" .      o   \\ o /  _ o        __|    \\ /     |__         o _  \\ o /   o      .\n");
				printf(" .     /|\\    |     /\\   __\\o   \\o    |    o/     o/__   /\\     |    /|\\     .\n");
				printf(" .     / \\   / \\   | \\  /) |    ( \\  /o\\  / )    |   (\\  / |   / \\   / \\     .\n");
				printf(" ............................................................................. \n\n\n\n");
				printf("\t Loading Vocabulary questions...\n\n\n");
				Sleep(1000);
				printf("\t 3... "); Sleep(1000);
				printf("\t 2... "); Sleep(1000);
				printf("\t 1...\n\n\n"); Sleep(1000);
				printf("\t Get Ready!"); Sleep(1000);
				printf("\n \n");
				Sleep(1000);
				getchar();
				getVocabulary();
				system("cls");
				break;
			case 'z':
			case 'Z':
				getchar();
				main();
				break;
			default:
				printf("\n\n\a\t Invalid selection, please try again...");
				Sleep(1500);
				system("cls");
				break;
		}
		getchar();
		printf("\n");
		system("cls");
	}
	while(nLife==0)
		{
			printf("\n\n");
			printf("           _____          __  __ ______    ______      ________ _____   \n");
			printf("          / ____|   /\\   |  \\/  |  ____|  / __ \\ \\    / /  ____|  __ \\  \n");
			printf("         | |  __   /  \\  | \\  / | |__    | |  | \\ \\  / /| |__  | |__) | \n");
			printf("         | | |_ | / /\\ \\ | |\\/| |  __|   | |  | |\\ \\/ / |  __| |  _  /  \n");
			printf("         | |__| |/ ____ \\| |  | | |____  | |__| | \\  /  | |____| | \\ \\  \n");
			printf("          \\_____/_/    \\_\\_|  |_|______|  \\____/   \\/   |______|_|  \\_\\ \n");
			printf("\n");
			printf("\n\n");
			printf("        _                                                 _.--.    __  _    \n");
			printf("       | |                                               ) \\   `.,'  \\| | \n");
			printf("       | |                                            (`'       |     : |   \n");
			printf("       | |                             _..-.-.-.-._    )     ,),'.    | |   \n");
			printf("       | |('.                    __..-' ) ) ) ) ) )``-'    _.-| \\     | |  \n");
			printf("       | | \\ `...------''``--'''' \\   )_____....---     ,''           ; | \n");
			printf("       | |_(_..-......_________..._,-'_,..__....____..-'.._________..'| |   \n");
			printf("       | |____________________________________________________________| |   \n");
			printf("     __|_|____________________________________________________________|_|__ \n\n\n");
		system("pause");
		nLife=5;
		Score=0;
		//exit(0);
		getchar();
		main();
		}
	//wINNING
	while(nLife>0 && Score>34)
	{
		system("cls");
		printf("\n\n");
		printf("             .----------------------------------------------------. \n");
		printf("             |                                                    | \n");
		printf("             |       _  .-\"-.  .-\"-. .--.    _   _      _   ____  | \n");
		printf("             |    ,'` | | ._ `.| ._ \\|  /  ,' '\\| | _ .' ) |   _|_|__ \n");
		printf("            _|_  / /| | | | \\ '| | \\ | ;  / ., || || || ;  |  |_(]___`\\ \n");
		printf("          /___[)' | | | | '-`/ | '-`/| | / /_| || || | \\ `\\|  '(]____ ' \n");
		printf("         | ____[) '-' | | |-'  | .-' | |/      || `' |  ;  |  |\"(]___ | \n");
		printf("         ; ___[)| .-. | | |    | |   | '-./`|  ||    | /  /|  |__(]_ / \n");
		printf("          \\ _[) |_| \\_' '_|    ._|   '---'  '--'`.__.'(_,' |_____||-` \n");
		printf("           `-|                                                    | \n");
		printf("             '----------------------------------------------------' \n\n");
		printf("                          C O N G R A T U L A T I O N S              \n\n");
		printf("                                      Y O U                          \n\n");
		printf("                            W O N   T H E   G A M E !                \n\n\n");
		Sleep(2000);
		system("pause");
		nLife=5;
		Score=0;
		getchar();
		main();
	}
}

//Astronomy Questions
void getAstronomy()
{
	int random;
	int qno=1;
	char ans;
	
	//EASY LEVEL
	while(nLife>0 && qno<=2 && Score<35)
	{
	system("cls");
	printf("\nDifficulty: EASY");
    printf("\nQuestion No.: %d\n", qno);
    printf("Remaining Lives/Life: %d\n", nLife);
    printf("Score: %d\n", Score);
	printf("\n \n");
	random = getRandom(8);
	
	switch (random)
	{
		case 1:
		{ 
			printf("When the Earth is farthest from the Sun, what season is it in the Northern Hemisphere? \n");
			printf("[a]Autumn \n");
			printf("[b]Winter \n");
			printf("[c]Spring \n");
			printf("[d]Summer \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='d' or ans=='D')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score++;
				qno++;
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
		}
		case 2:
			{
			printf("Triton, Neptune's moon, has an ocean made of a liquid. What is this liquid? \n");
			printf("[a] Carbon Dioxide \n");
			printf("[b] Nitrogen \n");
			printf("[c] Bromine \n");
			printf("[d] Gallium \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='b' or ans=='B')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score++;
				qno++;
				}
			else 
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
		case 3:
			{
			printf("How long is one Mercurian year? \n");
			printf("[a] 78 days \n");
			printf("[b] 83 days \n");
			printf("[c] 88 days \n");
			printf("[d] 93 days \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='c' or ans=='C')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score++;
				qno++;
				}
			else 
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
		case 4:
			{
			printf("At any time we may describe the position of an inferior planet by the angle it makes with the Sun as seen from the Earth. This angle is called what? \n");
			printf("[a] Declination angle \n");
			printf("[b] Elongation \n");
			printf("[c] Reflective angle \n");
			printf("[d] Compression \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='b' or ans=='B')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score++;
				qno++;
				}
			else 
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
		case 5:
			{
			printf("What gas is the main component of the atmosphere of Mars? \n");
			printf("[a] Carbon Monoxide \n");
			printf("[b] Carbon Dioxide \n");
			printf("[c] Nitrogen Monoxide \n");
			printf("[d] Sulfur Dioxide \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='b' or ans=='B')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score++;
				qno++;
				}
			else 
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
			case 6:
			{
			printf("Hercules is a constellation which is commonly viewed in the summer in North America.  In which of the seasons is the constellation Pegasus normally viewed? \n");
			printf("[a] Autumn \n");
			printf("[b] Winter \n");
			printf("[c] Spring \n");
			printf("[d] Summer \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='a' or ans=='A')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score++;
				qno++;
				}
			else 
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
				break;
			}
			case 7:
			{
			printf("Is a sunspot hotter, cooler, or about the same temperature as the region around it? \n");
			printf("[a] Hotter \n");
			printf("[b] Cooler \n");
			printf("[c] Same temperature \n");
			printf("[d] Cannot be determined \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='b' or ans=='B')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score++;
				qno++;
				}
			else 
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
				break;
			}
			case 8:
			{
			printf("Laika, the first living creature to orbit the earth was what type of animal? \n");
			printf("[a] Monkey \n");
			printf("[b] Sheep \n");
			printf("[c] Dog \n");
			printf("[d] Cat \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='c' or ans=='C')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score++;
				qno++;
				}
			else 
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
	}
	getchar();
	}

	
	//AVERAGE LEVEL
	while(nLife>0 && (qno>=3 && qno<=4 ) && Score<35)
	{
	system("cls");
	printf("\nDifficulty: AVERAGE");
    printf("\nQuestion No.: %d\n", qno);
    printf("Remaining Lives/Life: %d\n", nLife);
    printf("Score: %d\n", Score);
	printf("\n \n");
	random = getRandom(8);
	
	switch (random)
	{
		case 1:
		{ 
			printf("Technically, the reflecting power of an object is defined as the ratio of the radiation reflected from an object to the total amount incident upon the object.  What term is used in astronomy to indicate the reflecting power of an object? \n");
			printf("[a] Albedo \n");
			printf("[b] Promiscuity \n");
			printf("[c] Mirror Phenomenon \n");
			printf("[d] Ascarmis \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='a' or ans=='A')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=2;
				qno++;
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
		}
		case 2:
			{
			printf("What is the name given to very bright meteors or bolides? \n");
			printf("[a] Super meteors \n");
			printf("[b] Fire meteors \n");
			printf("[c] Fireballs \n");
			printf("[d] Ultra mete0rs \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='c' or ans=='C')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=2;
				qno++;
				}
			else 
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
		case 3:
			{
			printf("The rapidly moving stream of charged particles that is being driven away from the Sun is known as what? \n");
			printf("[a] Solar Wind \n");
			printf("[b] Solar Flare \n");
			printf("[c] Sunspot Effect \n");
			printf("[d] Coriolis effect \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='a' or ans=='A')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=2;
				qno++;
				}
			else 
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
		case 4:
			{
			printf("Who was the first man to classify stars according to their brightness? \n");
			printf("[a] Erastothenes \n");
			printf("[b] Hipparchus \n");
			printf("[c] Ptolemy \n");
			printf("[d] Plato \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='b' or ans=='B')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=2;
				qno++;
				}
			else 
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
		case 5:
			{
			printf("Which unlucky Apollo lunar landing was canceled after an oxygen tank exploded? \n");
			printf("[a] Apollo 10 \n");
			printf("[b] Apollo 11 \n");
			printf("[c] Apollo 12 \n");
			printf("[d] Apollo 13 \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='d' or ans=='D')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=2;
				qno++;
				}
			else 
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
			case 6:
			{
			printf("What do we call the path in the sky that the sun appears to traverse over the course of a year? \n");
			printf("[a] Helioaxis \n");
			printf("[b] Helioptic cycle \n");
			printf("[c] Ecliptic \n");
			printf("[d] Eclipsis \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='c' or ans=='C')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=2;
				qno++;
				}
			else 
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
			case 7:
			{
			printf("What is the biggest asteroid known? \n");
			printf("[a] Y-20134 \n");
			printf("[b] Hydra \n");
			printf("[c] Ceres \n");
			printf("[d] Marga \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='c' or ans=='C')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=2;
				qno++;
				}
			else 
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
			case 8:
			{
			printf("What name was given to the series of two-man U.S. space missions undertaken in the mid 1960's? \n");
			printf("[a] Gemini \n");
			printf("[b] Apollo \n");
			printf("[c] Voyager \n");
			printf("[d] No space missions were done during that period \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='a' or ans=='A')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=2;
				qno++;
				}
			else 
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}

	}
	getchar();
	}
	
	//HARD LEVEL
	while(nLife>0 && (qno>=5 && qno<=6)&& Score<35)
	{
	system("cls");
	printf("\nDifficulty: HARD");
    printf("\nQuestion No.: %d\n", qno);
    printf("Remaining Lives/Life: %d\n", nLife);
    printf("Score: %d\n", Score);
	printf("\n \n");
	random = getRandom(8);
	
	switch (random)
	{
		case 1:
		{ 
			printf("The time interval between two successive occurrences of a specific type of alignment of a planet (or the moon) with the sun and the earth is referred to as? \n");
			printf("[a] Synoptic Period \n");
			printf("[b] Ecliptic Period \n");
			printf("[c] Horcussian Period \n");
			printf("[d] Synodic Period \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='d' or ans=='D')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=3;
				qno++;
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
		}
		case 2:
			{
			printf("The brightest star in this constellation is Vega.  In which constellation can Vega be found? \n");
			printf("[a] Hydra \n");
			printf("[b] Olga \n");
			printf("[c] Ursa \n");
			printf("[d] Lyra \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='d' or ans=='D')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=3;
				qno++;
				}
			else 
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
		case 3:
			{
			printf("Beads of light visible around the rim of the moon at the beginning and end of a total solar eclipse are called what? \n");
			printf("[a] Baily's Beads \n");
			printf("[b] Fallucius' Beads \n");
			printf("[c] XY Beads \n");
			printf("[d] Estopheric Beads \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='a' or ans=='A')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=3;
				qno++;
				}
			else 
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
		case 4:
			{
			printf("Who was the first black American astronaut in space? \n");
			printf("[a] McDonald \n");
			printf("[b] Bluford \n");
			printf("[c] Smith \n");
			printf("[d] Laver \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='b' or ans=='B')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=3;
				qno++;
				}
			else 
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
		case 5:
			{
			printf("How long is a sunspot cycle? \n");
			printf("[a] 10.5 years \n");
			printf("[b] 11 years \n");
			printf("[c] 11.5 years \n");
			printf("[d] 12 years \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='b' or ans=='B')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=3;
				qno++;
				}
			else 
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
			case 6:
			{
			printf("The universe is estimated to be between ten and twenty billion years old. This estimate is based on the value of which constant? \n");
			printf("[a] Hubble Constant \n");
			printf("[b] Kepler's Constant \n");
			printf("[c] Planck's Constant \n");
			printf("[d] Gravitational Constant \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='a' or ans=='A')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=3;
				qno++;
				}
			else 
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
			case 7:
			{
			printf("What is spectral line splitting due to the influence of magnetic fields? \n");
			printf("[a] Sprectronomy \n");
			printf("[b] Zeeman Effect \n");
			printf("[c] Collusion Phenomenon \n");
			printf("[d] Arzius Phenomenon \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='b' or ans=='B')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=3;
				qno++;
				}
			else 
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
			case 8:
			{
			printf("The brightest star in this constellation is Vega.  In which constellation can Vega be found? \n");
			printf("[a] Heliopheric Boundary \n");
			printf("[b] Corona \n");
			printf("[c] Alzherius' Free Space \n");
			printf("[d] Heliopause \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='d' or ans=='D')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=3;
				qno++;
				}
			else 
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
	}
	getchar();
	}
	
	//ALMOST IMPOSSIBLE
	while(nLife>0 && qno==7 && Score<35)
	{
	system("cls");
	printf("\nDifficulty: ALMOST IMPOSSIBLE");
    printf("\nQuestion No.: %d\n", qno);
    printf("Remaining Lives/Life: %d\n", nLife);
    printf("Score: %d\n", Score);
	printf("\n \n");
	random = getRandom(4);
	
	switch (random)
	{
		case 1:
		{ 
			printf("What is the orbital speed of Jupiter? \n");
			printf("[a] 35 KM/S \n");
			printf("[b] 29.8 KM/S \n");
			printf("[c] 13.1 KM/S \n");
			printf("[d] 5.43 KM/S \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='c' or ans=='C')
				{
				printf("\n\nYOU GOT IT RIGHT! \n Please choose your next category. \n");
				Sleep(1000);
				Score+=5;
				nLife++;
				getCategories();
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
		}
		case 2:
			{
			printf("The extraterrestrial impact hypothesis of dinosaur extinction is based on finding anomalously high concentrations of a certain element at the geological boundary between the Cretaceous and Tertiary periods.  What is the name of this element which was found? \n");
			printf("[a] Vanadium \n");
			printf("[b] Iridium \n");
			printf("[c] Ytterbium \n");
			printf("[d] Niobium \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='b' or ans=='B')
				{
				printf("\n\nYOU GOT IT RIGHT! \nPlease choose your next category. \n");
				Sleep(1000);
				Score+=5;
				nLife++;
				getCategories();
				}
			else 
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
		case 3:
			{
			printf("What device first proved that Earth rotates on its axis? \n");
			printf("[a] Sundial \n");
			printf("[b] Homodyne Seismograph \n");
			printf("[c] Harry Paul Sprain's Perpetual Motion Device \n");
			printf("[d] Foucault Pendulum \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='d' or ans=='D')
				{
				printf("\n\nYOU GOT IT RIGHT! \n Please choose your next category. \n");
				Sleep(1000);
				Score+=5;
				nLife++;
				getCategories();
				}
			else 
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
		case 4:
			{
			printf("How many people have set foot on the Moon? \n");
			printf("[a] Eight \n");
			printf("[b] Twelve \n");
			printf("[c] Fifteen \n");
			printf("[d] Sixteen \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='b' or ans=='B')
				{
				printf("\n\nYOU GOT IT RIGHT! \n Please choose your next category. \n");
				Sleep(1000);
				Score+=5;
				nLife++;
				getCategories();
				}
			else 
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}

	}
	getchar();
	}
	
	//Winning
	while(nLife>0 && Score>34)
	{
		system("cls");
		printf("\n\n");
		printf("             .----------------------------------------------------. \n");
		printf("             |                                                    | \n");
		printf("             |       _  .-\"-.  .-\"-. .--.    _   _      _   ____  | \n");
		printf("             |    ,'` | | ._ `.| ._ \\|  /  ,' '\\| | _ .' ) |   _|_|__ \n");
		printf("            _|_  / /| | | | \\ '| | \\ | ;  / ., || || || ;  |  |_(]___`\\ \n");
		printf("          /___[)' | | | | '-`/ | '-`/| | / /_| || || | \\ `\\|  '(]____ ' \n");
		printf("         | ____[) '-' | | |-'  | .-' | |/      || `' |  ;  |  |\"(]___ | \n");
		printf("         ; ___[)| .-. | | |    | |   | '-./`|  ||    | /  /|  |__(]_ / \n");
		printf("          \\ _[) |_| \\_' '_|    ._|   '---'  '--'`.__.'(_,' |_____||-` \n");
		printf("           `-|                                                    | \n");
		printf("             '----------------------------------------------------' \n\n");
		printf("                          C O N G R A T U L A T I O N S              \n\n");
		printf("                                      Y O U                          \n\n");
		printf("                            W O N   T H E   G A M E !                \n\n\n");
		Sleep(2000);
		system("pause");
		nLife=5;
		Score=0;
		//exit(0);
		getchar();
		main();
	}
}

//Internet Questions
void getInternet()
{
int random;
//int i;
int qno=1;
char ans;

//EASY LEVEL
while(nLife>0 && qno<=2 && Score<35)
{
system("cls");
printf("\nDifficulty: EASY");
    printf("\nQuestion No.: %d\n", qno);
    printf("Remaining Lives/Life: %d\n", nLife);
    printf("Score: %d\n", Score);
printf("\n \n");
random = getRandom(8);

switch (random)
{
case 1:
{ 
printf("What does 'www' stand for?\n");
printf("[a]Web World Wide \n");
printf("[b]Wide World Web \n");
printf("[c]World Wide Web \n");
printf("[d]Web Wide World \n");
printf("Answer: ");
scanf("%c",&ans);
if (ans=='c' or ans=='C')
{
printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
Sleep(1000);
Score++;
qno++;
}
else
{
printf("\n  SORRY, YOU'RE WRONG \n");
Sleep(2000);
nLife--;
Sleep(1000);
system("cls");
getCategories();
}
//system("cls");
break;
}
case 2:
{
printf("What popular video sharing website has over 6 billion hours of videos watched per month?\n");
printf("[a] Netflix \n");
printf("[b] Youtube \n");
printf("[c] Hulu \n");
printf("[d] Vimeo \n");
printf("Answer: ");
scanf("%c",&ans);
if (ans=='b' or ans=='B')
{
printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
Sleep(1000);
Score++;
qno++;
}
else 
{
printf("\n  SORRY, YOU'RE WRONG \n");
Sleep(2000);
nLife--;
Sleep(1000);
system("cls");
getCategories();
}
//system("cls");
break;
}
case 3:
{
printf("As of 2014, what website has the most daily visitors?\n");
printf("[a] Yahoo.com \n");
printf("[b] Google.com \n");
printf("[c] Wikipedia.org\n");
printf("[d] Linkedin.com \n");
printf("Answer: ");
scanf("%c",&ans);
if (ans=='b' or ans=='B')
{
printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
Sleep(1000);
Score++;
qno++;
}
else 
{
printf("\n  SORRY, YOU'RE WRONG \n");
Sleep(2000);
nLife--;
Sleep(1000);
system("cls");
getCategories();
}
//system("cls");
break;
}
case 4:
{
printf("What website is famous for its 'like button'? \n");
printf("[a] Pinterest \n");
printf("[b] Bing \n");
printf("[c] Twitter \n");
printf("[d] Facebook \n");
printf("Answer: ");
scanf("%c",&ans);
if (ans=='d' or ans=='D')
{
printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
Sleep(1000);
Score++;
qno++;
}
else 
{
printf("\n  SORRY, YOU'RE WRONG \n");
Sleep(2000);
nLife--;
Sleep(1000);
system("cls");
getCategories();
}
//system("cls");
break;
}
case 5:
{
printf("What term is used to call the short messages sent through Twitter.com?\n");
printf("[a] Tweet \n");
printf("[b] Twit \n");
printf("[c] Twitter \n");
printf("[d] Twitty \n");
printf("Answer: ");
scanf("%c",&ans);
if (ans=='a' or ans=='A')
{
printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
Sleep(1000);
Score++;
qno++;
}
else 
{
printf("\n  SORRY, YOU'RE WRONG \n");
Sleep(2000);
nLife--;
Sleep(1000);
system("cls");
getCategories();
}
//system("cls");
break;
}
case 6:
{
printf("Internet term for a self-portrait? \n");
printf("[a] Selfie \n");
printf("[b] SelfPic \n");
printf("[c] Selfishie\n");
printf("[d] Selfer \n");
printf("Answer: ");
scanf("%c",&ans);
if (ans=='a' or ans=='A')
{
printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
Sleep(1000);
Score++;
qno++;
}
else 
{
printf("\n  SORRY, YOU'RE WRONG \n");
Sleep(2000);
nLife--;
Sleep(1000);
system("cls");
getCategories();
}
break;
}
case 7:
{
printf("'LOL stands for:\n");
printf("[a] Look out Leeroy \n");
printf("[b] Lots of lions \n");
printf("[c] Laugh out loud \n");
printf("[d] Left out loner \n");
printf("Answer: ");
scanf("%c",&ans);
if (ans=='c' or ans=='C')
{
printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
Sleep(1000);
Score++;
qno++;
}
else 
{
printf("\n  SORRY, YOU'RE WRONG \n");
Sleep(2000);
nLife--;
Sleep(1000);
system("cls");
getCategories();
}
break;
}
case 8:
{
printf("This symbol is used by blogging sites to allow users to sort messages into groups? \n");
printf("[a] & \n");
printf("[b] # \n");
printf("[c] * \n");
printf("[d] @ \n");
printf("Answer: ");
scanf("%c",&ans);
if (ans=='b' or ans=='B')
{
printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
Sleep(1000);
Score++;
qno++;
}
else 
{
printf("\n  SORRY, YOU'RE WRONG \n");
Sleep(2000);
nLife--;
Sleep(1000);
system("cls");
getCategories();
}
//system("cls");
break;
}
}
getchar();
}

//AVERAGE LEVEL
while(nLife>0 && (qno>=3 && qno<=4 ) && Score<35)
{
system("cls");
printf("\nDifficulty: AVERAGE");
    printf("\nQuestion No.: %d\n", qno);
    printf("Remaining Lives/Life: %d\n", nLife);
    printf("Score: %d\n", Score);
printf("\n \n");
random = getRandom(8);

switch (random)
{
case 1:
{ 
printf("This website is popular for memes ? \n");
printf("[a] 9gag \n");
printf("[b]  Amazon\n");
printf("[c] Netflix \n");
printf("[d] Google \n");
printf("Answer: ");
scanf("%c",&ans);
if (ans=='a' or ans=='A')
{
printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
Sleep(1000);
Score+=2;
qno++;
}
else
{
printf("\n  SORRY, YOU'RE WRONG \n");
Sleep(2000);
nLife--;
Sleep(1000);
system("cls");
getCategories();
}
//system("cls");
break;
}
case 2:
{
printf("What continent has the most internet users as of 2013? \n");
printf("[a] North America \n");
printf("[b] Europe \n");
printf("[c] Asia \n");
printf("[d] South America \n");
printf("Answer: ");
scanf("%c",&ans);
if (ans=='c' or ans=='C')
{
printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
Sleep(1000);
Score+=2;
qno++;
}
else 
{
printf("\n  SORRY, YOU'RE WRONG \n");
Sleep(2000);
nLife--;
Sleep(1000);
system("cls");
getCategories();
}
//system("cls");
break;
}
case 3:
{
printf("What online encyclopedia can be accessed and edited by practically anyone? \n");
printf("[a] Encarta \n");
printf("[b] Encyclopedia \n");
printf("[c] Wikipedia \n");
printf("[d] Britannica \n");
printf("Answer: ");
scanf("%c",&ans);
if (ans=='c' or ans=='C')
{
printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
Sleep(1000);
Score+=2;
qno++;
}
else 
{
printf("\n  SORRY, YOU'RE WRONG \n");
Sleep(2000);
nLife--;
Sleep(1000);
system("cls");
getCategories();
}
//system("cls");
break;
}
case 4:
{
printf("Which of the following is not a domain name? \n");
printf("[a] .com \n");
printf("[b] .org \n");
printf("[c] .net \n");
printf("[d] .int \n");
printf("Answer: ");
scanf("%c",&ans);
if (ans=='d' or ans=='D')
{
printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
Sleep(1000);
Score+=2;
qno++;
}
else 
{
printf("\n  SORRY, YOU'RE WRONG \n");
Sleep(2000);
nLife--;
Sleep(1000);
system("cls");
getCategories();
}
//system("cls");
break;
}
case 5:
{
printf("www.google.com is an example of a/an? \n");
printf("[a] URL \n");
printf("[b] program \n");
printf("[c] access code \n");
printf("[d] server \n");
printf("Answer: ");
scanf("%c",&ans);
if (ans=='a' or ans=='A')
{
printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
Sleep(1000);
Score+=2;
qno++;
}
else 
{
printf("\n  SORRY, YOU'RE WRONG \n");
Sleep(2000);
nLife--;
Sleep(1000);
system("cls");
getCategories();
}
//system("cls");
break;
}
case 6:
{
printf("Which of the following is a search engine? \n");
printf("[a] Macromedia Flash \n");
printf("[b] Netscape \n");
printf("[c] Google \n");
printf("[d] Adobe \n");
printf("Answer: ");
scanf("%c",&ans);
if (ans=='c' or ans=='C')
{
printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
Sleep(1000);
Score+=2;
qno++;
}
else 
{
printf("\n  SORRY, YOU'RE WRONG \n");
Sleep(2000);
nLife--;
Sleep(1000);
system("cls");
getCategories();
}
//system("cls");
break;
}
case 7:
{
printf("Which of the following sites allows users to set up email address? \n");
printf("[a] www.hotmail.com \n");
printf("[b] www.linux.org \n");
printf("[c] www.gre.org \n");
printf("[d] www.syvum.com \n");
printf("Answer: ");
scanf("%c",&ans);
if (ans=='a' or ans=='A')
{
printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
Sleep(1000);
Score+=2;
qno++;
}
else 
{
printf("\n  SORRY, YOU'RE WRONG \n");
Sleep(2000);
nLife--;
Sleep(1000);
system("cls");
getCategories();
}
//system("cls");
break;
}
case 8:
{
printf("Download speeds are measured in? \n");
printf("[a] MHz \n");
printf("[b] Kbps \n");
printf("[c] Megabytes \n");
printf("[d] RAM \n");
printf("Answer: ");
scanf("%c",&ans);
if (ans=='b' or ans=='B')
{
printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
Sleep(1000);
Score+=2;
qno++;
}
else 
{
printf("\n  SORRY, YOU'RE WRONG \n");
Sleep(2000);
nLife--;
Sleep(1000);
system("cls");
getCategories();
}
//system("cls");
break;
}

}
getchar();
}

//HARD LEVEL
while(nLife>0 && (qno>=5 && qno<=6)&& Score<35)
{
system("cls");
printf("\nDifficulty: HARD");
    printf("\nQuestion No.: %d\n", qno);
    printf("Remaining Lives/Life: %d\n", nLife);
    printf("Score: %d\n", Score);
printf("\n \n");
random = getRandom(8);

switch (random)
{
case 1:
{ 
printf("The internet was originally developed by\n");
printf("[a] Hackers \n");
printf("[b] a corporation \n");
printf("[c] the U.S. Department of Defense \n");
printf("[d] the University of Michigan \n");
printf("Answer: ");
scanf("%c",&ans);
if (ans=='c' or ans=='C')
{
printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
Sleep(1000);
Score+=3;
qno++;
}
else
{
printf("\n  SORRY, YOU'RE WRONG \n");
Sleep(2000);
nLife--;
Sleep(1000);
system("cls");
getCategories();
}
//system("cls");
break;
}
case 2:
{
printf("What does modem stand for? \n");
printf("[a] Memory Demagnetization \n");
printf("[b] Monetary Devaluation Exchange Mechanism \n");
printf("[c] Modular Demarkation \n");
printf("[d] Modulator Demodulator \n");
printf("Answer: ");
scanf("%c",&ans);
if (ans=='d' or ans=='D')
{
printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
Sleep(1000);
Score+=3;
qno++;
}
else 
{
printf("\n  SORRY, YOU'RE WRONG \n");
Sleep(2000);
nLife--;
Sleep(1000);
system("cls");
getCategories();
}
//system("cls");
break;
}
case 3:
{
printf("What does ISP stands for? \n");
printf("[a] Internet Service Provider \n");
printf("[b] Internet Security Protocol \n");
printf("[c] Integrated Service Procedure \n");
printf("[d] Internet Safety Protocol. \n");
printf("Answer: ");
scanf("%c",&ans);
if (ans=='a' or ans=='A')
{
printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
Sleep(1000);
Score+=3;
qno++;
}
else 
{
printf("\n  SORRY, YOU'RE WRONG \n");
Sleep(2000);
nLife--;
Sleep(1000);
system("cls");
getCategories();
}
//system("cls");
break;
}
case 4:
{
printf("Which of the following is not a method of accessing the internet \n");
printf("[a] ISDN \n");
printf("[b] DSL \n");
printf("[c] CPU \n");
printf("[d] Modem \n");
printf("Answer: ");
scanf("%c",&ans);
if (ans=='c' or ans=='C')
{
printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
Sleep(1000);
Score+=3;
qno++;
}
else 
{
printf("\n  SORRY, YOU'RE WRONG \n");
Sleep(2000);
nLife--;
Sleep(1000);
system("cls");
getCategories();
}
//system("cls");
break;
}
case 5:
{
printf("What does html stand for? \n");
printf("[a] Hyper Transfer Monitor Language \n");
printf("[b] HyperText Markup Language \n");
printf("[c] High Transfer Method Language \n");
printf("[d] High Time Monitor Languag \n");
printf("Answer: ");
scanf("%c",&ans);
if (ans=='b' or ans=='B')
{
printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
Sleep(1000);
Score+=3;
qno++;
}
else 
{
printf("\n  SORRY, YOU'RE WRONG \n");
Sleep(2000);
nLife--;
Sleep(1000);
system("cls");
getCategories();
}
//system("cls");
break;
}
case 6:
{
printf("A computer on the Internet that hosts data, that can be accessed by the web browsers using HTTP is known as: \n");
printf("[a] Web Finder \n");
printf("[b] Web Server \n");
printf("[c] Web Search \n");
printf("[d] Web Location \n");
printf("Answer: ");
scanf("%c",&ans);
if (ans=='b' or ans=='B')
{
printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
Sleep(1000);
Score+=3;
qno++;
}
else 
{
printf("\n  SORRY, YOU'RE WRONG \n");
Sleep(2000);
nLife--;
Sleep(1000);
system("cls");
getCategories();
}
//system("cls");
break;
}
case 7:
{
printf("Which of the following not a web browser? \n");
printf("[a] Microsoft Bing \n");
printf("[b] Google Chrome \n");
printf("[c] Mozilla Firefox \n");
printf("[d] Opera \n");
printf("Answer: ");
scanf("%c",&ans);
if (ans=='a' or ans=='A')
{
printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
Sleep(1000);
Score+=3;
qno++;
}
else 
{
printf("\n  SORRY, YOU'RE WRONG \n");
Sleep(2000);
nLife--;
Sleep(1000);
system("cls");
getCategories();
}
//system("cls");
break;
}
case 8:
{
printf("When was the first prototype of the internet first created? \n");
printf("[a] 1950's \n");
printf("[b] 1960's \n");
printf("[c] 1970's \n");
printf("[d] 1980's \n");
printf("Answer: ");
scanf("%c",&ans);
if (ans=='b' or ans=='B')
{
printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
Sleep(1000);
Score+=3;
qno++;
}
else 
{
printf("\n  SORRY, YOU'RE WRONG \n");
Sleep(2000);
nLife--;
Sleep(1000);
system("cls");
getCategories();
}
//system("cls");
break;
}
}
getchar();
}

//ALMOST IMPOSSIBLE
while(nLife>0 && qno==7 && Score<35)
{
system("cls");
printf("\nDifficulty: ALMOST IMPOSSIBLE");
    printf("\nQuestion No.: %d\n", qno);
    printf("Remaining Lives/Life: %d\n", nLife);
    printf("Score: %d\n", Score);
printf("\n \n");
random = getRandom(4);

switch (random)
{
case 1:
{ 
printf("The Mau Mau were terrorists in which country late 50's early 60's? \n");
printf("[a] Lebanon \n");
printf("[b] America \n");
printf("[c] Kenya \n");
printf("[d] Israel \n");
printf("Answer: ");
scanf("%c",&ans);
if (ans=='c' or ans=='C')
{
printf("\n\nYOU GOT IT RIGHT! \n Please choose your next category. \n");
Sleep(1000);
Score+=5;
nLife++;
getCategories();
}
else
{
printf("\n  SORRY, YOU'RE WRONG \n");
Sleep(2000);
nLife--;
Sleep(1000);
system("cls");
getCategories();
}
//system("cls");
break;
}
case 2:
{
printf("What is the oldest known science? \n");
printf("[a] Astronomy \n");
printf("[b] Biology \n");
printf("[c] Chemistry \n");
printf("[d] Physics \n");
printf("Answer: ");
scanf("%c",&ans);
if (ans=='a' or ans=='A')
{
printf("\n\nYOU GOT IT RIGHT! \n Please choose your next category. \n");
Sleep(1000);
Score+=5;
nLife++;
getCategories();
}
else 
{
printf("\n  SORRY, YOU'RE WRONG \n");
Sleep(2000);
nLife--;
Sleep(1000);
system("cls");
getCategories();
}
//system("cls");
break;
}
case 3:
{
printf("Which of the following statement is TRUE? \n");
printf("[a] The first people to settle on the mountains overlooking the Tiber River were the Latins \n");
printf("[b  Rome was at first controlled by the Carthaginians, a civilized indo-European people who had come to Italy \n");
printf("[c] The Romans established their own government after their rebellion against the Carthaginians \n");
printf("[d] The series of wars between Rome and Carthage was called the Battle at Actium \n");
printf("Answer: ");
scanf("%c",&ans);
if (ans=='a' or ans=='A')
{
printf("\n\nYOU GOT IT RIGHT! \n Please choose your next category. \n");
Sleep(1000);
Score+=5;
nLife++;
getCategories();
}
else 
{
printf("\n  SORRY, YOU'RE WRONG \n");
Sleep(2000);
nLife--;
Sleep(1000);
system("cls");
getCategories();
}
//system("cls");
break;
}
case 4:
{
printf("Which of the following statement is FALSE? \n");
printf("[a] Rome attained the height of its grandeur during the reign of Julio-Claudian Dynasty. \n");
printf("[b] Two consuls elected by the patricians headed a Roman Republic with a senate, also composed of nobles, acting as the lawmaking body. \n");
printf("[c] The plebeians won their right to be represented by electing tribunes. \n");
printf("[d] The Battle at Actium marked the end of the Roman Republic and the start of the Roman Empire. \n");
printf("Answer: ");
scanf("%c",&ans);
if (ans=='a' or ans=='A')
{
printf("\n\nYOU GOT IT RIGHT! \n Please choose your next category. \n");
Sleep(1000);
Score+=5;
nLife++;
getCategories();
}
else 
{
printf("\n  SORRY, YOU'RE WRONG \n");
Sleep(2000);
nLife--;
Sleep(1000);
system("cls");
getCategories();
}
//system("cls");
break;
}
}
getchar();
}
//Winning
	while(nLife>0 && Score>34)
	{
		system("cls");
		printf("\n\n");
		printf("             .----------------------------------------------------. \n");
		printf("             |                                                    | \n");
		printf("             |       _  .-\"-.  .-\"-. .--.    _   _      _   ____  | \n");
		printf("             |    ,'` | | ._ `.| ._ \\|  /  ,' '\\| | _ .' ) |   _|_|__ \n");
		printf("            _|_  / /| | | | \\ '| | \\ | ;  / ., || || || ;  |  |_(]___`\\ \n");
		printf("          /___[)' | | | | '-`/ | '-`/| | / /_| || || | \\ `\\|  '(]____ ' \n");
		printf("         | ____[) '-' | | |-'  | .-' | |/      || `' |  ;  |  |\"(]___ | \n");
		printf("         ; ___[)| .-. | | |    | |   | '-./`|  ||    | /  /|  |__(]_ / \n");
		printf("          \\ _[) |_| \\_' '_|    ._|   '---'  '--'`.__.'(_,' |_____||-` \n");
		printf("           `-|                                                    | \n");
		printf("             '----------------------------------------------------' \n\n");
		printf("                          C O N G R A T U L A T I O N S              \n\n");
		printf("                                      Y O U                          \n\n");
		printf("                            W O N   T H E   G A M E !                \n\n\n");
		Sleep(2000);
		system("pause");
		nLife=5;
		Score=0;
		//exit(0);
		getchar();
		main();
	}
}


//Literature
void getLiterature()
{
	int random;
	//int i;
	int qno=1;
	char ans;
	
	//EASY LEVEL
	while(nLife>0 && qno<=2 && Score<35)
	{
	system("cls");
	printf("\nDifficulty: EASY");
printf("\nQuestion No.: %d\n", qno);
printf("Remaining Lives/Life: %d\n", nLife);
printf("Score: %d\n", Score);
	printf("\n \n");
	random = getRandom(8);
	
	switch (random)
	{
		case 1:
		{ 
printf("By how many years William Shakespeare's wife was older to him?\n");
printf("[a]Five years \n");
printf("[b]Six years \n");
printf("[c]Seven years \n");
printf("[d]Eight years \n");
printf("Answer: ");
scanf("%c",&ans);
if (ans=='d' or ans=='D')
{
printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
Sleep(1000);
Score++;
qno++;
}
else
{
printf("\n  SORRY, YOU'RE WRONG \n");
Sleep(2000);
nLife--;
Sleep(1000);
system("cls");
getCategories();
}
//system("cls");
break;
}
case 2:
{
printf("J. R. R. Tolkien is best known as an author of classic high fantasy works, such as The Hobbit, The Lord of the Rings, and The Silmarillion. What is his complete name? \n");
printf("[a] John Ronald Reuel Tolkien \n");
printf("[b] James Ralph Rodney Tolkien \n");
printf("[c] James Reuel Ralph Tolkien \n");
printf("[d] John Rodney Ralph Tolkien \n");
printf("Answer: ");
scanf("%c",&ans);
if (ans=='a' or ans=='A')
{
printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
Sleep(1000);
Score++;
qno++;
}
else
{
printf("\n  SORRY, YOU'RE WRONG \n");
Sleep(2000);
nLife--;
Sleep(1000);
system("cls");
getCategories();
}
//system("cls");
break;
}
case 3:
{
	printf("How many acts are in William Shakespeare's plays? \n");
			printf("[a] Three \n");
			printf("[b] Four \n");
			printf("[c] Five \n");
			printf("[d] Six \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='c' or ans=='C')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score++;
				qno++;
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
		case 4:
			{
			printf("Which play has the characters Cordelia, Goneril and Regan? \n");
			printf("[a] Pericles \n");
			printf("[b] King Lear \n");
			printf("[c] A Midsummer Night's Dream \n");
			printf("[d] Cymbeline \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='b' or ans=='B')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score++;
				qno++;
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
		case 5:
			{
			printf("When was William Shakespere born? \n");
			printf("[a] 23 April 1564 \n");
			printf("[b] 15 July 1580 \n");
			printf("[c] 2 May 1540 \n");
			printf("[d] 1 January 1601 \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='a' or ans=='A')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score++;
				qno++;
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
			case 6:
			{
			printf("Which is the last play written by William Shakespeare? \n");
			printf("[a] As You Like It \n");
			printf("[b] Two Gentlemen from Verona \n");
			printf("[c] Henry V \n");
			printf("[d] The Tempest \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='d' or ans=='D')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score++;
				qno++;
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
				break;
			}
			case 7:
			{
			printf("Whom did William Shakespeare marry? \n");
			printf("[a] Anne Hathaway \n");
			printf("[b] Mary Tudor \n");
			printf("[c] Jane Grey \n");
			printf("[d] Elizabeth Newson \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='a' or ans=='A')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score++;
				qno++;
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
				break;
			}
			case 8:
			{
			printf("Who is the Shrew in the play The Taming of the Shrew?\n");
			printf("[a] Bianca \n");
			printf("[b] Cleopatra \n");
			printf("[c] Katherine \n");
			printf("[d] Matilda \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='c' or ans=='C')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score++;
				qno++;
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
	}
	getchar();
	}

	
	//AVERAGE LEVEL
	while(nLife>0 && (qno>=3 &&qno<=4 ) && Score<35)
	{
	system("cls");
	printf("\nDifficulty: AVERAGE");
printf("\nQuestion No.: %d\n", qno);
printf("Remaining Lives/Life: %d\n", nLife);
printf("Score: %d\n", Score);
	printf("\n \n");
	random = getRandom(8);
	
	switch (random)
	{
		case 1:
		{ 
			printf("Which of the following myths does not figure in The Waste Land? \n");
			printf("[a] Oedipus\n");
			printf("[b] Grail Legend of Fisher King \n");
			printf("[c] Philomela \n");
			printf("[d] Sysyphus \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='d' or ans=='D')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=2;
				qno++;
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
		}
		case 2:
			{
			printf("Which book of John Ruskin influenced Mahatma Gandhi? \n");
			printf("[a] Sesame and Lilies \n");
			printf("[b] The Seven Lamps of Architecture \n");
			printf("[c] Unto This Last \n");
			printf("[d] ForsClavigera \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='c' or ans=='C')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=2;
				qno++;
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
		case 3:
			{
			printf("Who called 'The Waste Land \"a music of ideas\"? \n");
			printf("[a] Allen Tate \n");
			printf("[b] J.C. Ransom \n");
			printf("[c] I.A. Richards \n");
			printf("[d] F.r. Leavis \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='a' or ans=='A')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=2;
				qno++;
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
		case 4:
			{
			printf("The main character in Paradise Lost Book I and Book II is? \n");
			printf("[a] God \n");
			printf("[b] Satan \n");
			printf("[c] Adam \n");
			printf("[d] Eve \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='b' or ans=='B')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=2;
				qno++;
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
		case 5:
			{
			printf("The epigraph of The Waste Land is borrowed from who? \n");
			printf("[a] Virgil \n");
			printf("[b] Fetronius \n");
			printf("[c] Seneca \n");
			printf("[d] Homer \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='d' or ans=='D')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=2;
				qno++;
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
			case 6:
			{
			printf("The title of the poem The Second Coming is taken from what book?\n");
			printf("[a] The Bible \n");
			printf("[b] The Irish Mythology\n");
			printf("[c] The German Mythology\n");
			printf("[d] The Greek Mythology\n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='a' or ans=='A')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=2;
				qno++;
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
			case 7:
			{
			printf("T. S. Eliot has borrowed the term 'Unreal City' in the first and third sections from what book?\n");
			printf("[a] Baudelaire\n");
			printf("[b] Irving Babbit \n");
			printf("[c] Dante\n");
			printf("[d] Laforgue\n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='c' or ans=='C')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=2;
				qno++;
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
			case 8:
			{
			printf("Graham Greene's novels are marked by? \n");
			printf("[a] Catholicism \n");
			printf("[b] Protestantism \n");
			printf("[c] Paganism \n");
			printf("[d] Buddhism \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='a' or ans=='A')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=2;
				qno++;
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}

	}
	getchar();
	}
	
	//HARD LEVEL
	while(nLife>0 && (qno>=5 &&qno<=6)&& Score<35)
	{
	system("cls");
	printf("\nDifficulty: HARD");
printf("\nQuestion No.: %d\n", qno);
printf("Remaining Lives/Life: %d\n", nLife);
printf("Score: %d\n", Score);
	printf("\n \n");
	random = getRandom(8);
	
	switch (random)
	{
		case 1:
		{ 
			printf("In Leda and the Swan, who wooes Leda in guise of a swan? \n");
			printf("[a] Mars \n");
			printf("[b] Bacchus\n");
			printf("[c] Hercules \n");
			printf("[d] Zeus \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='b' or ans=='B')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=3;
				qno++;
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
		}
		case 2:
			{
			printf("The In Sons and Lovers, Paul Morel's mother's name is? \n");
			printf("[a] Susan \n");
			printf("[b] Jane \n");
			printf("[c] Gertude \n");
			printf("[d] Emily \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='c' or ans=='C')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=3;
				qno++;
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
		case 3:
			{
			printf("The twins in Lord of the Flies are _____ and _____. \n");
			printf("[a] Ralph and Jack \n");
			printf("[b] Simon and Eric \n");
			printf("[c] Ralph and Eric \n");
			printf("[d] Simon and Jack \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='a' or ans=='A')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=3;
				qno++;
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
		case 4:
			{
			printf("Who wrote the poem Defence of Lucknow? \n");
			printf("[a] Browning \n");
			printf("[b] Tennyson \n");
			printf("[c] Swimburne \n");
			printf("[d] Rossetti \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='c' or ans=='C')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=3;
				qno++;
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
		case 5:
			{
			printf("Who invented the term \"sprung rhythm\"?\n");
			printf("[a] Hopkins\n");
			printf("[b] Tennyson\n");
			printf("[c] Browning\n");
			printf("[d] Wordsworth \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='a' or ans=='A')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=3;
				qno++;
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
			case 6:
			{
			printf("Mr. Jaggers, in Great Expectations, is a what? \n");
			printf("[a] Lawyer \n");
			printf("[b] Postman \n");
			printf("[c] Judge \n");
			printf("[d] School teacher \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='a' or ans=='A')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=3;
				qno++;
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
			case 7:
			{
			printf("One important feature of Jane Austen's style is? \n");
			printf("[a] Boisterous humour\n");
			printf("[b] Humour and pathos \n");
			printf("[c] Subtlety of irony \n");
			printf("[d] Stream of consciousness \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='a' or ans=='A')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=3;
				qno++;
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
			case 8:
			{
			printf("Which of the following novels has the sub-title \"A Novel Without a Hero\"? \n");
			printf("[a] Vanity Fairy \n");
			printf("[b] Middlemarch \n");
			printf("[c] Wuthering Heights \n");
			printf("[d] Oliver Twist \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='a' or ans=='A')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=3;
				qno++;
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
	}
	getchar();
	}
	
	//ALMOST IMPOSSIBLE
	while(nLife>0 &&qno==7 && Score<35)
	{
	system("cls");
	printf("\nDifficulty: ALMOST IMPOSSIBLE");
printf("\nQuestion No.: %d\n", qno);
printf("Remaining Lives/Life: %d\n", nLife);
printf("Score: %d\n", Score);
	printf("\n \n");
	random = getRandom(4);
	
	switch (random)
	{
		case 1:
		{ 
			printf("Identify the rhetorical figure used in the following line of Tennyson \"Faith un-faithful kept him falsely true\". \n");
			printf("[a]Oxymoron \n");
			printf("[b]Metaphor \n");
			printf("[c] Simile \n");
			printf("[d] Synecdoche \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='a' or ans=='A')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=5;
				nLife++;
				getCategories();
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
		}
		case 2:
			{
			printf("Identify the poet, whom Queen Victoria, regarded as the perfect poet of \"love and loss\". \n");
			printf("[a] Tennyson \n");
			printf("[b] Browning \n");
			printf("[c] Swimburne \n");
			printf("[d] D.G. Rossetti \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='d' or ans=='D')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=5;
				nLife++;
				getCategories();
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
		case 3:
			{
			printf("The Aesthetic Movement which blossomed during the 1880s was not influenced by _____. \n");
			printf("[a] The Pre-Raphaelites \n");
			printf("[b] Ruskin \n");
			printf("[c] Pater\n");
			printf("[d] Matthew Arnold\n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='d' or ans=='D')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=5;
				nLife++;
				getCategories();
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
		case 4:
			{
			printf("Identify the writer who first used blank verse in English poetry. \n");
			printf("[a] Sir Thomas Wyatt \n");
			printf("[b] William Shakespeare\n");
			printf("[c] Earl of Surrey \n");
			printf("[d] Milton \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='c' or ans=='C')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=5;
				nLife++;
				getCategories();
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}

	}
	getchar();
	}
	//Winning
	while(nLife>0 && Score>34)
	{
		system("cls");
		printf("\n\n");
		printf("             .----------------------------------------------------. \n");
		printf("             |                                                    | \n");
		printf("             |       _  .-\"-.  .-\"-. .--.    _   _      _   ____  | \n");
		printf("             |    ,'` | | ._ `.| ._ \\|  /  ,' '\\| | _ .' ) |   _|_|__ \n");
		printf("            _|_  / /| | | | \\ '| | \\ | ;  / ., || || || ;  |  |_(]___`\\ \n");
		printf("          /___[)' | | | | '-`/ | '-`/| | / /_| || || | \\ `\\|  '(]____ ' \n");
		printf("         | ____[) '-' | | |-'  | .-' | |/      || `' |  ;  |  |\"(]___ | \n");
		printf("         ; ___[)| .-. | | |    | |   | '-./`|  ||    | /  /|  |__(]_ / \n");
		printf("          \\ _[) |_| \\_' '_|    ._|   '---'  '--'`.__.'(_,' |_____||-` \n");
		printf("           `-|                                                    | \n");
		printf("             '----------------------------------------------------' \n\n");
		printf("                          C O N G R A T U L A T I O N S              \n\n");
		printf("                                      Y O U                          \n\n");
		printf("                            W O N   T H E   G A M E !                \n\n\n");
		Sleep(2000);
		system("pause");
		nLife=5;
		Score=0;
		//exit(0);
		getchar();
		main();
	}
}

//Movies
void getMovies()
{
	int random;
	//inti;
	int qno=1;
	char ans;
	
	//EASY LEVEL
	while(nLife>0 &&qno<=2 && Score<35)
	{
	system("cls");
	printf("\nDifficulty: EASY");
	printf("\nQuestion No.: %d\n", qno);
	printf("Remaining Lives/Life: %d\n", nLife);
	printf("Score: %d\n", Score);
	printf("\n \n");
	random = getRandom(8);
	
	switch (random)
	{
		case 1:
		{ 
printf("Identify the name of the character portrayed by Audrey Hepburn in the 1961 film, Breakfast at Tiffany's?\n");
printf("[a]Emily Eustace\n");
printf("[b]Sally Tomato\n");
printf("[c]Mag Wildwood \n");
printf("[d]Holly Golightly \n");
printf("Answer: ");
scanf("%c",&ans);
if (ans=='d' or ans=='D')
{
printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
Sleep(1000);
Score++;
qno++;
}
else
{
printf("\n  SORRY, YOU'RE WRONG \n");
Sleep(2000);
nLife--;
Sleep(1000);
system("cls");
getCategories();
}
//system("cls");
break;
}
case 2:
{
printf("In 1999, Steve Miner directed this black comedy about a gigantic, man-eating crocodile that is regularly fed cattle by a doting Betty White. \n");
printf("[a] Jaws \n");
printf("[b] Lake Placid \n");
printf("[c] The Crocodile Hunter \n");
printf("[d]Crocodile Dundee \n");
printf("Answer: ");
scanf("%c",&ans);
if (ans=='b' or ans=='B')
{
printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
Sleep(1000);
Score++;
qno++;
}
else
{
printf("\n  SORRY, YOU'RE WRONG \n");
Sleep(2000);
nLife--;
Sleep(1000);
system("cls");
getCategories();
}
//system("cls");
break;
}
case 3:
{
	printf("What is the title of the theme song of the 1985 film The Breakfast Club which was recently covered in the 2012 film Pitch Perfect? \n");
			printf("[a] Don't You Forget About Me \n");
			printf("[b]I'll Make Love to You \n");
			printf("[c] Like a Virgin \n");
			printf("[d] Hit Me With Your Best Shot \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='a' or ans=='A')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score++;
				qno++;
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
		case 4:
			{
			printf("What is the highest grossing movie franchise of all time?\n");
			printf("[a] Harry Potter \n");
			printf("[b] James Bond\n");
			printf("[c] Lord of the Rings\n");
			printf("[d] Star Wars \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='a' or ans=='A')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score++;
				qno++;
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
		case 5:
			{
			printf("Which Robin Williams 90's film was based on a book of the same name that involved a magical board game? \n");
			printf("[a] Flubber \n");
			printf("[b] The Timekeeper\n");
			printf("[c] Jumanji\n");
			printf("[d] The Birdcage \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='c' or ans=='C')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score++;
				qno++;
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
			case 6:
			{
			printf("Without adjustments made due to inflation, what is the highest grossing film? \n");
			printf("[a] Titanic \n");
			printf("[b] Gone with the Wind \n");
			printf("[c] The Wizard of Oz \n");
			printf("[d] Avatar (2009) \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='d' or ans=='D')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score++;
				qno++;
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
				break;
			}
			case 7:
			{
			printf("Who is the Filipino director who recently won the Best Director Award for his film Kinatay in the 62nd Cannes Film Festival? \n");
			printf("[a] Brilliante Mendoza\n");
			printf("[b] LinoBrocka\n");
			printf("[c] Marilou Diaz -Abaya\n");
			printf("[d] Maryo J. de los Reyes\n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='a' or ans=='A')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score++;
				qno++;
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
				break;
			}
			case 8:
			{
			printf("Which character in the Lord of the Rings trilogy was played by the actor Sir Ian McKellen?\n");
			printf("[a] Sauron\n");
			printf("[b] Frodo\n");
			printf("[c] Gandalf\n");
			printf("[d] Saruman \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='c' or ans=='C')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score++;
				qno++;
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
	}
	getchar();
	}

	
	//AVERAGE LEVEL
	while(nLife>0 && (qno>=3 &&qno<=4 ) && Score<35)
	{
	system("cls");
	printf("\nDifficulty: AVERAGE");
printf("\nQuestion No.: %d\n", qno);
printf("Remaining Lives/Life: %d\n", nLife);
printf("Score: %d\n", Score);
	printf("\n \n");
	random = getRandom(8);
	
	switch (random)
	{
		case 1:
		{ 
			printf("What was the name of the fictional blue diamond necklace Caledon Hockley gave to his fiancée Rose in the 1997 film, Titanic?\n");
			printf("[a] Hortensia\n");
			printf("[b] The Blue Hope \n");
			printf("[c] Heart of the Ocean\n");
			printf("[d] The Orloff\n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='c' or ans=='C')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=2;
				qno++;
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
		}
		case 2:
			{
			printf("Identify: They are microscopic life forms that reside within the cells of all living things and communicate with the Force. \n");
			printf("[a] Midi-chlorians\n");
			printf("[b] Phytoplanktons \n");
			printf("[c] Chewbacca \n");
			printf("[d] Coruscant \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='a' or ans=='A')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=2;
				qno++;
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
		case 3:
			{
			printf("What is the literal translation of the title of the 1982 Filipino film Oro Plata Mata?\n");
			printf("[a] Ore, Plate, Eye\n");
			printf("[b] Gold, Silver, Death\n");
			printf("[c] Gold, Platinum, Death\n");
			printf("[d] Gold, Tin, Bad Luck\n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='b' or ans=='B')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=2;
				qno++;
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
		case 4:
			{
			printf("What is the name of the main antagonist in the 1922 classic horror film Nosferatu?\n");
			printf("[a] Count Orlock \n");
			printf("[b] Count Olaf \n");
			printf("[c] Count Dracula\n");
			printf("[d] Count of Montecristo \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='a' or ans=='A')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=2;
				qno++;
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
		case 5:
			{
			printf("Who is the Hollywood actress best known for her violet eyes and for Her much-publicized personal life included eight marriages and several life-threatening illnesses.\n");
			printf("[a] Elizabeth Taylor \n");
			printf("[b] Barbara Streisand\n");
			printf("[c] Katherine Hepburn \n");
			printf("[d] Bette Davis\n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='a' or ans=='A')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=2;
				qno++;
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
			case 6:
			{
			printf("Who is the actress with the most Academy Awards Nominations who recently won the Best Actress Award in 2011 for her role in the movie The Iron Lady?\n");
			printf("[a] Cate Blanchett\n");
			printf("[b] Helen Mirren\n");
			printf("[c] Meryl Streep\n");
			printf("[d] Betty White\n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='c' or ans=='C')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=2;
				qno++;
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
			case 7:
			{
			printf("In the 1965 film adaptation of the Roger's and Hammerstein's Broadway musical The Sound of Music, what was the title of the song that was sung by the Captain earlier in the film as he rediscovers music and a love for his children?\n");
			printf("[a] Stemless Gentian\n");
			printf("[b] Chamois Ragwort\n");
			printf("[c] Alpine Aster\n");
			printf("[d] Edelweiss\n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='d' or ans=='D')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=2;
				qno++;
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
			case 8:
			{
			printf("This is an American romantic screwball comedy film, made in 1958 and released in 1959, which was directed by Billy Wilder and starred Marilyn Monroe, Tony Curtis, Jack Lemmon and George Raft. This film is also known as Marilyn Monroe's most successful film. \n");
			printf("[a] Some Like It Hot \n");
			printf("[b] All About Eve\n");
			printf("[c] The Seven-Year Itch \n");
			printf("[d] Gentlemen Prefer Blondes \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='a' or ans=='A')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=2;
				qno++;
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}

	}
	getchar();
	}
	
	//HARD LEVEL
	while(nLife>0 && (qno>=5 &&qno<=6)&& Score<35)
	{
	system("cls");
	printf("\nDifficulty: HARD");
printf("\nQuestion No.: %d\n", qno);
printf("Remaining Lives/Life: %d\n", nLife);
printf("Score: %d\n", Score);
	printf("\n \n");
	random = getRandom(8);
	
	switch (random)
	{
		case 1:
		{ 
			printf("In the 1962 film adaptation of the novel Lolita, how old was Sue Lyon (Lolita) when the film was shown?\n");
			printf("[a] 13 years old\n");
			printf("[b] 14 years old\n");
			printf("[c] 15 years old\n");
			printf("[d] 16 years old\n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='b' or ans=='B')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=3;
				qno++;
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
		}
		case 2:
			{
			printf("Quentin Tarantino is best known for his work behind the camera but has appeared in a variety of roles in cinema, on television and in theatre. In his film, Kill Bill Vol. 1&2, what was his role?\n");
			printf("[a] Guest at the dress rehearsal of Beatrix Kiddo's wedding \n");
			printf("[b] Doctor at a hospital \n");
			printf("[c] Crazy 88 member\n");
			printf("[d] Waiter at a club \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='c' or ans=='C')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=3;
				qno++;
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
		case 3:
			{
			printf("Himala is a Filipino film directed by the late National Artist Ishmael Bernal of the Philippines in 1982. What was the name of the visionary teenage girl who was portrayed by Nora Aunor?\n");
			printf("[a] Elsa\n");
			printf("[b] Elisa\n");
			printf("[c] Melisa\n");
			printf("[d] Neriza\n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='a' or ans=='A')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=3;
				qno++;
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
		case 4:
			{
			printf("What was the last film of Fernando Poe Jr.?\n");
			printf("[a] Alamat ng Lawin \n");
			printf("[b] Minahal Mo Ba Ako?\n");
			printf("[c] Pakners \n");
			printf("[d] AngDalubhasa \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='c' or ans=='C')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=3;
				qno++;
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
		case 5:
			{
			printf("In filmmaking, who is responsible for the head of the sound department during the production stage of filmmaking? They record and mix the audio on set - dialogue, presence and sound effects in mono and ambience in stereo.\n");
			printf("[a] Producer\n");
			printf("[b] Director of Audiography\n");
			printf("[c] Production Sound Mixer \n");
			printf("[d] Sound Designer\n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='c' or ans=='C')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=3;
				qno++;
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
			case 6:
			{
			printf("In the 1993 film Jurassic Park, what is the job of Dennis Nedry who has been paid off by one of InGen's corporate rivals to steal dinosaur embryos?\n");
			printf("[a] Janitor \n");
			printf("[b] Computer Programmer\n");
			printf("[c] Driver\n");
			printf("[d] Paleontologist\n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='b' or ans=='B')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=3;
				qno++;
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
			case 7:
			{
			printf("What was the title of the 1959 American epic historical drama film set in ancient Rome, which won 11 Academy Awards in the same year? \n");
			printf("[a] Stagecoach\n");
			printf("[b] Gone With the Wind\n");
			printf("[c]Ben-Hur\n");
			printf("[d] Casablanca\n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='c' or ans=='C')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=3;
				qno++;
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
			case 8:
			{
			printf("Which loveteam starred in the 1991 romantic film Hihintayin Kita Sa Langit?\n");
			printf("[a] Sharon Cuneta and Gabby Concepcion\n");
			printf("[b] Dawn Zulueta and Richard Gomez\n");
			printf("[c] Susan Roces and Fernando Poe Jr.\n");
			printf("[d] Nora Aunor and Christopher de Leon\n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='b' or ans=='B')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=3;
				qno++;
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
	}
	getchar();
	}
	
	//ALMOST IMPOSSIBLE
	while(nLife>0 &&qno==7 && Score<35)
	{
	system("cls");
	printf("\nDifficulty: ALMOST IMPOSSIBLE");
printf("\nQuestion No.: %d\n", qno);
printf("Remaining Lives/Life: %d\n", nLife);
printf("Score: %d\n", Score);
	printf("\n \n");
	random = getRandom(4);
	
	switch (random)
	{
		case 1:
		{ 
			printf("In the 1994 film Forrest Gump, Forrest was seen beside a former U.S. President during a flashback of his life. Who is this president?\n");
			printf("[a] John F. Kennedy\n");
			printf("[b] Dwight D. Eisenhower \n");
			printf("[c] Lyndon B. Johnson \n");
			printf("[d] Richard Nixon\n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='a' or ans=='A')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=5;
				nLife++;
				getCategories();
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
		}
		case 2:
			{
			printf("What was the title of the first film to be ever made?\n");
			printf("[a] The Horse in Motion\n");
			printf("[b] Roundhay Garden Scene\n");
			printf("[c] Monkeyshines No. 1\n");
			printf("[d] Workers Leaving the Lumiere Factory\n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='a' or ans=='A')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=5;
				nLife++;
				getCategories();
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
		case 3:
			{
			printf("What is the world's continually operating film production and distribution company?\n");
			printf("[a] Pathe\n");
			printf("[b] Universal Studios\n");
			printf("[c] Paramount\n");
			printf("[d] Gaumont \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='d' or ans=='D')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=5;
				nLife++;
				getCategories();
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
		case 4:
			{
			printf("She is a 1965 film made by Hammer Film Productions, based on the novel by H. Rider Haggard. What is the name of the queen referred to as She-who-must-be-Obeyed?\n");
			printf("[a] Boudica\n");
			printf("[b] Cleopatra\n");
			printf("[c] Nefertiti\n");
			printf("[d] Ayesha\n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='d' or ans=='D')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=5;
				nLife++;
				getCategories();
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}

	}
	getchar();
	}
	//Winning
	while(nLife>0 && Score>34)
	{
		system("cls");
		printf("\n\n");
		printf("             .----------------------------------------------------. \n");
		printf("             |                                                    | \n");
		printf("             |       _  .-\"-.  .-\"-. .--.    _   _      _   ____  | \n");
		printf("             |    ,'` | | ._ `.| ._ \\|  /  ,' '\\| | _ .' ) |   _|_|__ \n");
		printf("            _|_  / /| | | | \\ '| | \\ | ;  / ., || || || ;  |  |_(]___`\\ \n");
		printf("          /___[)' | | | | '-`/ | '-`/| | / /_| || || | \\ `\\|  '(]____ ' \n");
		printf("         | ____[) '-' | | |-'  | .-' | |/      || `' |  ;  |  |\"(]___ | \n");
		printf("         ; ___[)| .-. | | |    | |   | '-./`|  ||    | /  /|  |__(]_ / \n");
		printf("          \\ _[) |_| \\_' '_|    ._|   '---'  '--'`.__.'(_,' |_____||-` \n");
		printf("           `-|                                                    | \n");
		printf("             '----------------------------------------------------' \n\n");
		printf("                          C O N G R A T U L A T I O N S              \n\n");
		printf("                                      Y O U                          \n\n");
		printf("                            W O N   T H E   G A M E !                \n\n\n");
		Sleep(2000);
		system("pause");
		nLife=5;
		Score=0;
		//exit(0);
		getchar();
		main();
	}
}

//Music
void getMusic()
{
	int random;
	//inti;
	int qno=1;
	char ans;
	
	//EASY LEVEL
	while(nLife>0 &&qno<=2 && Score<35)
	{
	system("cls");
	printf("\nDifficulty: EASY");
printf("\nQuestion No.: %d\n", qno);
printf("Remaining Lives/Life: %d\n", nLife);
printf("Score: %d\n", Score);
	printf("\n \n");
	random = getRandom(8);
	
	switch (random)
	{
		case 1:
		{ 
printf("Who sang Don't You Worry Child?\n");
printf("[a]Journey\n");
printf("[b]Swedish House Mafia\n");
printf("[c]F.U.N.\n");
printf("[d]None of the above\n");
printf("Answer: ");
scanf("%c",&ans);
if (ans=='b' or ans=='B')
{
printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
Sleep(1000);
Score++;
qno++;
}
else
{
printf("\n  SORRY, YOU'RE WRONG \n");
Sleep(2000);
nLife--;
Sleep(1000);
system("cls");
getCategories();
}
//system("cls");
break;
}
case 2:
{
printf("Name the song with the lyrics: Do you ever think, when you're all alone, all that we can be.\n");
printf("[a] Touch Your Hand \n");
printf("[b] Crush \n");
printf("[c] A Little Too Not Over You \n");
printf("[d]CNone of the Above \n");
printf("Answer: ");
scanf("%c",&ans);
if (ans=='b' or ans=='B')
{
printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
Sleep(1000);
Score++;
qno++;
}
else
{
printf("\n  SORRY, YOU'RE WRONG \n");
Sleep(2000);
nLife--;
Sleep(1000);
system("cls");
getCategories();
}
//system("cls");
break;
}
case 3:
{
	printf("Which of these songs was not sang by Beyonce?\n");
			printf("[a] Single Ladies\n");
			printf("[b]Upgrade U \n");
			printf("[c] Run the World (Girls)\n");
			printf("[d] Pound the Alarm \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='d' or ans=='D')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score++;
				qno++;
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
		case 4:
			{
			printf("Who is the artist of the song As Long As You Love Me?\n");
			printf("[a] Justin Bieber\n");
			printf("[b] Justin Beiber\n");
			printf("[c] Justin Bebeir\n");
			printf("[d] Justin Bebier\n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='a' or ans=='A')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score++;
				qno++;
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
		case 5:
			{
			printf("Which artist sang at the latest Super Bowl?\n");
			printf("[a] Samantha Brown\n");
			printf("[b] Christina Grimmie\n");
			printf("[c] Beyonce\n");
			printf("[d] Usher\n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='c' or ans=='C')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score++;
				qno++;
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
			case 6:
			{
			printf("Who sang Price Tag? \n");
			printf("[a] Jessie J.\n");
			printf("[b] Nicki Minaj \n");
			printf("[c] Rihanna\n");
			printf("[d] Vanessa Hudgens \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='a' or ans=='A')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score++;
				qno++;
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
				break;
			}
			case 7:
			{
			printf("Which of the following songs was not sang by Nicki Minaj?\n");
			printf("[a] Sugar Bass\n");
			printf("[b] VaVaVoom\n");
			printf("[c] Starships\n");
			printf("[d] Pound the Alarm\n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='a' or ans=='A')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score++;
				qno++;
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
				break;
			}
			case 8:
			{
			printf("Which of these songs was not in the movie Pitch Perfect?\n");
			printf("[a] Party In the USA\n");
			printf("[b] Thousand Miles\n");
			printf("[c] Please Don't Stop the Music\n");
			printf("[d] Right Round\n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='b' or ans=='B')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score++;
				qno++;
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
	}
	getchar();
	}

	
	//AVERAGE LEVEL
	while(nLife>0 && (qno>=3 &&qno<=4 ) && Score<35)
	{
	system("cls");
	printf("\nDifficulty: AVERAGE");
printf("\nQuestion No.: %d\n", qno);
printf("Remaining Lives/Life: %d\n", nLife);
printf("Score: %d\n", Score);
	printf("\n \n");
	random = getRandom(8);
	
	switch (random)
	{
		case 1:
		{ 
			printf("What is the term which allows an artist to make grammatically incorrect lyrics?\n");
			printf("[a] Musical License\n");
			printf("[b] Music License\n");
			printf("[c] Poetic License\n");
			printf("[d] Poetry License\n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='c' or ans=='C')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=2;
				qno++;
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
		}
		case 2:
			{
			printf("Which one of these artists did not cover One More Night? \n");
			printf("[a] Sam Tsui\n");
			printf("[b] Alex Goot\n");
			printf("[c] Maroon 5\n");
			printf("[d] Boyce Avenue\n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='d' or ans=='D')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=2;
				qno++;
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
		case 3:
			{
			printf("Which of the following songs was not in High School Musical?\n");
			printf("[a] Start Of Something New\n");
			printf("[b] All For One\n");
			printf("[c] We're All In This Together\n");
			printf("[d] Breaking Free\n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='b' or ans=='B')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=2;
				qno++;
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
		case 4:
			{
			printf("Which of the following by comparison is Maroon 5's latest song?\n");
			printf("[a] She Will Be Loved\n");
			printf("[b] One More Night\n");
			printf("[c] Sunday Morning\n");
			printf("[d] This Love\n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='b' or ans=='B')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=2;
				qno++;
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
		case 5:
			{
			printf("Which of the following songs was not sang by Chris Brown?\n");
			printf("[a] Turn Up the Music \n");
			printf("[b] Don't Judge Me\n");
			printf("[c] Crush \n");
			printf("[d] Strip\n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='c' or ans=='C')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=2;
				qno++;
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
			case 6:
			{
			printf("What is the sixth word of Taylor Swift's We are Never Ever Getting Back Together?\n");
			printf("[a] Up\n");
			printf("[b] Remember\n");
			printf("[c] We\n");
			printf("[d] Never\n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='a' or ans=='A')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=2;
				qno++;
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
			case 7:
			{
			printf("Which One Direction song had a black and white music video?\n");
			printf("[a] Kiss You\n");
			printf("[b] Little Things\n");
			printf("[c] What Makes You Beautiful\n");
			printf("[d] It's Gotta Be You\n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='b' or ans=='B')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=2;
				qno++;
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
			case 8:
			{
			printf("It is the category for the highest pitch for women.\n");
			printf("[a] Alto\n");
			printf("[b] Treble\n");
			printf("[c] Tenor\n");
			printf("[d] Soprano\n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='d' or ans=='D')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=2;
				qno++;
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}

	}
	getchar();
	}
	
	//HARD LEVEL
	while(nLife>0 && (qno>=5 &&qno<=6)&& Score<35)
	{
	system("cls");
	printf("\nDifficulty: HARD");
printf("\nQuestion No.: %d\n", qno);
printf("Remaining Lives/Life: %d\n", nLife);
printf("Score: %d\n", Score);
	printf("\n \n");
	random = getRandom(8);
	
	switch (random)
	{
		case 1:
		{ 
			printf("Which of these songs was sung by Cueshe?\n");
			printf("[a] Stay\n");
			printf("[b] Truly, Madly, Crazily in Love\n");
			printf("[c] Hold Your Hand\n");
			printf("[d] Understand\n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='a' or ans=='A')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=3;
				qno++;
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
		}
		case 2:
			{
			printf("A Gamelan instrument.\n");
			printf("[a] Patron \n");
			printf("[b] Bason \n");
			printf("[c] Saron\n");
			printf("[d] Mason \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='c' or ans=='C')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=3;
				qno++;
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
		case 3:
			{
			printf("Thai traditional music rhythmic and is notated with a time signature.\n");
			printf("[a] Triple Meter\n");
			printf("[b] Duple Meter\n");
			printf("[c] Double Meter\n");
			printf("[d] Quadruple Meter\n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='b' or ans=='B')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=3;
				qno++;
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
		case 4:
			{
			printf("Which of these songs involve the artist waking up in a bed beside a guy?\n");
			printf("[a] Last Friday Night\n");
			printf("[b] Firework\n");
			printf("[c] Without You\n");
			printf("[d] Tonight \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='a' or ans=='A')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=3;
				qno++;
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
		case 5:
			{
			printf("The characteristic quality of a sound, independent of loudness.\n");
			printf("[a] Pitch\n");
			printf("[b] Tone\n");
			printf("[c]Timbre\n");
			printf("[d] Loudness\n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='c' or ans=='C')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=3;
				qno++;
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
			case 6:
			{
			printf("Which of these songs are not included in the medley How Six Songs Collide?\n");
			printf("[a] Passenger's Seat\n");
			printf("[b]Superman\n");
			printf("[c] Collide\n");
			printf("[d] Lucky\n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='a' or ans=='A')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=3;
				qno++;
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
			case 7:
			{
			printf("A term which means many lines of music heard simultaneously?\n");
			printf("[a] Polyphone\n");
			printf("[b] Multiphone\n");
			printf("[c]Polyphony\n");
			printf("[d] None of the above\n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='c' or ans=='C')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=3;
				qno++;
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
			case 8:
			{
			printf("Made up of a main melody in relatively slower or faster rhythmic units.\n");
			printf("[a]Vertical\n");
			printf("[b] Diagonal\n");
			printf("[c] Horizontal\n");
			printf("[d] None of the above\n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='c' or ans=='C')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=3;
				qno++;
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
	}
	getchar();
	}
	
	//ALMOST IMPOSSIBLE
	while(nLife>0 &&qno==7 && Score<35)
	{
	system("cls");
	printf("\nDifficulty: ALMOST IMPOSSIBLE");
printf("\nQuestion No.: %d\n", qno);
printf("Remaining Lives/Life: %d\n", nLife);
printf("Score: %d\n", Score);
	printf("\n \n");
	random = getRandom(4);
	
	switch (random)
	{
		case 1:
		{ 
			printf("Which of these songs was not released in 1982?\n");
			printf("[a] Pretty Woman by Roy Orbison\n");
			printf("[b] Abracadabra by Steve Miller\n");
			printf("[c] Always On Your Mind by Richard Marx\n");
			printf("[d] Analog Kid by Rush\n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='c' or ans=='C')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=5;
				nLife++;
				getCategories();
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
		}
		case 2:
			{
			printf("Which of these songs was not in the top 100 songs of 1990?\n");
			printf("[a] Hold On by Wilson Phillips\n");
			printf("[b] Ice Ice Baby by Vanilla Ice\n");
			printf("[c] It Must Have Been Love by Roxette\n");
			printf("[d] Vision of Love by Mariah Carrey\n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='b' or ans=='B')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=5;
				nLife++;
				getCategories();
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
		case 3:
			{
			printf("Whom did Katy Perry work with in her album, Teenage Dream?\n");
			printf("[a] May Martin\n");
			printf("[b] Benni Blanco\n");
			printf("[c] Tricky Stewart\n");
			printf("[d] RianTedder\n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='c' or ans=='C')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=5;
				nLife++;
				getCategories();
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
		case 4:
			{
			printf("Which of these medleys were sung by YengConstantino and AJ Rafael?\n");
			printf("[a] Let Me Get Over You Getting Over Me\n");
			printf("[b] This Love is Too Much\n");
			printf("[c] Love Begins When I Touch Your Hand\n");
			printf("[d] Just As Long As You Love Me\n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='a' or ans=='A')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=5;
				nLife++;
				getCategories();
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}

	}
	getchar();
	}
//Winning
	while(nLife>0 && Score>34)
	{
		system("cls");
		printf("\n\n");
		printf("             .----------------------------------------------------. \n");
		printf("             |                                                    | \n");
		printf("             |       _  .-\"-.  .-\"-. .--.    _   _      _   ____  | \n");
		printf("             |    ,'` | | ._ `.| ._ \\|  /  ,' '\\| | _ .' ) |   _|_|__ \n");
		printf("            _|_  / /| | | | \\ '| | \\ | ;  / ., || || || ;  |  |_(]___`\\ \n");
		printf("          /___[)' | | | | '-`/ | '-`/| | / /_| || || | \\ `\\|  '(]____ ' \n");
		printf("         | ____[) '-' | | |-'  | .-' | |/      || `' |  ;  |  |\"(]___ | \n");
		printf("         ; ___[)| .-. | | |    | |   | '-./`|  ||    | /  /|  |__(]_ / \n");
		printf("          \\ _[) |_| \\_' '_|    ._|   '---'  '--'`.__.'(_,' |_____||-` \n");
		printf("           `-|                                                    | \n");
		printf("             '----------------------------------------------------' \n\n");
		printf("                          C O N G R A T U L A T I O N S              \n\n");
		printf("                                      Y O U                          \n\n");
		printf("                            W O N   T H E   G A M E !                \n\n\n");
		Sleep(2000);
		system("pause");
		nLife=5;
		Score=0;
		//exit(0);
		getchar();
		main();
	}
}

//History Questions
void getHistory()
{
int random;
int i;
int qno=1;
char ans;
//EASY LEVEL
while(nLife>0 && qno<=2)
{
system("cls");
printf("\nDifficulty: EASY");
    printf("\nQuestion No.: %d\n", qno);
    printf("Remaining Lives/Life: %d\n", nLife);
    printf("Score: %d\n", Score);
printf("\n \n");
random = getRandom(8);
switch (random)
{
case 1:
{ 
printf("Which is the predominant religion of the Philippines?\n");
printf("[a]Christianity \n");
printf("[b]Islam \n");
printf("[c]Judaism \n");
printf("[d]Buddhism \n");
printf("Answer: ");
scanf("%c",&ans);
if (ans=='a' or ans=='A')
{
printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
Sleep(1000);
Score++;
qno++;
}
else
{
printf("\n  SORRY, YOU'RE WRONG \n");
Sleep(2000);
nLife--;
Sleep(1000);
system("cls");
getCategories();
}
//system("cls");
break;
}
case 2:
{
printf("Which of the following languages is indigenous to the Philippines?\n");
printf("[a] Basque \n");
printf("[b] Catalan \n");
printf("[c] Tagalog \n");
printf("[d] Bisaya \n");
printf("Answer: ");
scanf("%c",&ans);
if (ans=='c' or ans=='C')
{
printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
Sleep(1000);
Score++;
qno++;
}
else 
{
printf("\n  SORRY, YOU'RE WRONG \n");
Sleep(2000);
nLife--;
Sleep(1000);
system("cls");
getCategories();
}
//system("cls");
break;
}
case 3:
{
printf("From 1946 to 1964, this day was the Philippines' Independence Day.\n");
printf("[a] June 12 \n");
printf("[b] July 4 \n");
printf("[c] August 14 \n");
printf("[d] January 1 \n");
printf("Answer: ");
scanf("%c",&ans);
if (ans=='b' or ans=='B')
{
printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
Sleep(1000);
Score++;
qno++;
}
else 
{
printf("\n  SORRY, YOU'RE WRONG \n");
Sleep(2000);
nLife--;
Sleep(1000);
system("cls");
getCategories();
}
//system("cls");
break;
}
case 4:
{
printf("Who of the following explorers arrived in Philippines in 1521? \n");
printf("[a] Christopher Columbus \n");
printf("[b] Ferdinand Magellan \n");
printf("[c] James Cook \n");
printf("[d] Vasco de Gama \n");
printf("Answer: ");
scanf("%c",&ans);
if (ans=='b' or ans=='B')
{
printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
Sleep(1000);
Score++;
qno++;
}
else 
{
printf("\n  SORRY, YOU'RE WRONG \n");
Sleep(2000);
nLife--;
Sleep(1000);
system("cls");
getCategories();
}
//system("cls");
break;
}
case 5:
{
printf("Which country occupied Philippines during World War II?\n");
printf("[a] Spain \n");
printf("[b] Portugal \n");
printf("[c] Britain \n");
printf("[d] Japan \n");
printf("Answer: ");
scanf("%c",&ans);
if (ans=='d' or ans=='D')
{
printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
Sleep(1000);
Score++;
qno++;
}
else 
{
printf("\n  SORRY, YOU'RE WRONG \n");
Sleep(2000);
nLife--;
Sleep(1000);
system("cls");
getCategories();
}
//system("cls");
break;
}
case 6:
{
printf("Which country had the Philippines as its colony for more than 300 years? \n");
printf("[a] Spain \n");
printf("[b] Portugal \n");
printf("[c] Britain \n");
printf("[d] Japan \n");
printf("Answer: ");
scanf("%c",&ans);
if (ans=='a' or ans=='A')
{
printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
Sleep(1000);
Score++;
qno++;
}
else 
{
printf("\n  SORRY, YOU'RE WRONG \n");
Sleep(2000);
nLife--;
Sleep(1000);
system("cls");
getCategories();
}
break;
}
case 7:
{
printf("Which alma mater corresponds to President Noynoy Aquino?\n");
printf("[a] De La Salle University \n");
printf("[b] Ateneo de Manila University \n");
printf("[c] University of the Philippines \n");
printf("[d] University of Santo Thomas \n");
printf("Answer: ");
scanf("%c",&ans);
if (ans=='b' or ans=='B')
{
printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
Sleep(1000);
Score++;
qno++;
}
else 
{
printf("\n  SORRY, YOU'RE WRONG \n");
Sleep(2000);
nLife--;
Sleep(1000);
system("cls");
getCategories();
}
break;
}
case 8:
{
printf("What is the approximate number of islands that comprise the Philippines? \n");
printf("[a] 6,000 \n");
printf("[b] 7,000 \n");
printf("[c] 8,000 \n");
printf("[d] 9,000 \n");
printf("Answer: ");
scanf("%c",&ans);
if (ans=='b' or ans=='B')
{
printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
Sleep(1000);
Score++;
qno++;
}
else 
{
printf("\n  SORRY, YOU'RE WRONG \n");
Sleep(2000);
nLife--;
Sleep(1000);
system("cls");
getCategories();
}
//system("cls");
break;
}
}
getchar();
}

//AVERAGE LEVEL
while(nLife>0 && (qno>=3 && qno<=4))
{
system("cls");
printf("\nDifficulty: AVERAGE");
    printf("\nQuestion No.: %d\n", qno);
    printf("Remaining Lives/Life: %d\n", nLife);
    printf("Score: %d\n", Score);
printf("\n \n");
random = getRandom(8);
switch (random)
{
case 1:
{ 
printf("Which Roman emperor ordered the execution of all those people he did not like including his own mother and wife? \n");
printf("[a] Alexander the Great \n");
printf("[b] Augustus Caesar \n");
printf("[c] Nero \n");
printf("[d] Octavius \n");
printf("Answer: ");
scanf("%c",&ans);
if (ans=='c' or ans=='C')
{
printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
Sleep(1000);
Score+=2;
qno++;
}
else
{
printf("\n  SORRY, YOU'RE WRONG \n");
Sleep(2000);
nLife--;
Sleep(1000);
system("cls");
getCategories();
}
//system("cls");
break;
}
case 2:
{
printf("Who was the first Filipino president to reside in the Malacanang Palace? \n");
printf("[a] Emilio Aguinaldo \n");
printf("[b] Manuel L. Quezon \n");
printf("[c] Jose P. Laurel \n");
printf("[d] Sergio Osmeña \n");
printf("Answer: ");
scanf("%c",&ans);
if (ans=='c' or ans=='B')
{
printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
Sleep(1000);
Score+=2;
qno++;
}
else 
{
printf("\n  SORRY, YOU'RE WRONG \n");
Sleep(2000);
nLife--;
Sleep(1000);
system("cls");
getCategories();
}
//system("cls");
break;
}
case 3:
{
printf("The common people of Rome were known as what? \n");
printf("[a] Republic \n");
printf("[b] State \n");
printf("[c] Plebeians \n");
printf("[d] Public \n");
printf("Answer: ");
scanf("%c",&ans);
if (ans=='c' or ans=='C')
{
printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
Sleep(1000);
Score+=2;
qno++;
}
else 
{
printf("\n  SORRY, YOU'RE WRONG \n");
Sleep(2000);
nLife--;
Sleep(1000);
system("cls");
getCategories();
}
//system("cls");
break;
}
case 4:
{
printf("Who is known as the founding father of the Republic of China? \n");
printf("[a] Mao Tse Tung \n");
printf("[b] Chiang Kai Shek \n");
printf("[c] Sun Yat-Sen \n");
printf("[d] Wang Ming \n");
printf("Answer: ");
scanf("%c",&ans);
if (ans=='c' or ans=='C')
{
printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
Sleep(1000);
Score+=2;
qno++;
}
else 
{
printf("\n  SORRY, YOU'RE WRONG \n");
Sleep(2000);
nLife--;
Sleep(1000);
system("cls");
getCategories();
}
//system("cls");
break;
}
case 5:
{
printf("Which dynasty in China was the shortest? \n");
printf("[a] Tang Dynasty \n");
printf("[b] Ming Dynasty \n");
printf("[c] Qin Dynasty \n");
printf("[d] Han Dynasty \n");
printf("Answer: ");
scanf("%c",&ans);
if (ans=='c' or ans=='C')
{
printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
Sleep(1000);
Score+=2;
qno++;
}
else 
{
printf("\n  SORRY, YOU'RE WRONG \n");
Sleep(2000);
nLife--;
Sleep(1000);
system("cls");
getCategories();
}
//system("cls");
break;
}
case 6:
{
printf("On which country's national flag is there an eagle and a snake? \n");
printf("[a] Mexico \n");
printf("[b] Mongolia \n");
printf("[c] Brazil \n");
printf("[d] Egypt \n");
printf("Answer: ");
scanf("%c",&ans);
if (ans=='a' or ans=='A')
{
printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
Sleep(1000);
Score+=2;
qno++;
}
else 
{
printf("\n  SORRY, YOU'RE WRONG \n");
Sleep(2000);
nLife--;
Sleep(1000);
system("cls");
getCategories();
}
//system("cls");
break;
}
case 7:
{
printf("Who was offered the presidency of Israel in 1952 but turned down? \n");
printf("[a] Albert Einstein \n");
printf("[b] Julius Teehankee \n");
printf("[c] George Bush \n");
printf("[d] Julia Roberts \n");
printf("Answer: ");
scanf("%c",&ans);
if (ans=='a' or ans=='A')
{
printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
Sleep(1000);
Score+=2;
qno++;
}
else 
{
printf("\n  SORRY, YOU'RE WRONG \n");
Sleep(2000);
nLife--;
Sleep(1000);
system("cls");
getCategories();
}
//system("cls");
break;
}
case 8:
{
printf("Who was the first Roman emperor? \n");
printf("[a] Alexander the Great \n");
printf("[b] Augustus Caesar \n");
printf("[c] Nero \n");
printf("[d] Octavius \n");
printf("Answer: ");
scanf("%c",&ans);
if (ans=='b' or ans=='B')
{
printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
Sleep(1000);
Score+=2;
qno++;
}
else 
{
printf("\n  SORRY, YOU'RE WRONG \n");
Sleep(2000);
nLife--;
Sleep(1000);
system("cls");
getCategories();
}
//system("cls");
break;
}

}
getchar();
}
//HARD LEVEL
while(nLife>0 && (qno>=5 && qno<=6))
{
system("cls");
printf("\nDifficulty: HARD");
    printf("\nQuestion No.: %d\n", qno);
    printf("Remaining Lives/Life: %d\n", nLife);
    printf("Score: %d\n", Score);
printf("\n \n");
random = getRandom(8);
switch (random)
{
case 1:
{ 
printf("What was the main language spoken in Rome?\n");
printf("[a] Gallic \n");
printf("[b] Greek \n");
printf("[c] Latin \n");
printf("[d] British \n");
printf("Answer: ");
scanf("%c",&ans);
if (ans=='c' or ans=='C')
{
printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
Sleep(1000);
Score+=3;
qno++;
}
else
{
printf("\n  SORRY, YOU'RE WRONG \n");
Sleep(2000);
nLife--;
Sleep(1000);
system("cls");
getCategories();
}
//system("cls");
break;
}
case 2:
{
printf("Who was Cicero in Roman History? \n");
printf("[a] Clever lawyer and politician whose works are still read today \n");
printf("[b] Writer and orator who gave importance to law \n");
printf("[c] Playwright who wrote tragedies about famous people \n");
printf("[d] Wrote poetry on philosophy and psychology \n");
printf("Answer: ");
scanf("%c",&ans);
if (ans=='b' or ans=='B')
{
printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
Sleep(1000);
Score+=3;
qno++;
}
else 
{
printf("\n  SORRY, YOU'RE WRONG \n");
Sleep(2000);
nLife--;
Sleep(1000);
system("cls");
getCategories();
}
//system("cls");
break;
}
case 3:
{
printf("What do the well known initials SPQR stand for? \n");
printf("[a] Senatus Populusque Romanus \n");
printf("[b] Senatus Patricianus Quaestores Romani \n");
printf("[c] Sanctus Plebiusque Romanus \n");
printf("[d] The meaning has been lost. \n");
printf("Answer: ");
scanf("%c",&ans);
if (ans=='a' or ans=='A')
{
printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
Sleep(1000);
Score+=3;
qno++;
}
else 
{
printf("\n  SORRY, YOU'RE WRONG \n");
Sleep(2000);
nLife--;
Sleep(1000);
system("cls");
getCategories();
}
//system("cls");
break;
}
case 4:
{
printf("The 1935 Constitution of the Republic of the Philippines was approved by former president Franklin D. Roosevelt on what day? \n");
printf("[a] February 8, 1935 \n");
printf("[b] May 14, 1935 \n");
printf("[c] March 23, 1935 \n");
printf("[d] September 17, 1935 \n");
printf("Answer: ");
scanf("%c",&ans);
if (ans=='c' or ans=='C')
{
printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
Sleep(1000);
Score+=3;
qno++;
}
else 
{
printf("\n  SORRY, YOU'RE WRONG \n");
Sleep(2000);
nLife--;
Sleep(1000);
system("cls");
getCategories();
}
//system("cls");
break;
}
case 5:
{
printf("Who was not part of the first Triumvirate? \n");
printf("[a] Crassus \n");
printf("[b] Brutus \n");
printf("[c] Julius Ceasar \n");
printf("[d] Pompey \n");
printf("Answer: ");
scanf("%c",&ans);
if (ans=='b' or ans=='B')
{
printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
Sleep(1000);
Score+=3;
qno++;
}
else 
{
printf("\n  SORRY, YOU'RE WRONG \n");
Sleep(2000);
nLife--;
Sleep(1000);
system("cls");
getCategories();
}
//system("cls");
break;
}
case 6:
{
printf("Who was considered to be one of the greatest ancient Roman leaders although he never became an emperor? \n");
printf("[a] Augustus \n");
printf("[b] Julius Caesar \n");
printf("[c] Hadrian \n");
printf("[d] Diocletian \n");
printf("Answer: ");
scanf("%c",&ans);
if (ans=='b' or ans=='B')
{
printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
Sleep(1000);
Score+=3;
qno++;
}
else 
{
printf("\n  SORRY, YOU'RE WRONG \n");
Sleep(2000);
nLife--;
Sleep(1000);
system("cls");
getCategories();
}
//system("cls");
break;
}
case 7:
{
printf("What was the Latin League? \n");
printf("[a] Treaty \n");
printf("[b] Famous Will \n");
printf("[c] Business Contract \n");
printf("[d] Alliance \n");
printf("Answer: ");
scanf("%c",&ans);
if (ans=='a' or ans=='A')
{
printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
Sleep(1000);
Score+=3;
qno++;
}
else 
{
printf("\n  SORRY, YOU'RE WRONG \n");
Sleep(2000);
nLife--;
Sleep(1000);
system("cls");
getCategories();
}
//system("cls");
break;
}
case 8:
{
printf("What is the name of the major battle in which Octavian crushed Antony's fleet? \n");
printf("[a] Actium \n");
printf("[b] Ithaca \n");
printf("[c] Rubicon \n");
printf("[d] Thermopylae \n");
printf("Answer: ");
scanf("%c",&ans);
if (ans=='a' or ans=='A')
{
printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
Sleep(1000);
Score+=3;
qno++;
}
else 
{
printf("\n  SORRY, YOU'RE WRONG \n");
Sleep(2000);
nLife--;
Sleep(1000);
system("cls");
getCategories();
}
//system("cls");
break;
}
}
getchar();
}
//ALMOST IMPOSSIBLE
while(nLife>0 && qno==7)
{
system("cls");
printf("\nDifficulty: ALMOST IMPOSSIBLE");
    printf("\nQuestion No.: %d\n", qno);
    printf("Remaining Lives/Life: %d\n", nLife);
    printf("Score: %d\n", Score);
printf("\n \n");
random = getRandom(4);
switch (random)
{
case 1:
{ 
printf("The Mau Mau were terrorists in which country late 50's early 60's? \n");
printf("[a] Lebanon \n");
printf("[b] America \n");
printf("[c] Kenya \n");
printf("[d] Israel \n");
printf("Answer: ");
scanf("%c",&ans);
if (ans=='c' or ans=='C')
{
printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
Sleep(1000);
Score+=5;
nLife++;
getCategories();
}
else
{
printf("\n  SORRY, YOU'RE WRONG \n");
Sleep(2000);
nLife--;
Sleep(1000);
system("cls");
getCategories();
}
//system("cls");
break;
}
case 2:
{
printf("What is the oldest known science? \n");
printf("[a] Astronomy \n");
printf("[b] Biology \n");
printf("[c] Chemistry \n");
printf("[d] Physics \n");
printf("Answer: ");
scanf("%c",&ans);
if (ans=='a' or ans=='A')
{
printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
Sleep(1000);
Score+=5;
nLife++;
getCategories();
}
else 
{
printf("\n  SORRY, YOU'RE WRONG \n");
Sleep(2000);
nLife--;
Sleep(1000);
system("cls");
getCategories();
}
//system("cls");
break;
}
case 3:
{
printf("Which of the following statement is TRUE? \n");
printf("[a] The first people to settle on the mountains overlooking the Tiber River were the Latins \n");
printf("[b  Rome was at first controlled by the Carthaginians, a civilized indo-European people who had come to Italy \n");
printf("[c] The Romans established their own government after their rebellion against the Carthaginians \n");
printf("[d] The series of wars between Rome and Carthage was called the Battle at Actium \n");
printf("Answer: ");
scanf("%c",&ans);
if (ans=='a' or ans=='A')
{
printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
Sleep(1000);
Score+=5;
nLife++;
getCategories();
}
else 
{
printf("\n  SORRY, YOU'RE WRONG \n");
Sleep(2000);
nLife--;
Sleep(1000);
system("cls");
getCategories();
}
//system("cls");
break;
}
case 4:
{
printf("Which of the following statement is FALSE? \n");
printf("[a] Rome attained the height of its grandeur during the reign of Julio-Claudian Dynasty. \n");
printf("[b] Two consuls elected by the patricians headed a Roman Republic with a senate, also composed of nobles, acting as the lawmaking body. \n");
printf("[c] The plebeians won their right to be represented by electing tribunes. \n");
printf("[d] The Battle at Actium marked the end of the Roman Republic and the start of the Roman Empire. \n");
printf("Answer: ");
scanf("%c",&ans);
if (ans=='a' or ans=='A')
{
printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
Sleep(1000);
Score+=5;
nLife++;
getCategories();
}
else 
{
printf("\n  SORRY, YOU'RE WRONG \n");
Sleep(2000);
nLife--;
Sleep(1000);
system("cls");
getCategories();
}
//system("cls");
break;
}

}
getchar();
}

//Winning
	while(nLife>0 && Score>34)
	{
		system("cls");
		printf("\n\n");
		printf("             .----------------------------------------------------. \n");
		printf("             |                                                    | \n");
		printf("             |       _  .-\"-.  .-\"-. .--.    _   _      _   ____  | \n");
		printf("             |    ,'` | | ._ `.| ._ \\|  /  ,' '\\| | _ .' ) |   _|_|__ \n");
		printf("            _|_  / /| | | | \\ '| | \\ | ;  / ., || || || ;  |  |_(]___`\\ \n");
		printf("          /___[)' | | | | '-`/ | '-`/| | / /_| || || | \\ `\\|  '(]____ ' \n");
		printf("         | ____[) '-' | | |-'  | .-' | |/      || `' |  ;  |  |\"(]___ | \n");
		printf("         ; ___[)| .-. | | |    | |   | '-./`|  ||    | /  /|  |__(]_ / \n");
		printf("          \\ _[) |_| \\_' '_|    ._|   '---'  '--'`.__.'(_,' |_____||-` \n");
		printf("           `-|                                                    | \n");
		printf("             '----------------------------------------------------' \n\n");
		printf("                          C O N G R A T U L A T I O N S              \n\n");
		printf("                                      Y O U                          \n\n");
		printf("                            W O N   T H E   G A M E !                \n\n\n");
		Sleep(2000);
		system("pause");
		nLife=5;
		Score=0;
		//exit(0);
		getchar();
		main();
	}
}

//Pinoy Culture
void getPinoyculture()
{
	int random;
	//int i;
	int qno=1;
	char ans;
	
	//EASY LEVEL
	while(nLife>0 &&qno<=2 && Score<35)
	{
	system("cls");
	printf("\nDifficulty: EASY");
printf("\nQuestion No.: %d\n", qno);
printf("Remaining Lives/Life: %d\n", nLife);
printf("Score: %d\n", Score);
	printf("\n \n");
	random = getRandom(8); //get a random number
	
	switch (random) //get a question depending on the random number acquired
	{
		case 1:
		{ 
			printf("A traditional game usually played by boys during a town fiesta. A long and straight bamboo poles are polished and greased after which a prize is tied to the top. Contestants try to climb the pole in turns, and the winner is the one who succeeds in reaching the prize. What is this game?? \n");
			printf("[a]TumbangPreso \n");
			printf("[b]Iring-Iring\n");
			printf("[c]Palo-sebo \n");
			printf("[d]UbusanLahi \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='c' or ans=='C')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score++;
				qno++;
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
		}
		case 2:
			{
			printf("A fertilized duck egg, either 16 to 18 days old, which has been boiled and is eaten with salt or vinegar. What is this dish? \n");
			printf("[a] Balut \n");
			printf("[b] Pinikpikan \n");
			printf("[c] Etag \n");
			printf("[d] Soup No. 5 \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='a' or ans=='A')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score++;
				qno++;
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
		case 3:
			{
			printf("This game involves traditional earthen pot filled with goodies and a blindfolded player? \n");
			printf("[a] Panitin \n");
			printf("[b] Hampas-Palayok \n");
			printf("[c] TumbangPreso \n");
			printf("[d] Sipa \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='b' or ans=='B')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score++;
				qno++;
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
		case 4:
			{
			printf("In 1962, fossilized human remains were discovered in the Tabon Caves in Lipuun Point in Quezon, Palawan. These remains were called what?\n");
			printf("[a] Tabon Man \n");
			printf("[b] Lipuun Man \n");
			printf("[c] callao \n");
			printf("[d] Tabopa \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='a' or ans=='A')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score++;
				qno++;
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
		case 5:
			{
			printf("A devotional nine-day series of Masses in honor of the Blessed Virgin Mary in anticipation of Christmas.? \n");
			printf("[a] Fiesta\n");
			printf("[b] Simbang Gabi \n");
			printf("[c] Thanksgiving Mass \n");
			printf("[d] None of the above \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='b' or ans=='B')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score++;
				qno++;
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
			case 6:
			{
			printf("A mythical creature that could be characterized as a tree demon, but with more human characteristics. It is normally described as smoking a big ganja pipe, whose strong smell would attract human attention.\n");
			printf("[a] Kapre \n");
			printf("[b] Aswang \n");
			printf("[c] Manananggal \n");
			printf("[d] Tyyanak \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='a' or ans=='A')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score++;
				qno++;
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
				break;
			}
			case 7:
			{
			printf("Arnis, the Filipino martial arts, is also known as...\n");
			printf("[a] Kaqli \n");
			printf("[b] Eskrima \n");
			printf("[c] Both A and B \n");
			printf("[d] None of  the Above \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='b' or ans=='B')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score++;
				qno++;
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
				break;
			}
			case 8:
			{
			printf("A delicacy that is traditionally served during the Christmas season. It literally means steamed glutinous rice cooked in bamboo \n");
			printf("[a] PutoBinan \n");
			printf("[b] PutoPao \n");
			printf("[c] Putong Polo \n");
			printf("[d] PutongBumbong \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='d' or ans=='D')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score++;
				qno++;
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
	}
	getchar();
	}

	
	//AVERAGE LEVEL
	while(nLife>0 && (qno>=3 &&qno<=4 ) && Score<35)
	{
	system("cls");
	printf("\nDifficulty: AVERAGE");
	printf("\nQuestion No.: %d\n", qno);
	printf("Remaining Lives/Life: %d\n", nLife);
	printf("Score: %d\n", Score);
	printf("\n \n");
	random = getRandom(8);
	
	switch (random)
	{
		case 1:
		{ 
			printf("Sandugo Festival celebrates the blood compact between local chieftain DatuSikatuna and Captain General Miguel Lopez de Legazpi. This feast is a month long celebration culminating on the 3rd of July, at what city in Bohol?\n");
			printf("[a] Tagbilaran \n");
			printf("[b] Talibon \n");
			printf("[c] Trinidad \n");
			printf("[d] Tubigon \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='a' or ans=='A')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=2;
				qno++;
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
		}
		case 2:
			{
			printf("Marked by the image of San Clemente, the Patron Saint of fishermen.\n");
			printf("[a] de La Salle Festival \n");
			printf("[b] Higante Festival \n");
			printf("[c] High Patrons Festival \n");
			printf("[d] San Clemente Festival \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='b' or ans=='B')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=2;
				qno++;
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
		case 3:
			{
			printf("During pre-colonial period, this religion was widely practiced in the Philippines \n");
			printf("[a] Animism \n");
			printf("[b] Catholic \n");
			printf("[c] Aglipayans \n");
			printf("[d] Islam\n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='a' or ans=='A')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=2;
				qno++;
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
		case 4:
			{
			printf("A native dance in Pangasinan. It demands skill from its performers who must dance on top of a bench roughly six inches wide.\n");
			printf("[a] Tinikling \n");
			printf("[b] Pangalay \n");
			printf("[c] SayawsaBanko \n");
			printf("[d] Subli \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='c' or ans=='C')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=2;
				qno++;
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
		case 5:
			{
			printf("A blood sport between two chickens. Two owners place their chickens in the cockpit and let them fight until one of the chickens dies or critically injured. \n");
			printf("[a] Sabang \n");
			printf("[b] Sabong \n");
			printf("[c] Labong \n");
			printf("[d] Labong \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='b' or ans=='B')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=2;
				qno++;
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
			case 6:
			{
			printf("What is the eighth word in Panatang Makabayan?\n");
			printf("[a] Ito \n");
			printf("[b] Ang cycle \n");
			printf("[c] Lupang \n");
			printf("[d] Sinilangan \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='c' or ans=='C')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=2;
				qno++;
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
			case 7:
			{
			printf("A type of Philippine slit drum made of hollowed out bamboo. Pitch is determined by the length and depth of the slit.\n");
			printf("[a] Sulibao \n");
			printf("[b] Agung a tamlang \n");
			printf("[c] Kagul \n");
			printf("[d] Kulitang a tiniok \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='b' or ans=='B')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=2;
				qno++;
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
			case 8:
			{
			printf("This dance originated from Leyte Province. It mimics the movement of tikling birds, hopping over trees, grass stems, etc.\n");
			printf("[a] Tinikling \n");
			printf("[b] Subli \n");
			printf("[c] maglalatik \n");
			printf("[d] Asik \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='a' or ans=='A')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=2;
				qno++;
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}

	}
	getchar();
	}
	
	//HARD LEVEL
	while(nLife>0 && (qno>=5 &&qno<=6)&& Score<35)
	{
	system("cls");
	printf("\nDifficulty: HARD");
printf("\nQuestion No.: %d\n", qno);
printf("Remaining Lives/Life: %d\n", nLife);
printf("Score: %d\n", Score);
	printf("\n \n");
	random = getRandom(7);
	
	switch (random)
	{
		case 1:
		{ 
			printf("The chanting of the life of Christ, held in private homes during Holy Week. \n");
			printf("[a] Pabasa \n");
			printf("[b] Pakanta \n");
			printf("[c] Painit \n");
			printf("[d] Pasigaw\n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='a' or ans=='A')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=3;
				qno++;
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
		}
		case 2:
			{
			printf("This ethnic group's name came from the word ipugo, which means mulasamgaburol \n");
			printf("[a] Ifugao \n");
			printf("[b] Kalinga \n");
			printf("[c] Mangyan \n");
			printf("[d] Ilonggo \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='a' or ans=='A')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=3;
				qno++;
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
		case 3:
			{
			printf("The secondary burial jar, Manunggul Jar, has two prominent figures at the top handle of its cover representing what?\n");
			printf("[a] They represent as guards of the deceased soul \n");
			printf("[b] They represent the deceased soul and their wife/husband \n");
			printf("[c] They represent the journey of the deceased soul to the afterlife \n");
			printf("[d] Nothing, they are just there to lift the cover \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='c' or ans=='C')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=3;
				qno++;
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
		case 4:
			{
			printf("Who was the painter of Planting of the First Cross, which depicts the planting of the cross in Cebu in 1521?\n");
			printf("[a] Felix Hidalgo \n");
			printf("[b] Juan Luna \n");
			printf("[c] Napoleon Abueya \n");
			printf("[d] Vicente Manansala \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='d' or ans=='D')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=3;
				qno++;
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
		case 5:
			{
			printf("How many strings do the Philippine harp bandurria have?\n");
			printf("[a] 10 strings \n");
			printf("[b] 12 strings \n");
			printf("[c] 14 strings \n");
			printf("[d] 16 strings \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='c' or ans=='C')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=3;
				qno++;
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
			case 6:
			{
			printf("During the reign of former president Fidel V. Ramos, what did he added in the category of National Artist of the Philippines?\n");
			printf("[a] Fashion Design \n");
			printf("[b] Muralist \n");
			printf("[c] Histroical Literature \n");
			printf("[d] Literature \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='c' or ans=='C')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=3;
				qno++;
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
			case 7:
			{
			printf("Who was the first ever to receive the National Artist award?\n");
			printf("[a] Levi Celerio \n");
			printf("[b] DausyAvellana \n");
			printf("[c] Fernando Amorsolo \n");
			printf("[d] LeanorOrosa-Goquingco \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='c' or ans=='C')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=3;
				qno++;
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
	}
	getchar();
	}
	
	//ALMOST IMPOSSIBLE
	while(nLife>0 &&qno==7 && Score<35)
	{
	system("cls");
	printf("\nDifficulty: ALMOST IMPOSSIBLE");
printf("\nQuestion No.: %d\n", qno);
printf("Remaining Lives/Life: %d\n", nLife);
printf("Score: %d\n", Score);
	printf("\n \n");
	random = getRandom(4);
	
	switch (random)
	{
		case 1:
		{ 
			printf("Multi-colored wrap around, and a white blouse that Ifugao women wear during weddings \n");
			printf("[a] Torye \n");
			printf("[b] Torke \n");
			printf("[c] Torhe \n");
			printf("[d] Torge \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='d' or ans=='D')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=5;
				nLife++;
				getCategories();
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
		}
		case 2:
			{
			printf("A carved human figurine of narra wood, which a certain class of anito is said to incorporate itself when worshipped\n");
			printf("[a] Durhol \n");
			printf("[b] Burol \n");
			printf("[c] Bulol \n");
			printf("[d] Sulol \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='c' or ans=='C')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=5;
				nLife++;
				getCategories();
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
		case 3:
			{
			printf("_____ was an anthropologist and leading historian on the prehispanic Philippines.\n");
			printf("[a] Dr. Robid Bradford Fox \n");
			printf("[b] Dr. Robert Bradford Fox \n");
			printf("[c] Dr. Robin Ben Ford \n");
			printf("[d] Dr. Robert Ben Ford \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='b' or ans=='B')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=5;
				nLife++;
				getCategories();
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
		case 4:
			{
			printf("This Filipino painter killed his wife and mother-in-law in a fit of jealousy on September 23, 1892. Who is this painter?\n");
			printf("[a] Juan Luna \n");
			printf("[b] Felix Hidalgo \n");
			printf("[c] Fernando Zobel \n");
			printf("[d] Elito Circa \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='a' or ans=='A')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=5;
				nLife++;
				getCategories();
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}

	}
	getchar();
	}

//Winning
	while(nLife>0 && Score>34)
	{
		system("cls");
		printf("\n\n");
		printf("             .----------------------------------------------------. \n");
		printf("             |                                                    | \n");
		printf("             |       _  .-\"-.  .-\"-. .--.    _   _      _   ____  | \n");
		printf("             |    ,'` | | ._ `.| ._ \\|  /  ,' '\\| | _ .' ) |   _|_|__ \n");
		printf("            _|_  / /| | | | \\ '| | \\ | ;  / ., || || || ;  |  |_(]___`\\ \n");
		printf("          /___[)' | | | | '-`/ | '-`/| | / /_| || || | \\ `\\|  '(]____ ' \n");
		printf("         | ____[) '-' | | |-'  | .-' | |/      || `' |  ;  |  |\"(]___ | \n");
		printf("         ; ___[)| .-. | | |    | |   | '-./`|  ||    | /  /|  |__(]_ / \n");
		printf("          \\ _[) |_| \\_' '_|    ._|   '---'  '--'`.__.'(_,' |_____||-` \n");
		printf("           `-|                                                    | \n");
		printf("             '----------------------------------------------------' \n\n");
		printf("                          C O N G R A T U L A T I O N S              \n\n");
		printf("                                      Y O U                          \n\n");
		printf("                            W O N   T H E   G A M E !                \n\n\n");
		Sleep(2000);
		system("pause");
		nLife=5;
		Score=0;
		//exit(0);
		getchar();
		main();
	}
}

//Television Question
void getTelevision()
{
	int random;
	//inti;
	int qno=1;
	char ans;
	
	//EASY LEVEL
	while(nLife>0 &&qno<=2 && Score<35)
	{
	system("cls");
	printf("\nDifficulty: EASY");
printf("\nQuestion No.: %d\n", qno);
printf("Remaining Lives/Life: %d\n", nLife);
printf("Score: %d\n", Score);
	printf("\n \n");
	random = getRandom(8);
	
	switch (random)
	{
		case 1:
		{ 
			printf("In the hit HBO Original Series, who among the lead characters is lawyer?\n");
			printf("[a]Charlotte \n");
			printf("[b]Samantha\n");
			printf("[c]Carrie \n");
			printf("[d]Miranda \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='d' or ans=='D')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score++;
				qno++;
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
		}
		case 2:
			{
			printf("What is the correct spelling of the main antagonist in the telenovela Ina, Kapatid, Anak?\n");
			printf("[a] Margot \n");
			printf("[b] Margeaux \n");
			printf("[c] Margaux \n");
			printf("[d] Margo \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='c' or ans=='C')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score++;
				qno++;
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
		case 3:
			{
			printf("Which country was able to franchise the noon-time variety show Eat Bulaga!? \n");
			printf("[a] Indonesia \n");
			printf("[b] Malaysia \n");
			printf("[c] Singapore \n");
			printf("[d] Cambodia \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='a' or ans=='A')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score++;
				qno++;
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
		case 4:
			{
			printf("How many seasons did the American TV series Grey's Anatomy lasted?\n");
			printf("[a] 6 seasons \n");
			printf("[b] 7 seasons \n");
			printf("[c] 8 seasons \n");
			printf("[d] 9 seasons \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='d' or ans=='D')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score++;
				qno++;
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
		case 5:
			{
			printf("In the Mexican telenovela Maria Mercedes, who played the part of Maria Mercedes?\n");
			printf("[a] Carmen Salinas\n");
			printf("[b] Carmen Amezcua \n");
			printf("[c] Chantal Andere \n");
			printf("[d] Thalia \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='d' or ans=='D')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score++;
				qno++;
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
			case 6:
			{
			printf("In the hit TV commercial of McDonald's, what is the correct name of the granddaughter who was mistakenly called Gina by her grandfather?n");
			printf("[a] Karylle \n");
			printf("[b] Carmen \n");
			printf("[c] Karen \n");
			printf("[d] Camille \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='c' or ans=='C')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score++;
				qno++;
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
				break;
			}
			case 7:
			{
			printf("What is the longest running American animated TV series?\n");
			printf("[a] The Simpson \n");
			printf("[b] Family Guy \n");
			printf("[c] Futurama \n");
			printf("[d] The Flintstones \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='a' or ans=='A')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score++;
				qno++;
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
				break;
			}
			case 8:
			{
			printf("In the hit 90's series Friends, what was the name of the coffee shop where Rachel and her friends usually hung out?n");
			printf("[a] McLaren's \n");
			printf("[b] Perk @ Central \n");
			printf("[c] Central Park Coffee \n");
			printf("[d] Central Perk \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='d' or ans=='D')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score++;
				qno++;
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
	}
	getchar();
	}
	
	//AVERAGE LEVEL
	while(nLife>0 && (qno>=3 &&qno<=4 ) && Score<35)
	{
	system("cls");
	printf("\nDifficulty: AVERAGE");
printf("\nQuestion No.: %d\n", qno);
printf("Remaining Lives/Life: %d\n", nLife);
printf("Score: %d\n", Score);
	printf("\n \n");
	random = getRandom(8);
	
	switch (random)
	{
		case 1:
		{ 
			printf("What was the name of the love interest of Yna, played by Christine Hermosa, in the 2002 telenovela PangakoSa'yo?n");
			printf("[a] Angelo \n");
			printf("[b] Marco \n");
			printf("[c] Diego \n");
			printf("[d] Joshua \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='a' or ans=='A')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=2;
				qno++;
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
		}
		case 2:
			{
			printf("Who is Gossip Girl?\n");
			printf("[a] Serena van der Woodsen \n");
			printf("[b] Blair Waldorf \n");
			printf("[c] Chuck Bass \n");
			printf("[d] danHumprey \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='d' or ans=='D')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=2;
				qno++;
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
		case 3:
			{
			printf("Who is the host of the TLC show, No Reservations?\n");
			printf("[a] Wolfgang Puck \n");
			printf("[b]Nigella  Lawson \n");
			printf("[c] Jamie Oliver \n");
			printf("[d] Anthony Bourdain\n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='d' or ans=='D')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=2;
				qno++;
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
		case 4:
			{
			printf("The Philippine quiz show Digital LG Quiz that aired on GMA Network from 1999-2004 was hosted by one of the following. Who is he?\n");
			printf("[a] Paolo Bediones \n");
			printf("[b] Edu Manzano \n");
			printf("[c] Vic Sotto \n");
			printf("[d] Ryan Agoncillo \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='a' or ans=='A')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=2;
				qno++;
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
		case 5:
			{
			printf("What brand of rubbing alcohol has the tagline: Di lang pang pamilya, pang sports pa?\n");
			printf("[a] Casino Ethyl Alcohol \n");
			printf("[b] Family Rubbing Alcohol \n");
			printf("[c] Biogenic \n");
			printf("[d] Cleene \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='b' or ans=='B')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=2;
				qno++;
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
			case 6:
			{
			printf("What Philippine local brand was featured on the nth season of America's Next Top Model??\n");
			printf("[a] Penshoppe \n");
			printf("[b] Human \n");
			printf("[c] Bench \n");
			printf("[d] Kamiseta \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='c' or ans=='C')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=2;
				qno++;
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
			case 7:
			{
printf("If you were a subscriber of SkyCable, what channel number would you turn to when you want to watch a show on KBS World?\n");
			printf("[a] Channel 73 \n");
			printf("[b] Channel 75 \n");
			printf("[c] Channel 77 \n");
			printf("[d] Channel 79 \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='b' or ans=='B')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=2;
				qno++;
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
			case 8:
			{
			printf("Who is Donya Delilah's maid in the TV sitcom John and Marsha?.\n");
			printf("[a] Matutina \n");
			printf("[b] Consuela \n");
			printf("[c] Brosnia \n");
			printf("[d] Inday \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='a' or ans=='A')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=2;
				qno++;
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}

	}
	getchar();
	}
	
	//HARD LEVEL
	while(nLife>0 && (qno>=5 &&qno<=6)&& Score<35)
	{
	system("cls");
	printf("\nDifficulty: HARD");
printf("\nQuestion No.: %d\n", qno);
printf("Remaining Lives/Life: %d\n", nLife);
printf("Score: %d\n", Score);
	printf("\n \n");
	random = getRandom(8);
	
	switch (random)
	{
		case 1:
		{ 
			printf("In the first season of the talent show Stastruck, who was eliminated on the second week?\n");
			printf("[a] Nadine Samonte \n");
			printf("[b] Katrina Halili \n");
			printf("[c] Dion Ignacio \n");
			printf("[d] Christine Reyes\n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='d' or ans=='D')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=3;
				qno++;
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
		}
		case 2:
			{
			printf("Who is the first US president to be ever televised in ceremonies opening the New York World's Fair in April 1939?\n");
			printf("[a] Dwight Eisenhower \n");
			printf("[b] Harry S. Truman \n");
			printf("[c] Herbert Hoover \n");
			printf("[d] Franklin Roosevelt \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='d' or ans=='D')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=3;
				qno++;
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
		case 3:
			{
			printf("Which of the following actors played the role of Amante del Valle in the original Mara Clara series?n");
			printf("[a] Dan Fernandez \n");
			printf("[b] Juan Rodrigo \n");
			printf("[c] Noel Colet \n");
			printf("[d] EruelTongco \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='b' or ans=='B')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=3;
				qno++;
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
		case 4:
			{
			printf("Aside from John Wakefield, who is the other killer in the TV Series Harper's Island?n");
			printf("[a] Abby Mills \n");
			printf("[b] Henry Dunn \n");
			printf("[c] Marty Dunn \n");
			printf("[d] Trish Wellington \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='b' or ans=='B')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=3;
				qno++;
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
		case 5:
			{
			printf("In 2010, MTV Philippines officially closed. What was the title of the final video played by MTV Philippines?\n");
			printf("[a] You Better Run by Pat Benatar \n");
			printf("[b] Video Killed the Radio Star by the Buggles \n");
			printf("[c] She Won't Dance with Me by Rob Stewart \n");
			printf("[d] You Better You Bet by The Who \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='b' or ans=='B')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=3;
				qno++;
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
			case 6:
			{
			printf("What is the longest-running American TV show??\n");
			printf("[a] ABC World News\n");
			printf("[b] CBS Evening NEws \n");
			printf("[c] Meet the Press \n");
			printf("[d] Hallmark Hall of Fame \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='c' or ans=='C')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=3;
				qno++;
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
			case 7:
			{
			printf("Discovery Channel's song I Love the World (Boomdiada) featured one scientist's love for the eyes of what animal?n");
			printf("[a] Leopard \n");
			printf("[b] Squid \n");
			printf("[c] Lemur \n");
			printf("[d] Parakeet \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='b' or ans=='B')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=3;
				qno++;
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
			case 8:
			{
			printf("This TV station was then called Republic Broadcasting Station (RBS) and was owned by Robert Stewart.\n");
			printf("[a] GMA \n");
			printf("[b] ABS-CBN \n");
			printf("[c] TV5 \n");
			printf("[d] RPN9 \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='a' or ans=='A')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=3;
				qno++;
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
	}
	getchar();
	}
	
	//ALMOST IMPOSSIBLE
	while(nLife>0 &&qno==7 && Score<35)
	{
	system("cls");
	printf("\nDifficulty: ALMOST IMPOSSIBLE");
printf("\nQuestion No.: %d\n", qno);
printf("Remaining Lives/Life: %d\n", nLife);
printf("Score: %d\n", Score);
	printf("\n \n");
	random = getRandom(4);
	
	switch (random)
	{
		case 1:
		{ 
			printf("What is the world's oldest TV station in the world which is currently owned by the Sinclair Broadcast Group, and is the CBS affiliate for the Albany-Schenectady-Troy television market.\n");
			printf("[a] WRGB \n");
			printf("[b] WABC-TV \n");
			printf("[c] WACP \n");
			printf("[d] WAPK \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='a' or ans=='A')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=5;
				nLife++;
				getCategories();
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
		}
		case 2:
			{
			printf("What was Gloria Macapagal Arroyo's morning show hosted by JolinaMagdangal?\n");
			printf("[a] The Working President \n");
			printf("[b] The Lady President \n");
			printf("[c] The President in Action \n");
			printf("[d] Our President \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='a' or ans=='A')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=5;
				nLife++;
				getCategories();
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
		case 3:
			{
			printf("What is the title of Maalaalamo Kaya's first episode aired in 1991?\n");
			printf("[a] Baby Pictures \n");
			printf("[b] Abo \n");
			printf("[c] Sinturon \n");
			printf("[d] Bundok \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='c' or ans=='C')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=5;
				nLife++;
				getCategories();
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
		case 4:
			{
			printf("Who is dubbed as the father of Philippine television?\n");
			printf("[a] James Lindenberg \n");
			printf("[b] Harry Chaney \n");
			printf("[c] James Reuter \n");
			printf("[d] Arcadio (Cady) Carandang \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='a' or ans=='A')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=5;
				nLife++;
				getCategories();
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}

	}
	getchar();
	}
//Winning
	while(nLife>0 && Score>34)
	{
		system("cls");
		printf("\n\n");
		printf("             .----------------------------------------------------. \n");
		printf("             |                                                    | \n");
		printf("             |       _  .-\"-.  .-\"-. .--.    _   _      _   ____  | \n");
		printf("             |    ,'` | | ._ `.| ._ \\|  /  ,' '\\| | _ .' ) |   _|_|__ \n");
		printf("            _|_  / /| | | | \\ '| | \\ | ;  / ., || || || ;  |  |_(]___`\\ \n");
		printf("          /___[)' | | | | '-`/ | '-`/| | / /_| || || | \\ `\\|  '(]____ ' \n");
		printf("         | ____[) '-' | | |-'  | .-' | |/      || `' |  ;  |  |\"(]___ | \n");
		printf("         ; ___[)| .-. | | |    | |   | '-./`|  ||    | /  /|  |__(]_ / \n");
		printf("          \\ _[) |_| \\_' '_|    ._|   '---'  '--'`.__.'(_,' |_____||-` \n");
		printf("           `-|                                                    | \n");
		printf("             '----------------------------------------------------' \n\n");
		printf("                          C O N G R A T U L A T I O N S              \n\n");
		printf("                                      Y O U                          \n\n");
		printf("                            W O N   T H E   G A M E !                \n\n\n");
		Sleep(2000);
		system("pause");
		nLife=5;
		Score=0;
		//exit(0);
		getchar();
		main();
	}
}

//Vocabulary Questions
void getVocabulary()
{
	int random;
	//int i;
	int qno=1;
	char ans;
	
	//EASY LEVEL
	while(nLife>0 &&qno<=2 && Score<35)
	{
	system("cls");
	printf("\nDifficulty: EASY");
printf("\nQuestion No.: %d\n", qno);
printf("Remaining Lives/Life: %d\n", nLife);
printf("Score: %d\n", Score);
	printf("\n \n");
	random = getRandom(8);
	
	switch (random)
	{
		case 1:
		{ 
			printf("This word means, expression of admiration\n");
			printf("[a]Abhorrence \n");
			printf("[b]Convivial\n");
			printf("[c]Surfeit \n");
			printf("[d]Tribute \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='d' or ans=='D')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score++;
				qno++;
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
		}
		case 2:
			{
			printf("Unalloyed means…\n");
			printf("[a] To free from obligation; to admit citizenship \n");
			printf("[b] Pure, of high quality \n");
			printf("[c] Disinclination to action or labor \n");
			printf("[d] Having the nature of fire, volcanic \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='b' or ans=='B')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score++;
				qno++;
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
		case 3:
			{
			printf("Refute means…  \n");
			printf("[a] Challenge; disprove \n");
			printf("[b] a large group or crowd \n");
			printf("[c] To have or show sound judement \n");
			printf("[d] Happy, cheerful, genial, gay \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='a' or ans=='A')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score++;
				qno++;
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
		case 4:
			{
			printf("Precarious means…\n");
			printf("[a] To outweigh; to be superior in amount, weight, etc. \n");
			printf("[b] To take place; come about \n");
			printf("[c] A dishonest act \n");
			printf("[d] Depending upon another, risky, uncertain \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='d' or ans=='D')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score++;
				qno++;
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
		case 5:
			{
			printf("Reciprocal means…\n");
			printf("[a] Mutual; having same relationship to each otehr\n");
			printf("[b] Very hard work; intense pain or agony \n");
			printf("[c] Creaking; harsh, grating \n");
			printf("[d] a person employed to amuse \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='a' or ans=='A')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score++;
				qno++;
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
			case 6:
			{
			printf("Plumb means…\n");
			printf("[a] Being dormant slow; sluggish \n");
			printf("[b] To free from guilt \n");
			printf("[c] Perfectly straight down \n");
			printf("[d] To give great respect \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='c' or ans=='C')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score++;
				qno++;
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
				break;
			}
			case 7:
			{
			printf("Turbulence means… \n");
			printf("[a] Condition of being physically agitated; disturbance \n");
			printf("[b] Mixed up; distorted or confused \n");
			printf("[c] Brave and strong \n");
			printf("[d] Shining; translucent \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='a' or ans=='A')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score++;
				qno++;
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
				break;
			}
			case 8:
			{
			printf("Potent means…\n");
			printf("[a] Having great power or physical strenght\n");
			printf("[b] Rare \n");
			printf("[c] To frustrate the expectations of \n");
			printf("[d] Sharpness or bitterness in language or manner \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='a' or ans=='A')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score++;
				qno++;
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
	}
	getchar();
	}

	
	//AVERAGE LEVEL
	while(nLife>0 && (qno>=3 &&qno<=4 ) && Score<35)
	{
	system("cls");
	printf("\nDifficulty: AVERAGE");
printf("\nQuestion No.: %d\n", qno);
printf("Remaining Lives/Life: %d\n", nLife);
printf("Score: %d\n", Score);
	printf("\n \n");
	random = getRandom(8);
	
	switch (random)
	{
		case 1:
		{ 
			printf("This word means swollen or pompous.\n");
			printf("[a] Wrest \n");
			printf("[b] Tumult \n");
			printf("[c] Tumid \n");
			printf("[d] Polemic \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='c' or ans=='C')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=2;
				qno++;
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
		}
		case 2:
			{
		printf("This word means controversial\n");
			printf("[a] Wrest \n");
			printf("[b] Tumult \n");
			printf("[c] Raze \n");
			printf("[d] Polemic \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='d' or ans=='D')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=2;
				qno++;
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
		case 3:
			{
			printf("Undermine means… \n");
			printf("[a] Form an opinion; conclude \n");
			printf("[b]Precise time when day and night is of equal length \n");
			printf("[c] To weaken; often through subtle means \n");
			printf("[d] Withdrawal; economic downturn\n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='c' or ans=='C')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=2;
				qno++;
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
		case 4:
			{
			printf("Recusant means… \n");
			printf("[a] Arrogance \n");
			printf("[b] Disobedience of authority \n");
			printf("[c] idealistic or impractical; not amorous or sensual \n");
			printf("[d] Spotted, blotched; hence defiled, impure \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='b' or ans=='B')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=2;
				qno++;
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
		case 5:
			{
			printf("This word means to pull or force away by a violent twisting.\n");
			printf("[a] Gafe \n");
			printf("[b] Wrest \n");
			printf("[c] Dedite \n");
			printf("[d] Dilapidation \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='b' or ans=='B')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=2;
				qno++;
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
			case 6:
			{
			printf("This word means wonderful or enormous…\n");
			printf("[a] Prodigious \n");
			printf("[b] Cogent \n");
			printf("[c] Disparaging \n");
			printf("[d] Blemish \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='a' or ans=='A')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=2;
				qno++;
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
			case 7:
			{
printf("It means being mournful or sad.\n");
			printf("[a] Intreoud \n");
			printf("[b] Plaintive \n");
			printf("[c] Defrayed \n");
			printf("[d] Raze \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='b' or ans=='B')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=2;
				qno++;
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
			case 8:
			{
			printf("It means to scrape or shave off; to obliterate or tear down completely \n");
			printf("[a] Intrepid \n");
			printf("[b] Elegiac \n");
			printf("[c] Raze \n");
			printf("[d] Defrayed \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='c' or ans=='C')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=2;
				qno++;
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}

	}
	getchar();
	}
	
	//HARD LEVEL
	while(nLife>0 && (qno>=5 &&qno<=6)&& Score<35)
	{
	system("cls");
	printf("\nDifficulty: HARD");
printf("\nQuestion No.: %d\n", qno);
printf("Remaining Lives/Life: %d\n", nLife);
printf("Score: %d\n", Score);
	printf("\n \n");
	random = getRandom(8);
	
	switch (random)
	{
		case 1:
		{ 
			printf("The cries of the victims were drowned out by the general tumult. What does tumult means?\n");
			printf("[a] Childish babble \n");
			printf("[b] Absolute power, autocracy \n");
			printf("[c] Dispproval \n");
			printf("[d] A Noisy commotion\n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='d' or ans=='D')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=3;
				qno++;
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
		}
		case 2:
			{
			printf("The Persians repeatedly attacked Greece in order to subjugate the societies there. What does subjugate means?\n");
			printf("[a] Closing section of a play or noverl providing further comment \n");
			printf("[b] To move back and forth; to have wavering opinion \n");
			printf("[c] Not willing to yield or comply with what is reasonable \n");
			printf("[d] To dominate or enslave \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='d' or ans=='D')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=3;
				qno++;
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
		case 3:
			{
			printf("Zephyr means…\n");
			printf("[a] A place to keep or a collection of wild or strange animasl \n");
			printf("[b] Having qualities; of a beast; brutal \n");
			printf("[c] A gentle  wind; breeze \n");
			printf("[d] The image or likeness of a person \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='c' or ans=='c')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=3;
				qno++;
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
		case 4:
			{
			printf("This word means hard to understand or concealed. \n");
			printf("[a] Usurpation \n");
			printf("[b] Recondite \n");
			printf("[c] Precarious \n");
			printf("[d] Refute \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='b' or ans=='B')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=3;
				qno++;
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
		case 5:
			{
			printf("Xenophobia is the fear of what?\n");
			printf("[a] Fear of fereigners \n");
			printf("[b] Fear of stripes \n");
			printf("[c] Fear of colored pens \n");
			printf("[d] Fear of light switches \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='a' or ans=='A')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=3;
				qno++;
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
			case 6:
			{
			printf("Quagmire means…\n");
			printf("[a] Marshy land\n");
			printf("[b] Having the characteristic of an island \n");
			printf("[c] Generally occuring \n");
			printf("[d] To coax with insincere talk \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='a' or ans=='A')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=3;
				qno++;
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
			case 7:
			{
			printf("No movie star wanted to prattle about her personal life to the live media. What does 'prattle' means?\n");
			printf("[a] Enshroud \n");
			printf("[b] Childish babble \n");
			printf("[c] Buttoned up \n");
			printf("[d] Clamorous \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='b' or ans=='B')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=3;
				qno++;
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
			case 8:
			{
			printf("Usurpation means….\n");
			printf("[a] Not voiced or expressed \n");
			printf("[b] Peculiar behaviorl startling twist \n");
			printf("[c] Art of taking something for oneself; seizure \n");
			printf("[d] Changeable; fickle \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='c' or ans=='C')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=3;
				qno++;
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
	}
	getchar();
	}
	
	//ALMOST IMPOSSIBLE
	while(nLife>0 &&qno==7 && Score<35)
	{
	system("cls");
	printf("\nDifficulty: ALMOST IMPOSSIBLE");
printf("\nQuestion No.: %d\n", qno);
printf("Remaining Lives/Life: %d\n", nLife);
printf("Score: %d\n", Score);
	printf("\n \n");
	random = getRandom(4);
	
	switch (random)
	{
		case 1:
		{ 
			printf("Corrobboree means…\n");
			printf("[a] physical; pertaining to or having a body; tangible \n");
			printf("[b] A social gathering, especially of a boisterous nature \n");
			printf("[c] A coastal rode \n");
			printf("[d] Restriction of internal air services to country's own carriers \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='b' or ans=='B')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=5;
				nLife++;
				getCategories();
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
		}
		case 2:
			{
			printf("Autotonsorialist means…\n");
			printf("[a] Worship one's self\n");
			printf("[b] One who cuts his own hair\n");
			printf("[c] One who eats frog\n");
			printf("[d] Someone who walks without shoes\n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='b' or ans=='B')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=5;
				nLife++;
				getCategories();
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
		case 3:
			{
			printf("Quomodocunquize means…\n");
			printf("[a] To make money by any means possible\n");
			printf("[b] Having huge feet\n");
			printf("[c] A feeble attempt at humour\n");
			printf("[d] Fast eating \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='a' or ans=='A')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=5;
				nLife++;
				getCategories();
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
		case 4:
			{
			printf("12 raised to the 8th power is 429,981,696. This number is a _____.n");
			printf("[a] Quomodocunquize\n");
			printf("[b] Autotonsorialist\n");
			printf("[c] Octomerous\n");
			printf("[d] Zenzizenzizenzic\n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='d' or ans=='D')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=5;
				nLife++;
				getCategories();
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}

	}
	getchar();
	}

//Winning
	while(nLife>0 && Score>34)
	{
		system("cls");
		printf("\n\n");
		printf("             .----------------------------------------------------. \n");
		printf("             |                                                    | \n");
		printf("             |       _  .-\"-.  .-\"-. .--.    _   _      _   ____  | \n");
		printf("             |    ,'` | | ._ `.| ._ \\|  /  ,' '\\| | _ .' ) |   _|_|__ \n");
		printf("            _|_  / /| | | | \\ '| | \\ | ;  / ., || || || ;  |  |_(]___`\\ \n");
		printf("          /___[)' | | | | '-`/ | '-`/| | / /_| || || | \\ `\\|  '(]____ ' \n");
		printf("         | ____[) '-' | | |-'  | .-' | |/      || `' |  ;  |  |\"(]___ | \n");
		printf("         ; ___[)| .-. | | |    | |   | '-./`|  ||    | /  /|  |__(]_ / \n");
		printf("          \\ _[) |_| \\_' '_|    ._|   '---'  '--'`.__.'(_,' |_____||-` \n");
		printf("           `-|                                                    | \n");
		printf("             '----------------------------------------------------' \n\n");
		printf("                          C O N G R A T U L A T I O N S              \n\n");
		printf("                                      Y O U                          \n\n");
		printf("                            W O N   T H E   G A M E !                \n\n\n");
		Sleep(2000);
		system("pause");
		nLife=5;
		Score=0;
		//exit(0);
		getchar();
		main();
	}
}

//Computer Questions
void getComputer()
{
	int random;
	//int i;
	int qno=1;
	char ans;
	
	//EASY LEVEL
	while(nLife>0 && qno<=2 && Score<35)
	{
	system("cls");
	printf("\nDifficulty: EASY");
    printf("\nQuestion No.: %d\n", qno);
    printf("Remaining Lives/Life: %d\n", nLife);
    printf("Score: %d\n", Score);
	printf("\n \n");
	random = getRandom(8);
	
	switch (random)
	{
		case 1:
		{ 
			printf("What does GUI mean? \n");
			printf("[a]General Universal Interface \n");
			printf("[b] general user interface \n");
			printf("[c] Graphical User Interface \n");
			printf("[d] Graphical Universal Interfaceboard \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='c' or ans=='C')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score++;
				qno++;
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
		}
		case 2:
			{
printf("Which Microsoft Office program can execute mathematical commands?\n");
			printf("[a] Microsoft Word \n");
			printf("[b] Microsoft Excel \n");
			printf("[c] Microsoft Powerpoint \n");
			printf("[d] Microsoft OneNote \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='b' or ans=='B')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score++;
				qno++;
				}
			else 
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
		case 3:
			{
			printf("What is the name of the latest mobile operating system of BlackBerry (formerly Research in Motion)?  \n");
			printf("[a] Blackberry 10 \n");
			printf("[b] iOS \n");
			printf("[c] Z10 \n");
			printf("[d] OS10 \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='a' or ans=='A')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score++;
				qno++;
				}
			else 
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
		case 4:
			{
			printf("What keyboard shortcut is used to switch between applications/programs? \n");
			printf("[a] ALT+TAB \n");
			printf("[b] LCTRL+RCTRL\n");
			printf("[c] LCTRL+RCTRL\n");
			printf("[d] TAB+CRTL\n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='a' or ans=='A')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score++;
				qno++;
				}
			else 
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
		case 5:
			{
			printf("Which does not belong in the group? \n");
			printf("[a] .mp4 \n");
			printf("[b] .mp3 \n");
			printf("[c] .flv \n");
			printf("[d] .avi \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='b' or ans=='B')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score++;
				qno++;
				}
			else 
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
			case 6:
			{
			printf("How many versions of windows 7 were released? \n");
			printf("[a] 4 \n");
			printf("[b]5\n");
			printf("[c] 6\n");
			printf("[d] 7 \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='c' or ans=='C')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score++;
				qno++;
				}
			else 
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
				break;
			}
			case 7:
			{
			printf("What is the codename of Android 4.0? \n");
			printf("[a] Gingerbread \n");
			printf("[b] Ice Cream sandwhich\n");
			printf("[c] HoneyComb \n");
			printf("[d] JellyBean \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='b' or ans=='B')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score++;
				qno++;
				}
			else 
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
				break;
			}
			case 8:
			{
			printf("What is the name of the software package distributed by Microsoft for windows application development? \n");
			printf("[a] AppCode \n");
			printf("[b] Visual Studio \n");
			printf("[c] Visual basic\n");
			printf("[d] Application Maker \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='b' or ans=='B')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score++;
				qno++;
				}
			else 
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
	}
	getchar();
	}

//AVERAGE LEVEL
	while(nLife>0 && (qno>=3 && qno<=4 ) && Score<35)
	{
	system("cls");
	printf("\nDifficulty: AVERAGE");
    printf("\nQuestion No.: %d\n", qno);
    printf("Remaining Lives/Life: %d\n", nLife);
    printf("Score: %d\n", Score);
	printf("\n \n");
	random = getRandom(8);
	
	switch (random)
	{
		case 1:
		{ 
printf("This enables you to transform human-readable program code into a machine-readable application.\n");
			printf("[a] Converter \n");
			printf("[b] Controller \n");
			printf("[c] Compiler \n");
			printf("[d] Composer \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='c' or ans=='C')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=2;
				qno++;
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
		}
		case 2:
			{
			printf(" Which of these is the codename for OS X 10.1 \n");
			printf("[a] Tiger\n");
			printf("[b] Cheetah \n");
			printf("[c] jaguar \n");
			printf("[d] Puma \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='d' or ans=='D')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=2;
				qno++;
				}
			else 
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
		case 3:
			{
			printf(" Which antivirus program dominates the international antivirus market? \n");
			printf("[a] AVG  \n");
			printf("[b] Avast \n");
			printf("[c] McAfee \n");
			printf("[d] Eset \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='b' or ans=='B')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=2;
				qno++;
				}
			else 
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
		case 4:
			{
			printf(" The latest Windows Phone 7 update was what? \n");
			printf("[a] 7.0 \n");
			printf("[b] 7.3 \n");
			printf("[c] 7.5.6 \n");
			printf("[d] 7.8 \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='d' or ans=='D')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=2;
				qno++;
				}
			else 
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
		case 5:
			{
			printf("In most programming languages, what does 'x++' do? \n");
			printf("[a] Increase x by one\n");
			printf("[b] Increase x by two");
			printf("[c] Double  the x \n");
			printf("[d] Invalid the Command \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='a' or ans=='A')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=2;
				qno++;
				}
			else 
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
			case 6:
			{
			printf("Which of these is the codename for OS  X 10.6 \n");
			printf("[a] leopard\n");
			printf("[b] Lion \n");
			printf("[c] Snow leopard\n");
			printf("[d] Mountain Lion \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='c' or ans=='C')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=2;
				qno++;
				}
			else 
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
			case 7:
			{
			printf(" Samsung Galxy S3's Ui is \n");
			printf("[a] Sense \n");
			printf("[b] nature IX \n");
			printf("[c] Touchwiz 5.0 \n");
			printf("[d] Stock \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='b' or ans=='B')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=2;
				qno++;
				}
			else 
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
			case 8:
			{
			printf("What is the file extension of Flash animations that you can embed into a website?\n");
			printf("[a] .fla \n");
			printf("[b] .ani \n");
			printf("[c] .afa \n");
			printf("[d] .swf \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='d' or ans=='D')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=2;
				qno++;
				}
			else 
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}

	}
	getchar();
	}
//HARD LEVEL
	while(nLife>0 && (qno>=5 && qno<=6)&& Score<35)
	{
	system("cls");
	printf("\nDifficulty: HARD");
    printf("\nQuestion No.: %d\n", qno);
    printf("Remaining Lives/Life: %d\n", nLife);
    printf("Score: %d\n", Score);
	printf("\n \n");
	random = getRandom(8);
	
	switch (random)
	{
		case 1:
		{ 
			printf("As of January 2013, Windows 7 dominated __% of the desktop OS market.\n");
			printf("[a] 42\n");
			printf("[b] 44 \n");
			printf("[c] 46 \n");
			printf("[d] 48\n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='d' or ans=='D')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=3;
				qno++;
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
		}
		case 2:
			{
			printf("iOS entered the mobile OS world under the name _____.n");
			printf("[a] iOS \n");
			printf("[b] iPhone OS\n");
			printf("[c] Apple Mobile OS \n");
			printf("[d] None of the above \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='b' or ans=='B')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=3;
				qno++;
				}
			else 
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
		case 3:
			{
printf("def Function(): {Function();} is an example of what method in programming?\n");
			printf("[a] Recursion \n");
			printf("[b] Classes \n");
			printf("[c] Control Structures \n");
			printf("[d] Overriding \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='a' or ans=='A')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=3;
				qno++;
				}
			else 
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
		case 4:
			{
			printf("Windowx XP led the Desktop OS market until _____.\n");
			printf("[a] August 2009 \n");
			printf("[b] August 2010\n");
			printf("[c] August 2011 \n");
			printf("[d] August 2012 \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='c' or ans=='C')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=3;
				qno++;
				}
			else 
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
		case 5:
			{
printf("New mobile OS currently under development?\n");
			printf("[a] Ubuntu\n");
			printf("[b] Firefox\n");
			printf("[c] Both A and B\n");
			printf("[d] None of the above\n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='c' or ans=='C')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=3;
				qno++;
				}
			else 
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
			case 6:
			{
			printf("Which of these is Samsung's own mobile OS? \n");
			printf("[a]Android \n");
			printf("[b] Touchwiz\n");
			printf("[c] Bada\n");
			printf("[d] Symbian\n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='c' or ans=='C')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=3;
				qno++;
				}
			else 
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
			case 7:
			{
			printf("What is the latest version of Android?\n");
			printf("[a] 4.0\n");
			printf("[b] 4.1\n");
			printf("[c] 5.0\n");
			printf("[d] None  of the Above\n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='d' or ans=='D')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=3;
				qno++;
				}
			else 
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
			case 8:
			{
			printf("is Siri's Google rival app \n");
			printf("[a] Google Now \n");
			printf("[b] Google voice \n");
			printf("[c] Google Search \n");
			printf("[d] S voice \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='C' or ans=='c')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=3;
				qno++;
				}
			else 
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
	}
	getchar();
	}
//ALMOST IMPOSSIBLE
	while(nLife>0 && qno==7 && Score<35)
	{
	system("cls");
	printf("\nDifficulty: ALMOST IMPOSSIBLE");
    printf("\nQuestion No.: %d\n", qno);
    printf("Remaining Lives/Life: %d\n", nLife);
    printf("Score: %d\n", Score);
	printf("\n \n");
	random = getRandom(4);
	
	switch (random)
	{
		case 1:
		{ 
			printf("When was HP's last update to WebOS?\n");
			printf("[a] November 2011 \n");
			printf("[b] December 2011\n");
			printf("[c] January 2012\n");
			printf("[d] February 2012 \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='c' or ans=='C')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=5;
				nLife++;
				getCategories();
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
		}
		case 2:
			{
			printf("When was the initial release of OS X?\n");
			printf("[a] March 2000\n");
			printf("[b] March 2001\n");
			printf("[c] June 2000 \n");
			printf("[d] June 2001 \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='b' or ans=='B')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=5;
				nLife++;
				getCategories();
				}
			else 
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
		case 3:
			{
			printf("What year did Nokia announced their phone model, 5110?\n");
			printf("[a] 1996 \n");
			printf("[b] 1997 \n");
			printf("[c] 1998 \n");
			printf("[d] 1999 \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='c' or ans=='C')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=5;
				nLife++;
				getCategories();
				}
			else 
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
		case 4:
			{
			printf(" What is the default desktop environment in Ubuntu 10.04?\n");
			printf("[a] OpenGL\n");
			printf("[b] Kde \n");
			printf("[c] Gnome \n");
			printf("[d] None  of the Above \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='c' or ans=='C')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=5;
				nLife++;
				getCategories();
				}
			else 
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}

	}
	getchar();
	}

//Winning
	while(nLife>0 && Score>34)
	{
		system("cls");
		printf("\n\n");
		printf("             .----------------------------------------------------. \n");
		printf("             |                                                    | \n");
		printf("             |       _  .-\"-.  .-\"-. .--.    _   _      _   ____  | \n");
		printf("             |    ,'` | | ._ `.| ._ \\|  /  ,' '\\| | _ .' ) |   _|_|__ \n");
		printf("            _|_  / /| | | | \\ '| | \\ | ;  / ., || || || ;  |  |_(]___`\\ \n");
		printf("          /___[)' | | | | '-`/ | '-`/| | / /_| || || | \\ `\\|  '(]____ ' \n");
		printf("         | ____[) '-' | | |-'  | .-' | |/      || `' |  ;  |  |\"(]___ | \n");
		printf("         ; ___[)| .-. | | |    | |   | '-./`|  ||    | /  /|  |__(]_ / \n");
		printf("          \\ _[) |_| \\_' '_|    ._|   '---'  '--'`.__.'(_,' |_____||-` \n");
		printf("           `-|                                                    | \n");
		printf("             '----------------------------------------------------' \n\n");
		printf("                          C O N G R A T U L A T I O N S              \n\n");
		printf("                                      Y O U                          \n\n");
		printf("                            W O N   T H E   G A M E !                \n\n\n");
		Sleep(2000);
		system("pause");
		nLife=5;
		Score=0;
		//exit(0);
		getchar();
		main();
	}
}

//GamesQuestions
void getGames()
{
	int random;
	//int i;
	int qno=1;
	char ans;
	
	//EASY LEVEL
	while(nLife>0 && qno<=2 && Score<35)
	{
	system("cls");
	printf("\nDifficulty: EASY");
    printf("\nQuestion No.: %d\n", qno);
    printf("Remaining Lives/Life: %d\n", nLife);
    printf("Score: %d\n", Score);
	printf("\n \n");
	random = getRandom(8);
	
	switch (random)
	{
		case 1:
		{ 
			printf("How many pawns are there in chess?\n");
			printf("[a] 12 pawns \n");
			printf("[b] 14 pawns  \n");
			printf("[c] 16 pawns \n");
			printf("[d] 18 pawns \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='c' or ans=='C')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score++;
				qno++;
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
		}
		case 2:
			{
printf("Super Mario Bros. was developed by _____.\n");
			printf("[a]  Play Station\n");
			printf("[b]  Square Enix\n");
			printf("[c] Square Soft\n");
			printf("[d] Nintendo \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='d' or ans=='D')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score++;
				qno++;
				}
			else 
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
		case 3:
			{
			printf("What is the highest card in Poker?\n");
			printf("[a] Ace \n");
			printf("[b] King  \n");
			printf("[c] Queen \n");
			printf("[d] Number2 \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='a' or ans=='A')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score++;
				qno++;
				}
			else 
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
		case 4:
			{
			printf("What game consists of these four players: 1 judge, at least 1 killer, at least 1 police, and others are considered citizens?\n");
			printf("[a] Hostage Eye\n");
			printf("[b]  Judge  Eye\n");
printf("[c] Hostage Eye\n");
			printf("[d] Killer Eye\n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='d' or ans=='D')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score++;
				qno++;
				}
			else 
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
		case 5:
			{
			printf("DOTA means_______. \n");
			printf("[a] Defense of the Alliances \n");
			printf("[b] Defense of the Ancients\n");
			printf("[c] Defense of the Attacks\n");
			printf("[d] Defense of the Ancestors\n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='b' or ans=='B')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score++;
				qno++;
				}
			else 
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
			case 6:
			{
			printf("In the beginning of a game of checkers (or draughts), how many pieces each player have?\n");
			printf("[a] Ten \n");
			printf("[b] Twelve \n");
			printf("[c] Fourteen \n");
			printf("[d] Sixteen \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='b' or ans=='B')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score++;
				qno++;
				}
			else 
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
				break;
			}
			case 7:
			{
			printf("In the card game Magic: The Gathering, how many cards are in your starting hand?\n");
			printf("[a] 5 cards \n");
			printf("[b] 7 cards \n");
			printf("[c] 9 cards \n");
			printf("[d] 11 cards \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='b' or ans=='B')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score++;
				qno++;
				}
			else 
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
				break;
			}
			case 8:
			{
			printf("What do you need to capture to win a game of Stratego?\n");
			printf("[a] Opponent's Flag \n");
			printf("[b] Opponent's King \n");
			printf("[c] Opponent's Queen\n");
			printf("[d] Opponent's Casttle \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='a' or ans=='A')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score++;
				qno++;
				}
			else 
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
	}
	getchar();
	}

//AVERAGE LEVEL
	while(nLife>0 && (qno>=3 && qno<=4 ) && Score<35)
	{
	system("cls");
	printf("\nDifficulty: AVERAGE");
    printf("\nQuestion No.: %d\n", qno);
    printf("Remaining Lives/Life: %d\n", nLife);
    printf("Score: %d\n", Score);
	printf("\n \n");
	random = getRandom(8);
	
	switch (random)
	{
		case 1:
		{ 
			printf("1.	FarmVille was named one of the 'The 50 Worst Inventions' in what magazine? \n");
			printf("[a] TIME Magazine\n");
			printf("[b] Cosmopolitan Magazine");
			printf("[c] Candy Magazine \n");
			printf("[d] Reader's Digest  \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='a' or ans=='A')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=2;
				qno++;
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
		}
		case 2:
			{
			printf("Snow, Fang, Vanille and Lightning are famous characters of _____. \n");
			printf("[a] Final Fantasy VIII \n");
			printf("[b] Final Fantasy IX \n");
			printf("[c] Final Fantasy XII \n");
			printf("[d] Final Fantasy XIII \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='d' or ans=='D')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=2;
				qno++;
				}
			else 
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
		case 3:
			{
		printf("It was the developer of Final Fantasy, Kingdom Hearts and Dragon Quest.\n");
			printf("[a] Square Soft  \n");
			printf("[b] Gameloft \n");
			printf("[c] Square Enix \n");
			printf("[d] Konami \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='c' or ans=='C')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=2;
				qno++;
				}
			else 
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
		case 4:
			{
			printf("Xbox is a video game console manufactured by _____. \n");
			printf("[a] Apple\n");
			printf("[b] BlackBerry \n");
			printf("[c] Android \n");
			printf("[d] Microsoft \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='d' or ans=='D')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=2;
				qno++;
				}
			else 
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
		case 5:
			{
			printf("The objective of this game is to clear an abstract minefield without detonating one. What is this game?\n");
			printf("[a] Minesweep\n");
			printf("[b] Mining\n");
			printf("[c] Minesweeper\n");
			printf("[d] Miner's Sweeper \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='c' or ans=='C')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=2;
				qno++;
				}
			else 
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
			case 6:
			{
			printf("2.	Temple Run 2 was released for Android last _____. \n");
			printf("[a] January 24, 2013\n");
			printf("[b] January 25, 2013 \n");
			printf("[c] January 26, 2013\n");
			printf("[d] January 26, 2013 \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='a' or ans=='A')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=2;
				qno++;
				}
			else 
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
			case 7:
			{
			printf("Who was on the cover art of the game, NBA Live 99?\n");
			printf("[a] Antoine Walker \n");
			printf("[bTim Hardaway\n");
			printf("[c] Kevin Garnett\n");
			printf("[d] Steve Francis\n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='a' or ans=='A')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=2;
				qno++;
				}
			else 
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
			case 8:
			{
			printf("Angry Birds was released for Apple's iOS in _____.\n");
			printf("[a] December 2009\n");
			printf("[b] January 2010\n");
			printf("[c] February 2010\n");
			printf("[d] March 2010\n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='a' or ans=='A')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=2;
				qno++;
				}
			else 
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}

	}
	getchar();
	}

//HARD LEVEL
	while(nLife>0 && (qno>=5 && qno<=6)&& Score<35)
	{
	system("cls");
	printf("\nDifficulty: HARD");
    printf("\nQuestion No.: %d\n", qno);
    printf("Remaining Lives/Life: %d\n", nLife);
    printf("Score: %d\n", Score);
	printf("\n \n");
	random = getRandom(8);
	
	switch (random)
	{
		case 1:
		{ 
			printf("This card game was first launched in 1999 and it is based on a Japanese manga created by Kazuki Takahashi \n");
			printf("[a] Cardfight Vanguard\n");
			printf("[b] Magic: The Gathering\n");
			printf("[c] Naruto\n");
			printf("[d]  Yu-Gi-Oh!\n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='d' or ans=='D')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=3;
				qno++;
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
		}
		case 2:
			{
			printf("Pokemon Yellow was released in _____\n");
			printf("[a] 1998\n");
			printf("[b] 1999 \n");
			printf("[c] 2000\n");
			printf("[d] 2001  \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='a' or ans=='A')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=3;
				qno++;
				}
			else 
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
		case 3:
			{
			printf("He is the creator of Pokemon.\n");
			printf("[a] Satoshi Tajiri\n");
			printf("[b]Satoshi Tajima \n");
			printf("[c] Satoshi Tajima\n");
			printf("[d] Sarutobi Tajima\n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='a' or ans=='A')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=3;
				qno++;
				}
			else 
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
		case 4:
			{
			printf("Cooking Mama 2: _____ was released last Nov 13, 2007 in North America.\n");
			printf("[a] Dinner with Family\n");
			printf("[b]Dinner with Enemies \n");
			printf("[c] Dinner with Cousins\n");
			printf("[d] Dinner with Celebrity \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='d' or ans=='D')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=3;
				qno++;
				}
			else 
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
		case 5:
			{
			printf("The main weapon of Sora in Kingdom Hearts is ___\n");
			printf("[a] keyblade \n");
printf("[b] Keystaff\n");
			printf("[c] keyspear\n");
			printf("[d] keysword\n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='a' or ans=='A')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=3;
				qno++;
				}
			else 
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
			case 6:
			{
			printf("He designed Warcraft III: The Frozen Throne and one of the designers of League of Legends\n");
			printf("[a] Steph Feak\n");
			printf("[b] Steve Feak \n");
			printf("[c] Stephen feak \n");
			printf("[d] Steven Feak \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='b' or ans=='B')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=3;
				qno++;
				}
			else 
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
			case 7:
			{
			printf("The most widely known edition of Snakes and Ladders in the United States is Chutes and Ladders by ___\n");
			printf("[a] Milton Bradley \n");
			printf("[b]Michae;l Bradley \n");
			printf("[c] Mark Bradley \n");
			printf("[d] Mkhael Anthony Bradley \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='a' or ans=='A')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=3;
				qno++;
				}
			else 
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
			case 8:
			{
			printf("Tetris was developed by _____.\n");
			printf("[a] Alex Pajitnoy\n");
			printf("[b] Alexander Pajitnov\n");
			printf("[c] Alexey Pajitnov\n");
			printf("[d] Alexis Pajitnov\n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='c' or ans=='C')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=3;
				qno++;
				}
			else 
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
	}
	getchar();
	}
	
//ALMOST IMPOSSIBLE
	while(nLife>0 && qno==7 && Score<35)
	{
	system("cls");
	printf("\nDifficulty: ALMOST IMPOSSIBLE");
    printf("\nQuestion No.: %d\n", qno);
    printf("Remaining Lives/Life: %d\n", nLife);
    printf("Score: %d\n", Score);
	printf("\n \n");
	random = getRandom(4);
	
	switch (random)
	{
		case 1:
		{ 
			printf("When did Samurai-X initially appear in Shueisha's Weekly Sh?nen Jump? \n");
			printf("[a] 1992 \n");
			printf("[b] 1993 \n");
			printf("[c] 1994 \n");
			printf("[d] 1995 \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='c' or ans=='C')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=5;
				nLife++;
				getCategories();
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
		}
		case 2:
			{
			printf("What is the alternative subtitle of Ragnarok Online\n");
			printf("[a] The Final Destination of the Gods\n");
			printf("[b] The Final Destiny of the Gods \n");
			printf("[c] The Last Destiny of the Gods \n");
			printf("[d] The Last Destination of the Gods\n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='b' or ans=='B')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=5;
				nLife++;
				getCategories();
				}
			else 
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
		case 3:
			{
			printf("Suikoden is a role-playing video game and developed by Konami. They are also known for True Runes and _____ Stars of Destiny \n");
			printf("[a] 105\n");
			printf("[b] 106 \n");
			printf("[c] 107 \n");
			printf("[d] 108 \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='d' or ans=='D')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=5;
				nLife++;
				getCategories();
				}
			else 
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
		case 4:
			{
			printf("It holds the distinction of being the first Pokemon ever created `\n");
			printf("[a] Pikachu \n");
			printf("[b] Rhydon\n");
			printf("[c] Squirtle \n");
			printf("[d] ekans \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='b' or ans=='B')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=5;
				nLife++;
				getCategories();
				}
			else 
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}

	}
	getchar();
	}

//Winning
	while(nLife>0 && Score>34)
	{
		system("cls");
		printf("\n\n");
		printf("             .----------------------------------------------------. \n");
		printf("             |                                                    | \n");
		printf("             |       _  .-\"-.  .-\"-. .--.    _   _      _   ____  | \n");
		printf("             |    ,'` | | ._ `.| ._ \\|  /  ,' '\\| | _ .' ) |   _|_|__ \n");
		printf("            _|_  / /| | | | \\ '| | \\ | ;  / ., || || || ;  |  |_(]___`\\ \n");
		printf("          /___[)' | | | | '-`/ | '-`/| | / /_| || || | \\ `\\|  '(]____ ' \n");
		printf("         | ____[) '-' | | |-'  | .-' | |/      || `' |  ;  |  |\"(]___ | \n");
		printf("         ; ___[)| .-. | | |    | |   | '-./`|  ||    | /  /|  |__(]_ / \n");
		printf("          \\ _[) |_| \\_' '_|    ._|   '---'  '--'`.__.'(_,' |_____||-` \n");
		printf("           `-|                                                    | \n");
		printf("             '----------------------------------------------------' \n\n");
		printf("                          C O N G R A T U L A T I O N S              \n\n");
		printf("                                      Y O U                          \n\n");
		printf("                            W O N   T H E   G A M E !                \n\n\n");
		Sleep(2000);
		system("pause");
		nLife=5;
		Score=0;
		//exit(0);
		getchar();
		main();
	}
}

//Hardware Questions
void gethardware()
{
	int random;
	//int i;
	int qno=1;
	char ans;
	
	//EASY LEVEL
	while(nLife>0 && qno<=2 && Score<35)
	{
	system("cls");
	printf("\nDifficulty: EASY");
    printf("\nQuestion No.: %d\n", qno);
    printf("Remaining Lives/Life: %d\n", nLife);
    printf("Score: %d\n", Score);
	printf("\n \n");
	random = getRandom(8);
	
	switch (random)
	{
		case 1:
		{ 
			printf("In what year was the first iPhone released\n");
			printf("[a] 2005\n");
			printf("[b] 2006 \n");
			printf("[c] 2007 \n");
			printf("[d] 2008 \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='c' or ans=='C')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score++;
				qno++;
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
		}
		case 2:
			{
			printf("In what year was the first iPhone released\n");
			printf("[a] IPS \n");
			printf("[b] LCD \n");
			printf("[c] LED\n");
			printf("[d] OLED \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='a' or ans=='A')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score++;
				qno++;
				}
			else 
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
		case 3:
			{
			printf("What does the CRT in CRT screens mean\n");
			printf("[a] Clear Rate Tel\n");
			printf("[b] Cathode Ray Television\n");
			printf("[c] Clear Rate Tube\n");
			printf("[d] Cathode Ray Tube\n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='d' or ans=='D')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score++;
				qno++;
				}
			else 
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
		case 4:
			{
			printf("In computer hardware, what does GPU mean?\n");
			printf("[a] Graphics Per Unit\n");
			printf("[b] Graphics Processing Unit\n");
			printf("[c] General Processing Unit\n");
			printf("[d] General Power Unit\n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='b' or ans=='B')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score++;
				qno++;
				}
			else 
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
		case 5:
			{
			printf(" Which display technology is usually used by Samsung's line of smartphones \n");
			printf("[a] Super  LCD\n");
			printf("[b] Super  IPS\n");
			printf("[c] Super  AMOLED\n");
			printf("[d] Super  TFT\n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='c' or ans=='C')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score++;
				qno++;
				}
			else 
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
			case 6:
			{
			printf("Which one of these is Nintendo's latest gaming console ?\n");
			printf("[a] Wii U\n");
			printf("[b] Wii  V\n");
			printf("[c] Wii II\n");
			printf("[d]Wii S \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='a' or ans=='A')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score++;
				qno++;
				}
			else 
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
				break;
			}
			case 7:
			{
			printf("Which three-letter abbreviation is used when referring to a computer's 'memory'?\n");
			printf("[a]RAM \n");
			printf("[b] ROM\n");
			printf("[c] BUS\n");
			printf("[d] CDR\n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='c' or ans=='C')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score++;
				qno++;
				}
			else 
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
				break;
			}
			case 8:
			{
			printf("What does Nokia's ClearBlack technology do? \n");
			printf("[a] Increase brightness option\n");
			printf("[b] Prevents dusts and dirt \n");
			printf("[c] Increase outdoor visibility \n");
			printf("[d]  All of the aboveAll of the above\n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='c' or ans=='C')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score++;
				qno++;
				}
			else 
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
	}
	getchar();
	}

	
	//AVERAGE LEVEL
	while(nLife>0 && (qno>=3 && qno<=4 ) && Score<35)
	{
	system("cls");
	printf("\nDifficulty: AVERAGE");
    printf("\nQuestion No.: %d\n", qno);
    printf("Remaining Lives/Life: %d\n", nLife);
    printf("Score: %d\n", Score);
	printf("\n \n");
	random = getRandom(8);
	
	switch (random)
	{
		case 1:
		{ 
			printf("Enhanced Audio on HTC devices are branded as ___\n");
			printf("[a]Bose\n");
			printf("[b] Beats\n");
			printf("[c] Altec\n");
			printf("[d] Dolby\n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='b' or ans=='B')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=2;
				qno++;
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
		}
		case 2:
			{
			printf("The unibody design of the Samsung Ativ S is made of what material\n");
			printf("[a] Polycarbonate \n");
			printf("[b] Plastic \n");
			printf("[c] Metal \n");
			printf("[d] None of the above \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='c' or ans=='C')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=2;
				qno++;
				}
			else 
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
		case 3:
			{
			printf("What is the megapixel count on the HTC One\n");
			printf("[a] 8MP \n");
			printf("[b] 12MP \n");
			printf("[c] 13MP \n");
			printf("[d] None of the above \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='d' or ans=='D')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=2;
				qno++;
				}
			else 
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
		case 4:
			{
			printf("How thin is the thinnest point of the Macbook Air? \n");
			printf("[a] 0.11 in.\n");
			printf("[b] 0.22 in. \n");
			printf("[c] 0.32 in. \n");
			printf("[d] 0.44 in. \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='a' or ans=='A')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=2;
				qno++;
				}
			else 
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
		case 5:
			{
			printf("The iPhone 4 has _____ PPI (pixels per inch) \n");
			printf("[a] 314 PPI \n");
			printf("[b] 316 PPI\n");
			printf("[c] 324 PPI\n");
			printf("[d] 326 PPI \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='d' or ans=='D')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=2;
				qno++;
				}
			else 
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
			case 6:
			{
			printf("AMOLED stands for what? \n");
			printf("[a] Active Molecule Original Light Emmitting Diode\n");
			printf("[b]Active Molecule Organic Light Emmitting Diode \n");
			printf("[c]Anonymous Molecule Original Light Emmitting Diode \n");
			printf("[d] None of the Above\n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='d' or ans=='D')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=2;
				qno++;
				}
			else 
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
			case 7:
			{
			printf("The US version of the Samsung Galaxy SIII has? \n");
			printf("[a] Quadcore and 2GB of memory\n");
			printf("[b]  Quadcore and GB of memory\n");
			printf("[c] Dualcore and 2GB of memory\n");
			printf("[d] Dualcore and 1GB of memory\n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='c' or ans=='C')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=2;
				qno++;
				}
			else 
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
			case 8:
			{
			printf("Nokia's Lumia series use which kind of screen technology? \n");
			printf("[a] S-LCD \n");
			printf("[b] AMOLED \n");
			printf("[c] OLED \n");
			printf("[d] IPS \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='b' or ans=='B')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=2;
				qno++;
				}
			else 
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}

	}
	getchar();
	}
	
	//HARD LEVEL
	while(nLife>0 && (qno>=5 && qno<=6)&& Score<35)
	{
	system("cls");
	printf("\nDifficulty: HARD");
    printf("\nQuestion No.: %d\n", qno);
    printf("Remaining Lives/Life: %d\n", nLife);
    printf("Score: %d\n", Score);
	printf("\n \n");
	random = getRandom(8);
	
	switch (random)
	{
		case 1:
		{ 
			printf("Which of these is Nvideia's new mobile processor>? \n");
			printf("[a] Tegra 4 \n");
			printf("[b]Tegra 4x \n");
			printf("[c] Tegra 5\n");
			printf("[d] None\n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='a' or ans=='A')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=3;
				qno++;
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
		}
		case 2:
			{
			printf("Which tablet has the highest pixel density? \n");
			printf("[a] Samsunong Note10.1 \n");
			printf("[b] Nexus 10 \n");
			printf("[c] Apple iPad 4th Gen. \n");
			printf("[d] ASUS EEE Pad Transformer Infinity\n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='b' or ans=='B')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=3;
				qno++;
				}
			else 
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
		case 3:
			{
			printf("How many pixels per inch (PPI) does the display of the 15 inch Apple MacBook Pro with Retina Display have? \n");
			printf("[a]216 PPI \n");
			printf("[b] 227 PPI\n");
			printf("[c] 220 PPI \n");
			printf("[d] 232 PPI\n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='c' or ans=='C')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=3;
				qno++;
				}
			else 
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
		case 4:
			{
			printf("What is the weight of a 2012 Mac Mini without the OS X server? \n");
			printf("[a] 1.22 KG \n");
			printf("[b] 1.27 KG\n");
			printf("[c]1.32 KG\n");
			printf("[d] None \n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='a' or ans=='A')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=3;
				qno++;
				}
			else 
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
		case 5:
			{
			printf("USB 3.0 is _____ faster than USB 2.0\n");
			printf("[a] 3x\n");
			printf("[b] 5x\n");
			printf("[c] 10x\n");
			printf("[d] None of the above\n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='c' or ans=='C')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=3;
				qno++;
				}
			else 
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
			case 6:
			{
			printf("Retina Display technology for Apple's mobile devices are speced as ?\n");
			printf("[a] Pixel density above 250PPI\n");
			printf("[b] Pixel density above 300PPI\n");
			printf("[c] Screen resolution above 720p\n");
			printf("[d] Screen resolution above 1080p\n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='b' or ans=='B')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=3;
				qno++;
				}
			else 
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
			case 7:
			{
			printf("What is the Nexus 4's screen resolution? \n");
			printf("[a]1280x720 \n");
			printf("[b]1920x1080 \n");
			printf("[c] 1280x768\n");
			printf("[d] 960x540\n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='c' or ans=='C')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=3;
				qno++;
				}
			else 
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
			case 8:
			{
			printf("When did LG release its first touchscreen phone?\n");
			printf("[a] 2006\n");
			printf("[b] 2007\n");
			printf("[c] 2008\n");
			printf("[d] 2009\n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='a' or ans=='A')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=3;
				qno++;
				}
			else 
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
	}
	getchar();
	}
	
	//ALMOST IMPOSSIBLE
	while(nLife>0 && qno==7 && Score<35)
	{
	system("cls");
	printf("\nDifficulty: ALMOST IMPOSSIBLE");
    printf("\nQuestion No.: %d\n", qno);
    printf("Remaining Lives/Life: %d\n", nLife);
    printf("Score: %d\n", Score);
	printf("\n \n");
	random = getRandom(4);
	
	switch (random)
	{
		case 1:
		{ 
printf("From Popsci.com, what was the percentage of U.S. population who would buy an iPhone last 2012, if all of this year's sales were concentrated in the States? \n");
			printf("[a] 30\n");
			printf("[b] 50\n");
			printf("[c] 70\n");
			printf("[d] 90\n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='a' or ans=='A')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=5;
				nLife++;
				getCategories();
				}
			else
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
		}
		case 2:
			{
			printf("qHD refers to the resolution of ?\n");
			printf("[a] 960x640\n");
			printf("[b] 1280x720\n");
			printf("[c] 1280x768\n");
			printf("[d] None of the Above\n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='d' or ans=='D')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=5;
				nLife++;
				getCategories();
				}
			else 
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
		case 3:
			{
			printf("What is the lithography of the Intel Sandy Bridge processors? \n");
			printf("[a] 86 NM \n");
			printf("[b] 52 NM\n");
			printf("[c] 64 NM\n");
			printf("[d] 32 NM\n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='d' or ans=='D')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=5;
				nLife++;
				getCategories();
				}
			else 
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}
		case 4:
			{
			printf("How MUCH ram DID THE commodore 64 have? \n");
			printf("[a] 16 KB\n");
			printf("[b] 32 KB\n");
			printf("[c] 64 KB\n");
			printf("[d] 128 KB\n");
			printf("Answer: ");
			scanf("%c",&ans);
			if (ans=='c' or ans=='C')
				{
				printf("\n\nYOU GOT IT RIGHT! \nGet ready for the next question... \n");
				Sleep(1000);
				Score+=5;
				nLife++;
				getCategories();
				}
			else 
				{
				printf("\n  SORRY, YOU'RE WRONG \n");
				Sleep(2000);
				nLife--;
				Sleep(1000);
				system("cls");
				getCategories();
				}
			//system("cls");
			break;
			}

	}
	getchar();
	}

//Winning
	while(nLife>0 && Score>34)
	{
		system("cls");
		printf("\n\n");
		printf("             .----------------------------------------------------. \n");
		printf("             |                                                    | \n");
		printf("             |       _  .-\"-.  .-\"-. .--.    _   _      _   ____  | \n");
		printf("             |    ,'` | | ._ `.| ._ \\|  /  ,' '\\| | _ .' ) |   _|_|__ \n");
		printf("            _|_  / /| | | | \\ '| | \\ | ;  / ., || || || ;  |  |_(]___`\\ \n");
		printf("          /___[)' | | | | '-`/ | '-`/| | / /_| || || | \\ `\\|  '(]____ ' \n");
		printf("         | ____[) '-' | | |-'  | .-' | |/      || `' |  ;  |  |\"(]___ | \n");
		printf("         ; ___[)| .-. | | |    | |   | '-./`|  ||    | /  /|  |__(]_ / \n");
		printf("          \\ _[) |_| \\_' '_|    ._|   '---'  '--'`.__.'(_,' |_____||-` \n");
		printf("           `-|                                                    | \n");
		printf("             '----------------------------------------------------' \n\n");
		printf("                          C O N G R A T U L A T I O N S              \n\n");
		printf("                                      Y O U                          \n\n");
		printf("                            W O N   T H E   G A M E !                \n\n\n");
		Sleep(2000);
		system("pause");
		nLife=5;
		Score=0;
		//exit(0);
		getchar();
		main();
	}
}

int getRandom (int nHigh)
{
srand (time (NULL));	
	
int vektor[100];    
int random;
int uniqueflag;
int i, j;

for(i = 0; i < 100; i++) {
     do {
        /* Assume things are unique... we'll reset this flag if not. */
        uniqueflag = 1;
        random = (rand()%nHigh) + 1;
        /* This loop checks for uniqueness */
        for (j = 0; j < i && uniqueflag == 1; j++) {
           if (vektor[j] == random) {
              uniqueflag = 0;
           }
        }
     } while (uniqueflag != 1);
     vektor[i] = random;
     return random;
}
}


void getInstructions()
{
	char inst;
	//int in=1;
	
	while(1)
	{
	printf("\n\n");
	printf("                                     _______ \n");
	printf("                                    /       \\ \n");
	printf("                     ^^^^          / @    @  \\          ^^^^ \n");
	printf("     |---------------||||-------------| |---------------||||---------------| \n");
	printf("     |                                `-'                                  | \n");
	printf("     |                                                                     | \n");
	printf("     |                                                                     | \n");
	printf("     |                                                                     | \n");
	printf("     |                                                                     | \n");
	printf("     |                                                                     | \n");
	printf("     |                                                                     | \n");
	printf("     |                            [A]bout                                  | \n");
	printf("     |                            [H]ow to Play                            | \n");
	printf("     |                            [C]ategories                             | \n");
	printf("     |                            [S]coring System                         | \n");
	printf("     |                                                                     | \n");
	printf("     |                                                                     | \n\n");
	printf("          (Press any key to go back to main menu...)                       \n");
	printf("          Enter Selection: ");
	scanf(" %c",&inst);
	
	{
	//About
	if (inst=='a' || inst=='A')
		{
		system("cls");
		printf("\n\n");
		printf("\t                     Test your knowledge with \n\n\n");
		printf("\t      OOOOO  UU   UU RRRRRR      QQQQQ  UU   UU IIIII ZZZZZ \n");
		printf("\t     OO   OO UU   UU RR   RR    QQ   QQ UU   UU  III     ZZ \n");
		printf("\t     OO   OO UU   UU RRRRRR     QQ   QQ UU   UU  III    ZZ  \n");
		printf("\t     OO   OO UU   UU RR  RR     QQ  QQ  UU   UU  III   ZZ   \n");
		printf("\t      OOOO0   UUUUU  RR   RR     QQQQ Q  UUUUU  IIIII ZZZZZ \n");
		printf("\n\n");
		printf("  With only five (5) lives, will you be able to survive this challenging game? \n");
		printf(" Simple yet very informative, \"OUR QUIZ\" will help you stimulate your mind and \n");
		printf("                   learn facts that you have never known before.\n\n\n\n");
		printf(" Game Designed By:\n");
		printf("     Coronel, Antonio Louis \n");
		printf("     Janairo, Christian Marco \n");
		printf("     Ocampo, Oliver Ian \n\n\n");
		system("pause");
		system("cls");
		}
	//Categories
	else if (inst=='c' || inst=='C')
		{
		system("cls");
		printf("\n");
		printf("\t    In this game, there are 13 categories to choose from: ");
		printf("\n\t\t  1. Astronomy");
		printf("\n\t\t  2. Computer Software");
		//printf("\n\t  3. DLSU");
		printf("\n\t\t  3. Games");
		printf("\n\t\t  4. Hardware and Gadgets");
		printf("\n\t\t  5. History");
		printf("\n\t\t  6. Literature");
		printf("\n\t\t  7. Movies");
		printf("\n\t\t  8. Music");
		printf("\n\t\t  9. Pinoy Culture");
		printf("\n\t\t  10. Television");
		printf("\n\t\t  11. The Internet");
		printf("\n\t\t  12. Vocabulary \n\n");
		printf("\t                              ''~`` \n");
		printf("\t                             ( o o ) \n");
		printf("\t+-----------------------.oooO--(_)--Oooo.-----------------------+ \n");
		printf("\t|                                                               | \n");		
		printf("\t|                         .oooO                                 | \n");
		printf("\t|                         (   )   Oooo.                         | \n");
		printf("\t+--------------------------\\ (----(   )-------------------------+ \n");
		printf("\t                            \\_)    ) / \n");
		printf("\t                                  (_/ \n");
		system("pause");
		system("cls");
		}
	//Scoring System
	else if (inst=='s' || inst=='S')
		{
		system("cls");
		printf("\n\n\n\n");
		printf("     ________________________________            \n");
		printf("    |.==============================,| \n");
		printf("    ||                              || Per correct answer, the player will \n");
		printf("    ||    .----.    ,               || obtain the following points:\n");
		printf("    ||   / ><   \\  / S C O R I N G  ||         Easy - 1pt \n");
		printf("    ||  |        |/\\  S Y S T E M   ||         Average - 2pts\n");
		printf("    ||   \\______//\\/                ||         Hard - 3pts\n");
		printf("    ||   _(____)/ /                 ||         *Almost Impossible - 5pts \n");
		printf("    ||__/ ,_ _  _/__________________|| *Additional life will also be given if \n");
		printf("    '===\\___\\_) |====================' answered correctly. \n");
		printf("         |______| \n");
		printf("         |  ||  | \n");
		printf("         |__||__| \n");
		printf("         (__)(__) \n\n\n\n\n");
		system("pause");
		system("cls");
		}
	//How to Play
	else if (inst=='h' || inst=='H')
		{
		system("cls");
		printf(" .oOo.oOo.oOo.oOo.oOo.oOo.oOo.oOo.oOo.oOo.oOo.oOo.oOo.oOo.oOo.oOo.oOo.oOo.oOo.\n\n\n");
		printf("  At the start of the game, the player has five (5) lives and for every wrong \n");
		printf(" answer he inputs, one life is deducted. If the player reaches 35 points before\n");
		printf("     running out of life, he wins the game. Otherwise, the game is over. \n\n");
		printf("   He could choose from the categories listed at any order he desires. Per \n");
		printf(" category, there are four types of difficulty: easy, average, hard, and almost \n");
		printf("impossible. The first three has two questions each while the last one has only \n");
		printf("         one. For the scoring system, please see the Score System menu.\n\n");
		printf("   For any incorrect answer, the player will return to the categories menu. \n");
		printf("  If you wish to go back to the main menu, you can only do it in the categories\n");
		printf("              screen. And by doing so, you will lose your game.\n\n");
		printf("  Be mindful also of the letters you are entering - letters beside from A to D \n");
		printf("             will be considered as an incorrect answer already. \n\n");
		printf("     So now, you know all the basics in playing \"OUR QUIZ\". Enjoy!\n\n\n");
		printf(" .oOo.oOo.oOo.oOo.oOo.oOo.oOo.oOo.oOo.oOo.oOo.oOo.oOo.oOo.oOo.oOo.oOo.oOo.oOo.\n");
		system("pause");
		system("cls");
		}
	else
		{
			getchar();
			main();
		}
	}
	}
	getchar();
}
