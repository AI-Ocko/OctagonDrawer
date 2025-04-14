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

void OctagonDrawer::display(const int sidePar) {
    if (sidePar < 3 || sidePar > 8) {
        cout << "The side value must be between 3 and 8" << endl;
    }
    else {
        string output = ""; //clear the output

        spacesDrawn = 0;
        starsDrawn = 0;
        spacesOut = side - 1;
        spacesIn = 0;
        rowsDrawn = 0;
        rowsToDraw = 2 * side + (side - 2);

        while (rowsDrawn < rowsToDraw)
        {
            if (rowsDrawn == 0)
            {
                spacesDrawn = 0;
                //draw spaces outside first
                while (spacesDrawn < spacesOut) 
                {
                    output = output + " ";
                    spacesDrawn += 1;
                }

                starsDrawn = 0;
                
                //draw stars on the row
                while (starsDrawn < side)
                {
                    output = output + "*";
                    starsDrawn +=1;
                }
                //get ready for the next iteration
                spacesOut --;
                spacesIn = side;
                rowsDrawn +=1;
                output = output + "\n";
            }

            else if (rowsDrawn < side)
            {
                spacesDrawn = 0;

                while (spacesDrawn < spacesOut) {
                    output = output + " ";
                    spacesDrawn += 1;
                }

                output = output + "*";
                spacesDrawn = 0;

                while (spacesDrawn < spacesIn)
                {
                    output = output + " ";
                    spacesDrawn ++;
                }
                
                output = output + "*";
                spacesOut -= 1;
                spacesIn += 2;
                rowsDrawn += 1;
                output = output + "\n";
            }

            else if (rowsDrawn < (2 * side -1)) 
            {
                output = output + "*";
                spacesDrawn = 0;

                while (spacesDrawn < 2 * side + (side -4))
                {
                    output = output + " ";
                    spacesDrawn += 1;
                }

                output = output + "*";
                spacesOut = 1;
                rowsDrawn += 1;
                output = output + "\n";
                
            }            
            
            else if (rowsDrawn < 2 * side + (side - 3))
            {
                spacesDrawn = 0;
                while (spacesDrawn < spacesOut)
                {
                    output = output + " ";
                    spacesDrawn += 1;
                }
                output = output + "*";
                spacesDrawn = 0;
                while (spacesDrawn < spacesIn - 4)
                {
                    output = output + " ";
                    spacesDrawn += 1;
                }
                output = output + "*";
                spacesOut += 1;
                spacesIn -= 2;
                rowsDrawn += 1;
                output = output + "\n";
                
            }

            else if (rowsDrawn < 2 * side + (side - 2))
            {
                spacesDrawn = 0;
                while (spacesDrawn < spacesOut)
                {
                    output = output + " ";
                    spacesDrawn += 1;
                }
                starsDrawn = 0;
                while (starsDrawn < side)
                {
                    output = output + "*";
                    starsDrawn += 1;
                }
                rowsDrawn += 1;
                
            }
            
        }
        cout << endl << output << endl;

    }

}

int main () {
    //declarations
    int side;
    OctagonDrawer myOctagon;

    //get user input 
    cout << "Enter the octagon side value: ";
    cin >> side;

    myOctagon.setSide(side);
    myOctagon.display(side);

    
    return 0;
}