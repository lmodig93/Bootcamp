#include <iostream>
#include <string>
#include <string.h>

void decryption(int key, int n, char cipher[]){
    std::cout << "Decryption: ";
    for(int i = 0; i<n; i++){
        cipher[i] = cipher[i] - key;
        if(cipher[i] < 65) cipher[i] = cipher[i] + 26;
        std::cout << cipher[i];
    }
    std::cout << std::endl;
}
int main(){
    int key;
    std::string cipher;
    std::cout << "Please type a key number between 0-26" << std::endl;
    std::cin >> key;
    std::cout << "Please type what text that should be decrypted" << std::endl;
    std::cin >> cipher;
    int n = cipher.length();
    char cipherarray[n];
    strcpy(cipherarray, cipher.c_str());
    decryption(key, n, cipherarray);
}