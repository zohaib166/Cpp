#include <iostream>
using namespace std;
void twos_complement(char *bitstream) {
    int i = 15;
    while(bitstream[i] == '0' && i>=0) {
        i--;
    }
    i--;
    while(i>=0) {
        if(bitstream[i] == '0') bitstream[i] = '1';
        else bitstream[i] = '0';
        i--;
    }
}
char* dec2bin(int num) {
    char *bitstream = new char[17] ; 
    int orig = num;
    if(num<0) num*=(-1);
    bitstream[16] = '\0';
    for(int i=15;i>=0;i--) {
        char bit = (char) (48+num%2);
        bitstream[i] = bit;
        num/=2;
    }
    if(orig<0)
        twos_complement(bitstream);
    return bitstream;
}
int main() {

    cout << dec2bin(36) << endl;
    cout << dec2bin(-36) << endl;
}