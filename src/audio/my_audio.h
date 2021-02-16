/*
** EPITECH PROJECT, 2020
** create sfml libraries
** File description:
** my_audio
*/

#ifndef MY_AUDIO_H_
#define MY_AUDIO_H_

#include <SFML/Audio.h>
#include "my_audio_structure.h"

audio_source *create_audio_source(audio_clip *clip);
void destroy_audio_source(audio_source *source);
audio_clip *create_audio_clip(char *path_audio);
void destroy_audio_clip(audio_clip *clip);
void set_audio_source_volume(audio_source *source, float vol);

#endif /* !MY_AUDIO_H_ */
