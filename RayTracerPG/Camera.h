#pragma once

#include "Vec3.h"
#include "Ray.h"
#include "Consts.h"

#include <cmath>

class Camera {
private:
	Vec3 position, target, up;
	double fov, f;
	double camToworldMatrix[4][4];
public:
	Camera(Vec3 position, Vec3 target, Vec3 up, double fov, double f);
	//retorna um Ray que vai ser emitido por tal pixel
	Ray getRay(double x, double y, int width, int height) const;
	void setCamToWorldMatrix();
	Vec3 pointCamToWorld(const Vec3& vector) const;
	Vec3 vectorCamToWorld(const Vec3& vector) const;

	double getFov() const;
	Vec3 getPos() const;
};
