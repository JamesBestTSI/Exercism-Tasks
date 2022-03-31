#include <iostream>

int main(){
    int rice = 0;
    int riceOnTile = 0;
    int tile = 0;
    while (tile<64){
        tile++;
        std::cout << "Tile " << tile << std::endl;
        if (riceOnTile==0)
            riceOnTile = 1;
        else
            riceOnTile *= 2;

        std::cout << "Rice on tile " << riceOnTile << std::endl;
        rice += riceOnTile;
        std::cout << "Rice total " << rice << std::endl;
    }
}