#include<box2d/box2d.h>
#include<iostream>

int main() {
	b2Vec2 grav(0.f, -10.f);
	b2World world(grav);

	std::cout << "Ola Box2d!\n";
	std::cin.get();

	return 0;
}