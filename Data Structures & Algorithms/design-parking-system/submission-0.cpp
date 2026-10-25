class ParkingSystem {
   public:
    int s = 0;
    int m = 0;
    int b = 0;
    ParkingSystem(int big, int medium, int small) {
        b = big;
        m = medium;
        s = small;
    }
    bool addCar(int carType) {
        if (carType == 1) {
            if (!b) return false;
            b--;
        } else if (carType == 2) {
            if (!m) return false;
            m--;
        } else {
            if (!s) return false;
            s--;
        }
        return true;
    }
};
