#include "pcapOpenner.h"
#include <iostream>


void dectohexprint(const u_char n)
{
    if(n==0){
        std::cout << "00:";
    }
    else if(n<16){
        std::cout << "0" << std::hex << static_cast<int>(n) << ":";
    }
    else{
        std::cout << "" << std::hex << static_cast<int>(n) << ":";
    }
}

int main(){
    pcapOpenner p;
    p.initPCAP("/home/ludvig/Bootcamp/Day8/Bonus2/mycap.pcap");
    Packet_t packet = p.getPacket();
    for(int i = 0; i < 14; i++){
        if(i==0){
            std::cout << "Destination address: ";
        }
        if(i==6){
            std::cout << "Source address:      ";
        }
        if(i==12){
            std::cout << "Type:                ";
        }
        dectohexprint(packet.data[i]);
        if(i == 5 || i == 11){
            std::cout << std::endl;
        }
    }
    std::cout << std::endl;
      
        
}
