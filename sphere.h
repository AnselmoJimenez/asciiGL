#ifndef SPHERE_H_
#define SPHERE_H_

typedef struct {
    int r;      // radius of sphere
    int x;
    int y;
    int z;      // x, y, and z offsets
} sphere_t;

// determine the character to display based off of the lumination
char determine_sphere_lumination(sphere_t *sphere, float sx, float sy, float sz);

// Render a frame of the sphere
void render_sphere_frame(sphere_t *sphere, float *z, char *out);

#endif