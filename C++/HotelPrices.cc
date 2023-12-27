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
};

class HotelApartment : public HotelRoom {
public:
    HotelApartment(int bedrooms, int bathrooms)
    : HotelRoom(bedrooms + 2, bathrooms) {}

    int get_price() {
        return HotelRoom::get_price() + 100;
    }
};



int main() {
    int roomsNumbers;
    std::cin >> roomsNumbers;

    std::vector<HotelRoom*> rooms;
    for (int i = 0; i < roomsNumbers; ++i) {
        std::string roomType;
        int bedrooms, bathrooms;
        std::cin >> roomType >> bedrooms >> bathrooms;

        if (roomType == "standard") {
            rooms.push_back(new HotelRoom(bedrooms, bathrooms));
        } else {
            rooms.push_back(new HotelApartment(bedrooms, bathrooms));
        }
    }

    int total_profit = 0;
    for (auto room : rooms) {
        total_profit += room->get_price();
    }

    std::cout << total_profit << std::endl;

    for (auto room : rooms) {
        delete room;
    }

    return 0;
}

