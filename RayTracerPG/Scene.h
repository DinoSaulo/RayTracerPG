#pragma once

#include "Object.h"
#include "ObjectIntersection.h"
#include "Vec3.h"
#include <vector>

class Scene {
private:
	std::vector<Object*> objects;
public:
	/*Retorna true se r intersecta a cena e falso caso contr�rio.
	Guarda Poss�veis informa��es sobre a intersec��o em info, caso seja provido.*/
	bool intersect(const Ray& r, ObjectIntersection* info = nullptr) const;
	//Implementa o modelo de ilumina��o escolhido, retornando uma cor.
	Vec3 trace(const Ray& r, int recursionLevel = 0) const;
	//Adiciona um objeto a cena.
	void add(Object* object);
	int getNumberObjects();
	Object* getObject(int object);
};
