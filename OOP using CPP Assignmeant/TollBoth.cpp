#include<iostream>
using namespace std;


class TollBooth
{
    int totalVehicles;
    double totalRevenue;

    public:

    TollBooth() {
    totalVehicles = 0;
    totalRevenue = 0.0;
    }
    void vehiclePayingToll(int vehicleType, double tollAmount)
    {
        totalVehicles++;
        totalRevenue+=tollAmount;
    }
    void reset() {
        totalVehicles = 0;
        totalRevenue = 0.0;
        cout << "Booth statistics reset successfully.\n";
    }

    int getTotalVehicles() const 
    {
        return totalVehicles;
    }

    double getTotalRevenue() const 
    {
        return totalRevenue;
    }


};
int main() {
    TollBooth booth;
    int choice;

    do {
        cout << "\n===== Toll Booth Menu =====\n";
        cout << "1. Add Standard Car (Rs.180)\n";
        cout << "2. Add Truck (Rs.250)\n";
        cout << "3. Add Bus (Rs.350)\n";
        cout << "4. Display Total Vehicles Passed\n";
        cout << "5. Display Total Revenue Collected\n";
        cout << "6. Reset Booth Statistics\n";
        cout << "7. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                booth.vehiclePayingToll(1, 180);
                break;

            case 2:
                booth.vehiclePayingToll(2, 250);
                break;

            case 3:
                booth.vehiclePayingToll(3, 350);
                break;

            case 4:
                cout << "Total Vehicles Passed: "
                     << booth.getTotalVehicles() << endl;
                break;

            case 5:
                cout << "Total Revenue Collected: Rs. "
                     << booth.getTotalRevenue() << endl;
                break;

            case 6:
                booth.reset();
                break;

            case 7:
                cout << "Exit program \n";
                break;

            default:
                cout << "Invalid choice! Try again.\n";
        }

    } while(choice != 7);

    return 0;
}


