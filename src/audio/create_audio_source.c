/*
** EPITECH PROJECT, 2020
** create sfml libraries
** File description:
** create_audio_source
*/

#include <SFML/System.h>
#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <stdlib.h>
#include "my_audio_structure.h"

audio_clip *create_audio_clip(char *path_audio)
{
    audio_clip *new_clip = malloc(sizeof(audio_clip));
    sfSoundBuffer *buffer = sfSoundBuffer_createFromFile(path_audio);
    float volume = 1.0f;

    new_clip->volume = volume;
    new_clip->buffer = buffer;
    new_clip->path_audio = path_audio;
    return (new_clip);
}

audio_source *create_audio_source(audio_clip *clip)
{
    audio_source *new_audio_source = malloc(sizeof(audio_source));
    sfSound *sound = sfSound_create();
    float volume = 1.0f;
    float time = sfTime_asSeconds(sfSoundBuffer_getDuration(clip->buffer));
    int loop = 0;
    float max_time = time;

    sfSound_setBuffer(sound, clip->buffer);
    sfSound_setVolume(sound, volume);
    sfSound_setLoop(sound, loop);
    new_audio_source->clip = clip;
    new_audio_source->sound = sound;
    new_audio_source->time = time;
    new_audio_source->volume = volume;
    new_audio_source->max_time = max_time;
    new_audio_source->loop = loop;
    return (new_audio_source);
}