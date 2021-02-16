/*
** EPITECH PROJECT, 2020
** Untitled (Workspace)
** File description:
** my_game_object
*/

#ifndef MY_GAME_OBJECT_H_
#define MY_GAME_OBJECT_H_

#include "game_object_structure.h"
animation *create_animation(sfIntRect rect);
game_object *create_game_object(char *path, sfIntRect rect, float x, float y);
void set_anim_line(animation *anim, int id_line, int line, int nb_anims);
void set_anim_line_object(game_object *obj, int id, int line, int nb);
void destroy_anim(animation *anim);
void destroy_game_object(game_object *obj);
void show_object(game_object *obj, sfRenderWindow *win);
void set_game_object_velocity(game_object *obj, float x, float y);
void clock_anim(animation *anim, sfClock *clock_anim_player);
void update_anim(animation *anim);

#endif /* !MY_GAME_OBJECT_H_ */
