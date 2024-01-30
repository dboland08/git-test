#include <iostream>

int x;

//creating a class
class lidar{
    public: // access specifier (basically what can access these attributes)
    int motorSpeed; // attribute
    int lidarName = 1; // attribute

    //sets motorSpeed (int) and lidarName (int)
    lidar(int setMotorSpeed, int setLidarName){ //this is called a constructor, it is used to create new object from a class
        std::cout << "You have create a new lidar object! \n";
        motorSpeed = setMotorSpeed;
        lidarName = setLidarName;
    }

    //returns the raw lidar data (int) as usable data (int) of the called upon lidar class 
    int readLidar(){
        return lidarName;
    } 
};

//both readLidar and lidar are called "methods" these are basically functions that are specific to a class

int main() {
    std::cout << "Please enter Lidar device name: ";
    std::cin >> x;
    lidar lidar1(2, x);
    std::cout << lidar1.readLidar();
    return 0;
}