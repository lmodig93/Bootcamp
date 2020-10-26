#include <iostream>
#include <bitset>

struct field{
    unsigned lightrear:1;
    unsigned lightfrontpassenger:1;
    unsigned lightfrontdriver:1;
    unsigned doorrearpassenger:1;
    unsigned doorreardriver:1;
    unsigned doorfrontpassenger:1;
    unsigned doorfrontdriver:1;
    unsigned windowrearpassenger:1;
    unsigned windowreardriver:1;
    unsigned windowfrontpassenger:1;
    unsigned windowfrontdriver:1;
    unsigned seatbeltrearmiddle:1;
    unsigned seatbeltrearpassenger:1;
    unsigned seatbeltreardriver:1;
    unsigned seatbeltfrontpassenger:1;
    unsigned seatbeltfrontdriver:1;
};

void readbitset(uint16_t _input){
    field *f = reinterpret_cast<field*> (&_input);
    std::cout << "Seatbelt front driver side: " << f->seatbeltfrontdriver << std::endl;
    std::cout << "Seatbelt front passenger side: " << f->seatbeltfrontpassenger << std::endl;
    std::cout << "Seatbelt rear driver side: " << f->seatbeltreardriver << std::endl;
    std::cout << "Seatbelt rear middle : " << f->seatbeltrearmiddle << std::endl;
    std::cout << "Seatbelt rear passenger side: " << f->seatbeltrearpassenger << std::endl;
    std::cout << "Window front driver side: " << f->windowfrontdriver << std::endl;
    std::cout << "Window front passenger side: " << f->windowfrontpassenger << std::endl;
    std::cout << "Window rear driver side: " << f->windowreardriver << std::endl;
    std::cout << "Window rear passenger side: " << f->windowrearpassenger << std::endl;
    std::cout << "Door front driver side: " << f->doorfrontdriver << std::endl;
    std::cout << "Door front passenger side: " << f->doorfrontpassenger << std::endl;
    std::cout << "Door rear driver side: " << f->doorreardriver << std::endl;
    std::cout << "Door rear passenger side: " << f->doorrearpassenger << std::endl;
    std::cout << "Light driver side: " << f->lightfrontdriver << std::endl;
    std::cout << "Light passenger side: " << f->lightfrontpassenger << std::endl;
    std::cout << "Light rear: " << f->lightrear << std::endl;
}

int main(){
    uint16_t input;
    input = 0b1011101001011011;
    readbitset(input);
}