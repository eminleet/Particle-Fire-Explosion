#include "Swarm.h"

namespace eminleet {

	Swarm::Swarm(): lastTime(0)
	{
		pParticles = new Particle[NPARTICLES];
	}


	Swarm::~Swarm()
	{
		delete[] pParticles;
	}

	void Swarm::update(int elapsed) {

		int interval = elapsed - lastTime;

		for (int i = 0; i < Swarm::NPARTICLES; ++i) {
			pParticles[i].update(interval);
		}

		lastTime = elapsed;
	}

}