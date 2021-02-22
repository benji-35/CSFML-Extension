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
    sfSoundBuffer_destroy(clip->buffer);
    free(clip->volume);
    free(clip);
}

void destroy_audio_source(audio_source *source)
{
    if (source == NULL)
        return;
    free(source->loop);
    free(source->max_time);
    free(source->time);
    sfSound_destroy(source->sound);
    free(source->volume);
    free(source);
}