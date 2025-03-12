#include <iostream>
using namespace std;


class Counter{

    public:
        int count;

        Counter(int value) : count(value){

        }
            // Overloading prefix ++ operator
        void operator ++(){
            ++count;
        }
          // Overloading postfix ++ operator
        void operator ++(int){
            count++;
        }
        void display() {
            cout << "Count: " << count << endl;
        }

};

int main(){
    Counter c(5);

    ++c;
    c.display();
    c++;
    c.display();


    return 0;
}
