#include <iostream>
using namespace std;

class Audio {
public:
    void playSound() {  // Not virtual
        cout << "Playing generic audio format" << endl;
    }
};

class MP3 : public Audio {
public:
    void playSound() {  
        cout << "Playing MP3 audio" << endl;
    }
};

int main() {
    Audio* audioPtr = new MP3();
    audioPtr->playSound();  // Calls Audio's version, not MP3's!
    delete audioPtr;
}
