/*
  game.h

  For TuxMath
  The main game loop!

  by Bill Kendrick
  bill@newbreedsoftware.com
  http://www.newbreedsoftware.com/


  Part of "Tux4Kids" Project
  http://www.tux4kids.org/
      
  August 26, 2001 - February 18, 2004
*/


#ifndef GAME_H
#define GAME_H

#define MAX_COMETS 10
#define NUM_CITIES 4   /* MUST BE AN EVEN NUMBER! */

#define NUM_BKGDS 5

#define MAX_CITY_COLORS 4

typedef struct city_type {
  int alive, expl, shields;
  int x;
} city_type;

typedef struct laser_type {
  int alive;
  int x1, y1;
  int x2, y2;
} laser_type;

enum {
  OPER_ADD,
  OPER_SUB,
  OPER_MULT,
  OPER_DIV,
  NUM_OPERS
};

extern char operchars[NUM_OPERS];

extern char * oper_opts[NUM_OPERS];

extern char * oper_alt_opts[NUM_OPERS];

enum {
  Q_RANGE_1_5,
  Q_RANGE_6_12,
  Q_RANGE_13_20,
  NUM_Q_RANGES
};

int game(void);

void draw_nums(char* str, int x, int y);

#endif
