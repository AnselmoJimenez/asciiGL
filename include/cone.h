#ifndef CONE_H_
#define CONE_H_

// cone type to track data of each cone
typedef struct {
    float r;  // first radius
    int l;  // length of cone
} cone_t;

// Render a frame of the cone
void render_cone_frame(cone_t *cone, float *z, char *out);

#endif