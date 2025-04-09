#include "OctagonDrawer.h"
#include <iostream>

using namespace std;

OctagonDrawer::OctagonDrawer() {
    side = 3;

}

OctagonDrawer::OctagonDrawer(const int sidePar) {
    if (sidePar < 3 || sidePar > 8) {
        cout << "The side value must be between 3 and 8" << endl;

    }
    else {
        side = sidePar;
    }
}

void OctagonDrawer::setSide(const int sidePar) {
    if (sidePar < 3 || sidePar > 8) {
        cout << "The side value must be between 3 and 8" << endl;

    }
    else {
        side = sidePar;
    }
}

int OctagonDrawer::getside() const {
    return side;
}


int main () {

    return 0;
}