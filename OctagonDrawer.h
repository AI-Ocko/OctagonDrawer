#ifndef _OCTAGON
#define _OCTAGON 

class OctagonDrawer {

    private:
        int side;
        int spacesDrawn;
        int starsDrawn;
        int spacesOut;
        int spacesIn;
        int rowsDrawn;
        int rowsToDraw;

    public:
        OctagonDrawer();
        OctagonDrawer(const int sidePar); //const is read only, cannot change
        void setSide(const int sidePar);
        int getside() const; 
        void display(const int sidePar);

};

#endif // !_OCTAGON