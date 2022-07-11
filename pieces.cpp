//tetrimino pieces and rotational algorithms (non pivot)
//tetrimino initial positions initialized

// Your First C++ Program

#include <iostream>;
using namespace std;

class pieces{
//takes the x and y coordinates and uses the rotation angle to determine its corresponding coordinate
int rotate( int px, int py, int r){

    switch(r % 4){
        case 0: return py*4 + px;       //0 deg
        case 1: return 12 + py - (px + 4);      //90 deg
        case 2: return 15 - (py*4);     //180 deg
        case 3: return 3 + py*(px*4);        //270 deg
    }

    return 0;
}

//the shapes of the 7 tetriminos, 4x4 is the matrix
char pieces[7][4][4]{

    {
        //I shape
        {0,0,1,0}
        {0,0,1,0}
        {0,0,1,0}
        {0,0,1,0}

    }
    {
        //L shape
        {0,0,1,0}
        {1,1,1,0}
        {0,0,0,0}
        {0,0,0,0}

    }
    {
        //J shape
        {1,0,0,0}
        {1,1,1,0}
        {0,0,0,0}
        {0,0,0,0}
    }
    {
        //O shape
        {0,0,0,0}
        {0,1,1,0}
        {0,1,1,0}
        {0,0,0,0}
    }
    {
        //S shape
        {0,0,1,1}
        {0,1,1,0}
        {0,0,0,0}
        {0,0,0,0}
    }
    {
        //Z shape
        {0,1,1,0}
        {0,0,1,1}
        {0,0,0,0}
        {0,0,0,0}
    }
    {
        //T shape
        {0,0,1,0}
        {0,1,1,1}
        {0,0,0,0}
        {0,0,0,0}
    }

}
}