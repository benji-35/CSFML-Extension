/*
** EPITECH PROJECT, 2020
** create sfml libraries
** File description:
** list_structure
*/

#ifndef LIST_STRUCTURE_H_
#define LIST_STRUCTURE_H_

typedef enum flags_e {
    NONE,
    INT,
    VECTOR,
    FLOAT,
    DOUBLE,
    CHAR,
    STAR_CHAR,
    WINDOW,
    AUDIO_SOURCE,
    AUDIO_CLIP,
    BUTTON,
    FONT,
    TEXT,
    BACKGROUND,
    CLOCK
} flags;

typedef enum tags_e {
    NO_TAG,
    MAP
} tags;

typedef struct list_s {
    void *data;
    char *label;
    struct list_s *next;
    int *freeable;
    flags *flag;
    tags *tag;
} list;

#endif /* !LIST_STRUCTURE_H_ */
