/*
** EPITECH PROJECT, 2020
** Untitled (Workspace)
** File description:
** set_anim_line
*/

#include "game_object_structure.h"

void set_anim_line(animation *anim, int id_line, int line, int nb_anims)
{
    if (id_line == 0) {
        *anim->idle = line;
    }
    if (id_line == 1) {
        *anim->jump = line;
    }
    if (id_line == 2) {
        *anim->walk = line;
    }
    if (id_line == 3) {
        *anim->run = line;
    }
    if (id_line == 4) {
        *anim->attack = line;
    }
}

void set_anim_line_object(game_object *obj, int id, int line, int nb)
{
    set_anim_line(obj->anims, id, line, nb);
}