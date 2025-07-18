// mathlib.c -- math primitives

#include "cmdlib.h"
#include "mathlib.h"

vec3_t vec3_origin = {0, 0, 0};


double VectorLength(vec3_t v) {
    int i;
    double length;

    length = 0;
    for (i = 0; i < 3; i++)
        length += v[i] * v[i];
    length = sqrt(length); // FIXME

    return length;
}

bool VectorCompare(vec3_t v1, vec3_t v2) {
    int i;

    for (i = 0; i < 3; i++)
        if (fabs(v1[i] - v2[i]) > EQUAL_EPSILON)
            return false;

    return true;
}

vec_t Q_rint(vec_t in) {
    return floor(in + 0.5);
}

void VectorMA(vec3_t va, double scale, vec3_t vb, vec3_t vc) {
    vc[0] = va[0] + scale * vb[0];
    vc[1] = va[1] + scale * vb[1];
    vc[2] = va[2] + scale * vb[2];
}

void CrossProduct(vec3_t v1, vec3_t v2, vec3_t cross) {
    cross[0] = v1[1] * v2[2] - v1[2] * v2[1];
    cross[1] = v1[2] * v2[0] - v1[0] * v2[2];
    cross[2] = v1[0] * v2[1] - v1[1] * v2[0];
}

vec_t _DotProduct(vec3_t v1, vec3_t v2) {
    return v1[0] * v2[0] + v1[1] * v2[1] + v1[2] * v2[2];
}

void _VectorSubtract(vec3_t va, vec3_t vb, vec3_t out) {
    out[0] = va[0] - vb[0];
    out[1] = va[1] - vb[1];
    out[2] = va[2] - vb[2];
}

void _VectorAdd(vec3_t va, vec3_t vb, vec3_t out) {
    out[0] = va[0] + vb[0];
    out[1] = va[1] + vb[1];
    out[2] = va[2] + vb[2];
}

void _VectorCopy(vec3_t in, vec3_t out) {
    out[0] = in[0];
    out[1] = in[1];
    out[2] = in[2];
}

vec_t VectorNormalize(vec3_t v) {
    int i;
    double length;

    length = 0;
    for (i = 0; i < 3; i++)
        length += v[i] * v[i];
    length = sqrt(length);
    if (length == 0)
        return 0;

    for (i = 0; i < 3; i++)
        v[i] /= length;

    return length;
}

void VectorInverse(vec3_t v) {
    v[0] = -v[0];
    v[1] = -v[1];
    v[2] = -v[2];
}

void VectorScale(vec3_t v, vec_t scale, vec3_t out) {
    out[0] = v[0] * scale;
    out[1] = v[1] * scale;
    out[2] = v[2] * scale;
}