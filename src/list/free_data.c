/*
** EPITECH PROJECT, 2020
** create sfml libraries
** File description:
** free_data
*/

#include <stdlib.h>
#include "my_audio_structure.h"
#include "my_window_structures.h"
#include "background_structure.h"
#include "my_buttons_structure.h"
#include "game_object_structure.h"
#include "list_structure.h"
#include "physics_structre.h"

void destroy_window(window_t *window);
void destroy_button(button *btn);
void destroy_audio_source(audio_source *source);
void destroy_audio_clip(audio_clip *clip);
void destroy_background(background *bg);
void destroy_anim(animation *anim);
void destroy_game_object(game_object *obj);
void destroy_physics(physic *phy);

void second_free(void *data, flags flag)
{
    if (flag == CLOCK)
        sfClock_destroy(data);
    if (flag == ANIMATION)
        destroy_anim(data);
    if (flag == GAME_OBJECT)
        destroy_game_object(data);
    if (flag == PHYSICS)
        destroy_physics(data);
    if (flag == MUSIC)
        sfMusic_destroy(data);
    if (flag == TEXTURE)
        sfTexture_destroy(data);
    if (flag == SPRITE)
        sfSprite_destroy(data);
    return;
}

void free_data(void *data, flags flag, int freeable)
{
    if (freeable == 0)
        return;
    if (flag <= STAR_CHAR)
        free(data);
    if (flag == WINDOW)
        destroy_window(data);
    if (flag == BUTTON)
        destroy_button(data);
    if (flag == FONT)
        sfFont_destroy(data);
    if (flag == TEXT)
        sfText_destroy(data);
    if (flag == AUDIO_SOURCE)
        destroy_audio_source(data);
    if (flag == AUDIO_CLIP)
        destroy_audio_clip(data);
    if (flag == BACKGROUND)
        destroy_background(data);
    second_free(data, flag);
}