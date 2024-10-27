#include <iostream>
using namespace std;

#define MAX_PLATES 3

class PlateTower {
private:
    int plates[MAX_PLATES];
    int topIndex;

public:
    PlateTower() { topIndex = -1; }

    void addPlate(int plateNumber) {
        if (topIndex == MAX_PLATES - 1) {
            cout << "The tower is full! Cannot add more plates.\n";
        } else {
            topIndex++;
            plates[topIndex] = plateNumber;
            cout << "Plate " << plateNumber << " has been stacked.\n";
        }
    }

    void removePlate() {
        if (topIndex == -1) {
            cout << "The tower is empty! No plates to take off.\n";
        } else {
            cout << "Plate " << plates[topIndex] << " has been removed from the stack.\n";
            topIndex--;
        }
    }

    void checkTopPlate() {
        if (topIndex == -1) {
            cout << "The tower is empty!\n";
        } else {
            cout << "The top plate is " << plates[topIndex] << ".\n";
        }
    }
};

int main() {
    PlateTower tower;

    tower.addPlate(1);
    tower.addPlate(2);
    tower.addPlate(3);
    tower.addPlate(4);

    tower.checkTopPlate();

    tower.removePlate();
    tower.removePlate();
    tower.removePlate();
    tower.removePlate();

    return 0;
}
