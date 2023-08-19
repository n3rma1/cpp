/*
Write a short program to simulate a ball being dropped off of a tower. To start, the user should be asked for the height of the tower in meters. Assume normal gravity (9.8 m/s2), and that the ball has no initial velocity (the ball is not moving to start). Have the program output the height of the ball above the ground after 0, 1, 2, 3, 4, and 5 seconds. The ball should not go underneath the ground (height 0).

Use a function to calculate the height of the ball after x seconds. The function can calculate how far the ball has fallen after x seconds using the following formula: distance fallen = gravity_constant * x_seconds2 / 2
*/

#include <iostream>

int main()
{
    const double gravity_constant {9.8};
    std::cout << "Enter the initial height(in meters): ";
    double height;
    std::cin >> height;
    
    double time = 0.0;
    double distance_fallen;
    double new_height = height;

while(new_height>0){
    distance_fallen =0.5 * gravity_constant * time * time;
    new_height = height - distance_fallen;
    if(new_height<0){
        std::cout << "At " << time << " seconds, the ball is on the ground." << std::endl;
    }
    else{
        std::cout << "At " << time << " seconds, the ball is at height: " << new_height << " meters" << std::endl;
    }
    time += 1.0;
}
return 0;
}