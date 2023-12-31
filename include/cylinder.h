#ifndef CYLINDER_H_
#define CYLINDER_H_

typedef struct {
    int r;    // radius
    int l;    // length of the cylinder
} cylinder_t;

// Determines the character to put on the cylinder
char determine_cylinder_char(cylinder_t *cylinder, int cz);

// Render a frame of the cylinder
void render_cylinder_frame(cylinder_t *cylinder, float *z, char *out);

#endif