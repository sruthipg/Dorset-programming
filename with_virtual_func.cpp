#include <iostream>
using namespace std;

class Audio {
public:
    virtual void playSound() {  // Virtual function
        cout << "Playing generic audio format" << endl;
    }
};

class MP3 : public Audio {
public:
    void playSound() override {  
        cout << "Playing MP3 audio" << endl;
    }
};

int main() {
    Audio* audioPtr = new MP3();
    audioPtr->playSound();  // Calls MP3's version due to dynamic binding
    delete audioPtr;
}
