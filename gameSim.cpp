#include <iostream>
using namespace std;

class Player {
    public:
        string name;
        double height;
        double wingSpan;

};

int main() {
    Player player1;
    Player player2;

    cout << "Please enter the path of the first player\n";
    player1.name = "Viktor";
    cout << player1.name;
    cout << player1.height;
    cout << player1.wingSpan;

    return 0;
}
