#pragma once
#include <iostream>
#include "SDL/SDL.h"
#include "MCG_GFX_Lib.h"
#include "Ray.h"
#include "Sphere.h"

struct Light
{
	glm::vec3 lightDirection{ 0.f, 0.f, 1.f };
};

class RayTracer
{
private:
public:

	// Constructor:
	RayTracer();
	// Destructor
	~RayTracer();

	// This function takes in a Ray and returns a color:
	glm::vec3 RayTracer::GenerateColor(Ray ray, Sphere sphere);
};