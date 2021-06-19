#include <iostream>
using namespace std;

int main() {
    int three = 0;
    int sum = three;
    while (three<1000) {
        three += 3;
        if(three%5!=0 && three<1000){
            sum+=three;
        }
    }
    int five = 0;
    while (five<1000) {
        five += 5;
        if(five<1000){
            sum+=five;
        }
    }
    cout<<sum<<endl;
    
    
    return 0;
}