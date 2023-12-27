#include <iostream>
#include <vector>

class HotelRoom {
public:
    HotelRoom(int bedrooms, int bathrooms)
        : bedrooms_(bedrooms), bathrooms_(bathrooms) {}

    int get_price() const {
        return 50 * bedrooms_ + 100 * bathrooms_;
    }

private:
    int bedrooms_;
    int bathrooms_;
}; // Sınıf tanımının sonuna noktalı virgül

class HotelApartment : public HotelRoom {
public:
    // Yapıcı ve diğer metodlar buraya eklenecek
};

int main() {
    // main fonksiyonun içeriği
}
