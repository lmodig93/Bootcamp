#include <iostream>
#include <bitset>

uint16_t encode(uint _spd, uint _dfr, uint _dre, uint _dri, uint _dle){
    std::bitset<16> returnVal;
    //Range check
    if(_spd > 300){
        _spd = 300;
    }
    if(_dfr > 1050){
        _dfr = 1050;
    }
    if(_dre > 1050){
        _dre = 1050;
    }
    if(_dri > 1050){
        _dri = 1050;
    }
    if(_dle > 1050){
        _dle = 1050;
    }
    returnVal = (_spd/20)<<12 | (_dfr/150)<<9 | (_dre/150)<<6 | (_dri/150)<<3 | _dle/150;
    return (uint16_t)returnVal.to_ulong();            
}

bool crashdetection(uint16_t package){
    std::bitset<16> unpacked = package, maskSPD = 0xF000, maskDFR = 0x0E00, maskDRE = 0x01C0, maskDRI = 0x0038, maskDLE = 0x0007;
    bool returnVal = 0;
    if((unpacked & maskSPD) != 0){
        if((unpacked & maskDFR) == 0){
            std::cout << "Crash from front with " << ((unpacked & maskSPD)>>12).to_ulong()*20 << " speed." << std::endl;
            returnVal = 1;
        }
        if((unpacked & maskDRE) == 0){
            std::cout << "Crash from rear with " << ((unpacked & maskSPD)>>12).to_ulong()*20 << " speed." << std::endl;
            returnVal = 1;
        }
        if((unpacked & maskDRI) == 0){
            std::cout << "Crash from right with " << ((unpacked & maskSPD)>>12).to_ulong()*20 << " speed." << std::endl;
            returnVal = 1;
        }
        if((unpacked & maskDLE) == 0){
            std::cout << "Crash from left with " << ((unpacked & maskSPD)>>12).to_ulong()*20 << " speed." << std::endl;
            returnVal = 1;
        }
    }
    return returnVal;
}

int main(){
    if(!crashdetection(encode(60, 450, 300, 150, 0))){
        std::cout << "No crash!" << std::endl;
    }
}
