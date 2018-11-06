#pragma once

#include "Vec3.h"
#include "Material.h"
#include "ObjectIntersection.h"
#include "Ray.h"
#include "Geometry.h"

class Object {
private:
	Geometry* geometry;
	Material* material;
public:
	Object(Geometry* geometry, Material* materal);
	/*Retorna true se r intersecta o objeto e falso caso contr�rio
	Guarda poss�veis informa��es sobre a intersec��o em info, caso seja provido.*/
	bool intersect(const Ray& r, ObjectIntersection* info = nullptr);
};
