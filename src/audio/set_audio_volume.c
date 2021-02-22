/*
** EPITECH PROJECT, 2020
** create sfml libraries
** File description:
** set_audio_volume
*/

#include "my_audio_structure.h"

void set_audio_source_volume(audio_source *source, float vol)
{
    *source->volume = vol;
    sfSound_setVolume(source->sound, vol);
}