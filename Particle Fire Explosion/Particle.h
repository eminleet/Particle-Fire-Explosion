#pragma once


namespace eminleet {

	struct Particle
	{
		double x;
		double y;

	private:
		double speed;
		double direction;

	private:
		void init();
	public:
		Particle();
		~Particle();
		void update(int interval);
	};

}
