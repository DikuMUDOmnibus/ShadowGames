/***************************************************************************
 *   Original Diku Mud copyright (C) 1990, 1991 by Sebastian Hammer,        *
 *  Michael Seifert, Hans Henrik St{rfeldt, Tom Madsen, and Katja Nyboe.   *
 *                                                                         *
 *  Merc Diku Mud improvments copyright (C) 1992, 1993 by Michael          *
 *  Chastain, Michael Quan, and Mitchell Tse.                              *
 *                                                                         *
 *  In order to use any part of this Merc Diku Mud, you must comply with   *
 *  both the original Diku license in 'license.doc' as well the Merc       *
 *  license in 'license.txt'.  In particular, you may not remove either of *
 *  these copyright notices.                                               *
 *                                                                         *
 *  Much time and thought has gone into this software and you are          *
 *  benefitting.  We hope that you share your changes too.  What goes      *
 *  around, comes around.                                                  *
 ***************************************************************************/

#if defined(macintosh)
#include <types.h>
#else
#include <sys/types.h>
#endif
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "merc.h"


void do_level( CHAR_DATA *ch, char *argument )
{
    /*char      arg [MAX_INPUT_LENGTH];
    argument = one_argument( argument, arg );*/
	int x;

    if (IS_NPC(ch)) return;
	send_to_char("\n\r",ch);
    send_to_char("================================================================================\n\r",ch);
    send_to_char("|          _-= Stance Skill =-_                    _-= Weapon Skill =-_        |\n\r",ch);
    send_to_char("================================================================================\n\r",ch);
  	
	for (x = 0;x < 12;x++)
	{
		if (x == 0)	        send_to_char("Normal Stance = ",ch);
		else if (x == 1)	send_to_char("Viper =         ",ch);
		else if (x == 2)	send_to_char("Crane =         ",ch);
		else if (x == 3)	send_to_char("Crab =          ",ch);
		else if (x == 4)	send_to_char("Mongoose =      ",ch);
		else if (x == 5)	send_to_char("Bull =          ",ch);
		else if (x == 6)	send_to_char("Mantis =        ",ch);
		else if (x == 7)	send_to_char("Dragon =        ",ch);
		else if (x == 8)	send_to_char("Tiger =         ",ch);
		else if (x == 9)	send_to_char("Monkey =        ",ch);
		else if (x == 10)	send_to_char("Swallow =       ",ch);
		
		if (x < 11)
		{
		if (ch->stance[x] <= 1  )      send_to_char("completely unskilled  ",ch);
		else if (ch->stance[x] <= 25 ) send_to_char("apprentice            ",ch);
		else if (ch->stance[x] <= 50 ) send_to_char("trainee               ",ch);
		else if (ch->stance[x] <= 75 ) send_to_char("student               ",ch);
		else if (ch->stance[x] <= 100) send_to_char("fairly experienced    ",ch);
		else if (ch->stance[x] <= 125) send_to_char("well trained          ",ch);
		else if (ch->stance[x] <= 150) send_to_char("highly skilled        ",ch);
		else if (ch->stance[x] <= 175) send_to_char("expert                ",ch);
		else if (ch->stance[x] <= 199) send_to_char("master                ",ch);
		else if (ch->stance[x] >= 200) send_to_char("grand master          ",ch);
		}
		if (x == 0)	        send_to_char("  Slice =        ",ch);
		else if (x == 1)	send_to_char("  Stab =         ",ch);
		else if (x == 2)	send_to_char("  Slash =        ",ch);
		else if (x == 3)	send_to_char("  Whip =         ",ch);
		else if (x == 4)	send_to_char("  Claw =         ",ch);
		else if (x == 5)	send_to_char("  Blast =        ",ch);
		else if (x == 6)	send_to_char("  Pound =        ",ch);
		else if (x == 7)	send_to_char("  Crush =        ",ch);
		else if (x == 8)	send_to_char("  Grep =         ",ch);
		else if (x == 9)	send_to_char("  Biter =        ",ch);
		else if (x == 10)	send_to_char("  Pierce =       ",ch);                 
		else if (x == 11)	send_to_char("                                        Suck =         ",ch);

                if      (ch->wpn[x + 1] <= 1  )      send_to_char("totally unskilled\n\r",ch);
		else if (ch->wpn[x + 1] <= 25 ) send_to_char("slightly skilled          \n\r",ch);
		else if (ch->wpn[x + 1] <= 50 ) send_to_char("reasonable             \n\r",ch);
		else if (ch->wpn[x + 1] <= 75 ) send_to_char("fairly competent             \n\r",ch);
		else if (ch->wpn[x + 1] <= 100) send_to_char("highly skilled  \n\r",ch);
		else if (ch->wpn[x + 1] <= 125) send_to_char("very dangerous        \n\r",ch);
		else if (ch->wpn[x + 1] <= 150) send_to_char("extremely deadly      \n\r",ch);
		else if (ch->wpn[x + 1] <= 175) send_to_char("expert              \n\r",ch);
		else if (ch->wpn[x + 1] <= 199) send_to_char("master              \n\r",ch);
		else if (ch->wpn[x + 1] == 200) send_to_char("grand master        \n\r",ch);
		else if (ch->wpn[x + 1] <= 1000) send_to_char("supremely skilled   \n\r",ch);

	}
	
    send_to_char("================================================================================\n\r",ch);
	
	return;
}
