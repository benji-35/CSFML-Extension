/*
** EPITECH PROJECT, 2020
** create sfml libraries
** File description:
** destroy_audio_source
*/

#include <stdlib.h>
#include "my_audio_structure.h"

void destroy_audio_clip(audio_clip *clip)
{
    if (clip == NULL)
        return;
    sfSoundBuffer_destroy(clip->buffer);
    free(clip);
}

void destroy_audio_source(audio_source *source)
{
    if (source == NULL)
        return;
    sfSound_destroy(source->sound);
    free(source);
}