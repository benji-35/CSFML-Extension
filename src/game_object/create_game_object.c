/*
** EPITECH PROJECT, 2020
** Untitled (Workspace)
** File description:
** create_game_object
*/

#include <stdlib.h>
#include "game_object_structure.h"

animation *create_animation(sfIntRect rect);

void init_game_object(game_object *obj)
{
    int *collidable = malloc(sizeof(int));
    int *is_jumping = malloc(sizeof(int));
    *collidable = 1;
    *is_jumping = 0;
    obj->collidable = collidable;
    obj->is_jumping = is_jumping;
    obj->displayable = 1;
}

game_object *create_game_object(char *path, sfIntRect rect, float x, float y)
{
    game_object *new_object = malloc(sizeof(game_object));
    sfVector2f *velocity = malloc(sizeof(sfVector2f));
    vector4f *corners = malloc(sizeof(vector4f));
    animation *anim = create_animation(rect);
    sfTexture *texture = sfTexture_createFromFile(path, NULL);
    sfSprite *sprite = sfSprite_create();
    int *gravity = malloc(sizeof(int));
    init_game_object(new_object);
    sfSprite_setTexture(sprite, texture, sfFalse);
    sfSprite_setTextureRect(sprite, *anim->rect);
    sfSprite_setPosition(sprite, (sfVector2f){x, y});
    *velocity = (sfVector2f) {0.0f, 0.0f};
    *gravity = 1;
    new_object->gravity = gravity;
    new_object->corners = corners;
    new_object->path = path;
    new_object->sprite = sprite;
    new_object->texture = texture;
    new_object->velocity = velocity;
    new_object->anims = anim;
    return (new_object);
}