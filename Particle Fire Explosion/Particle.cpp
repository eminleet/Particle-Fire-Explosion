#include "Particle.h"
#include <math.h>
#include <stdlib.h>
#define PI 3.14159265359

using namespace std;

namespace eminleet {

	Particle::Particle(): x(0), y(0)
	{
		init();
	}

	void Particle::init() {
		x = 0;
		y = 0;

		direction = (2 * PI * rand()) / RAND_MAX;
		speed = (0.04 * rand()) / RAND_MAX;

		speed *= speed;
	}

	Particle::~Particle()
	{
	}

	void Particle::update(int interval) {

		direction += interval * 0.0005;

		double xspeed = speed * cos(direction);
		double yspeed = speed * sin(direction);

		x += xspeed * interval;
		y += yspeed * interval;

		if (x < -1 || x > 1 || y < -1 || y > 1) {
			init();
		}

		if (rand() < RAND_MAX / 100) {
			init();
		}
	}
}