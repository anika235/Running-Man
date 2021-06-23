#ifndef HEADER_H
#define HEADER_H

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_mixer.h>
#include <SDL2/SDL_ttf.h>
#include <stdio.h>
#include <string>
#include <time.h>

//Screen dimension constants
const int SCREEN_WIDTH = 800;
const int SCREEN_HEIGHT = 600;

bool init();
bool loadMedia();
void close();
SDL_Texture* loadtexture(std::string path );


enum TYPE
{
    DOG,
    ZOMBIE,
    GHOST,
    TOTAL
};
extern SDL_Window*  gWindow;
extern SDL_Renderer* gRenderer;
extern SDL_Texture* BG1;
extern SDL_Texture* Coin;
extern SDL_Texture* Man;
extern SDL_Texture* Obstacle1;
extern SDL_Texture* Obstacle2;
extern SDL_Texture* Obstacle3;
extern SDL_Texture* gameOver;
extern SDL_Texture* menu;
extern SDL_Texture* menu1;
extern SDL_Texture* mTexture;
extern SDL_Texture* newgame;
extern SDL_Texture* help;
extern SDL_Texture* highscore;
extern SDL_Texture* gEnd;
extern SDL_Texture* Continue;
extern SDL_Texture* city;
extern SDL_Texture* forest;
extern SDL_Texture* scoreTexture;
extern SDL_Texture* gScoretexture;
extern SDL_Texture* scoreImage;
extern SDL_Texture* menu2;
extern SDL_Texture* EnterName;
extern SDL_Texture* life;
extern SDL_Texture* tutorial;
extern SDL_Texture* sl;
extern SDL_Texture* nameTexture;
extern SDL_Texture* ScoreName;
extern SDL_Texture* HighScore;
extern SDL_Texture* Image;

extern SDL_Texture* BG2;
extern SDL_Texture* Star;
extern SDL_Texture* dog;
extern SDL_Texture* enemy_zombie;
extern SDL_Texture* knife_texture;
extern SDL_Texture* enemy_ghost;
extern SDL_Texture* knifeTexture;
extern SDL_Texture* gKnifeTexture;

extern Mix_Music* menusound;
extern Mix_Music* citysound;
extern Mix_Music* forestsound;
extern Mix_Chunk* dogsound;
extern Mix_Chunk* zombiesound;
extern Mix_Chunk* coinsound;
extern Mix_Chunk* diesound;
extern Mix_Chunk* collidesound;
extern Mix_Chunk* weaponsound;
extern Mix_Chunk* mouseclick;

extern SDL_Rect dog_spriteclips[12];
extern SDL_Rect zombie_spriteclips[30];
extern SDL_Rect ghost_spriteclips[30];

extern int knifes_counter;


struct animal
{
    SDL_Rect body;
    int speed;
    int lives;
};

extern struct animal enemy[5];

struct weapon
{
    SDL_Rect hit = {150,420,40,40};
    bool available = false;
};

extern struct weapon knife[80];

struct start_and_end
{
    int start = 0;
    int finish = 0;
};

extern struct start_and_end indicator;
extern SDL_Rect star;
extern SDL_Rect coin;

extern TTF_Font* gFont;

extern SDL_Rect gSpriteClips[ 6 ];
extern char scorestring[100];
extern char knifestring[500];


extern int mWidth;
extern int mHeight;


extern bool go_to_menu;
extern bool quit;
extern int frame;
extern int scrollingOffset;
extern int x_pos;
extern int y_pos;
extern int up;
extern int down;
extern int ground;
extern int y_velocity;

extern int buttons,mouse_x,mouse_y,buttons1,mouse_x1,mouse_y1;
extern bool pause;
extern bool option;
extern int obs_x1;
extern int obs_x2;
extern int obs_x3;
extern int obs_x1_width;
extern int obs_x2_width ;
extern int obs_x3_width;
extern int score;
extern int mode;
extern int Scoremode;
extern bool sound;

extern int alive;
extern int i,j,k;
extern bool start;
extern bool showmodemenu;
extern bool showhighscore;


void render(SDL_Texture*,int,int,int,int,SDL_Rect*);
void OBSTACLES_AND_COIN_POSITION(int*,int*,int*,int*,int*,int*,int*,int*,int,bool);
SDL_Texture* loadFromRenderedText( std::string textureText, SDL_Color textColor );
void int_to_string(int);
SDL_Texture* scoreprint(std::string textureText);
void nameprint();
void middle_menu();
void start_menu();
void mode_menu();
void mousehandling_middle();
void mousehandling_start();
void mousehandling_mode();
void pollevent();
void man_sprite();
void dog_sprite();
void zombie_sprite();
void ghost_sprite();
void jump(int y_pos_start);
void obstacle();
void coins(int coin_position1,int coin_position2,bool star_or_not);
void gameover();
void firstMode();
void setup_enemy();
void setup_knifes();
void rendering_knifes();
void managing_knife();
void int_to_string_knife(int a);
SDL_Texture* knifeprint( std::string textureText );
void knives();
void enemies();
void Killing_Enemy(SDL_Rect oponent,int a,SDL_Rect star);
void secondMode();
void instruction();
void HIGHSCORE(char path[],char name[]);
void SHOW_HIGHSCORE(char path[]);
void mousehandling_highscore();
#endif
