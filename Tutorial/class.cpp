#include <iostream>
using namespace std;
class Player{
    public:
        int x,y;
        int speed;
    void move(int xa, int ya){
    x += xa * speed;
    y += ya * speed;
}
};
void move(Player& player, int xa, int ya){
    player.x += xa * player.speed;
    player.y += ya * player.speed;
}
int main(){
  Player player;
  player.x = 4;  
  player.move(1,-1);
}