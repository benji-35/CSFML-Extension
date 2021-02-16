/*
** EPITECH PROJECT, 2020
** create sfml libraries
** File description:
** my_audio_structure
*/

#ifndef MY_AUDIO_STRUCTURE_H_
#define MY_AUDIO_STRUCTURE_H_

#include <SFML/Audio.h>

typedef struct audio_clip
{
    char *path_audio;
    sfSoundBuffer *buffer;
    float volume;

} audio_clip;

typedef struct audio_source_s {
    audio_clip *clip;
    sfSound *sound;
    float volume;
    float time;
    float max_time;
    int loop;
} audio_source;

#endif /* !MY_AUDIO_STRUCTURE_H_ */
