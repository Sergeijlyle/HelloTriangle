#pragma once


struct Geometry;

Geometry makeRectangle(float x, float y, float w, float h);

Geometry makeCheckerboard(int dim);

Geometry makeNGon(size_t sides, float r);