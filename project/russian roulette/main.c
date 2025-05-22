#include "russian-roulette.h"

void	print_intro()
{
	const char *art =
	"\n"
	"\n"
	" (                                _\n"
	" )                               /=>\n"
   ".( +____________________/\\/\\___ / /|\n"
	".''._____________'._____      / /|/\\ \n"
   ": () :              :\\ ----\\|    \\ )\n"
	"'..'______________.'0|----|      \\ \n"
	"                  0_0/____/        \\ \n"
	"                      |----    /----\\ \n"
	"                      || -\\ --|      \\ \n"
	"                      ||   || ||\\      \\ \n"
	"                        \\____// '|      \\ \n"
 "Bang! Bang!                    .'/       |\n"
"			      .:/        |\n"
"			      :/_________|\n"
"\n"
"\n"
"\n";
write(1, art, ft_strlen(art));
}

void	display_cover()
{
	const char	*art =
	"=====================================\n"
        "||                                 ||\n"
        "||        RUSSIAN ROULETTE         ||\n"
        "||                                 ||\n"
        "||     One Bullet. One Chance.     ||\n"
        "||         Press 'y' to play       ||\n"
        "||                                 ||\n"
        // "||        Player vs Player         ||\n"
        // "||      Bet your DATA folders      ||\n"
        "||                                 ||\n"
        "=====================================\n"
		"\n"
		"\n"
		"\n";
	write(1, art, ft_strlen(art));
}

int main()
{
	srand(time(NULL));

	int	bullet_chamber;
	int	current_chamber;
	char input[10];

	bullet_chamber = rand() % BULLET_SIZE;
	current_chamber = 0;
	print_intro();
	sleep(2);
	display_cover();
	while (1)
	{
		ft_fget(input, sizeof(input));
		if (input[0] == 'y' || input[0] == 'Y')
		{
			ft_putstr("Spin The Chamber\n");
			sleep(5);
			if (current_chamber == bullet_chamber)
			{
				ft_putstr("YOU ARE DEAD !!!\n");
				sleep(1);
				break;
			}
			else
			{
				ft_putstr("Will You Take The Shot?\n");
				sleep(3);
				ft_putstr("YOUR TURN !!!\n");
			}
			current_chamber++;
			if (current_chamber >= BULLET_SIZE)
			{
				ft_putstr("SURVIVOR !!!\n");
			}
		}
		else
		{
			ft_putstr("PASS 'y' TO CONTINUE PLAYING THE GAME !!\n");
		}
	}
	return 0;
}
