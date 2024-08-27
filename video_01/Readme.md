# Box2D Example

This is a simple C++ example demonstrating the initialization of a Box2D world with gravity.

## Overview

The example initializes a 2D physics world using Box2D and prints a message to the console. The following components are used:

- **b2Vec2 grav(0.f, -10.f);**  
  Initializes a 2D vector representing gravity with a downward force of `-10` in the Y direction.

- **b2World world(grav);**  
  Creates a Box2D world object using the specified gravity vector. The `b2World` class manages all physics entities and the simulation, including collision detection and contact management.

## Code Example

```cpp
#include <Box2D/Box2D.h>
#include <iostream>

int main() {
    b2Vec2 grav(0.f, -10.f);
    b2World world(grav);

    std::cout << "Ola Box2d!\n";
    std::cin.get();

    return 0;
}
