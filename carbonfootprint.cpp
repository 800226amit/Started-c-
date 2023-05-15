#include <iostream>
using namespace std;

int main() {
  const float electricityEmissionFactor = 0.000556;  
  // kg CO2 per kWh 1 lb = 0.453592 kg (lb means pund)
  // 0.556 lb CO2 per kWh = (0.556 * 0.453592) kg CO2 per kWh ≈ 0.000556 kg CO2 per kWh (≈ approximately equal to)
  //1 lb = 0.453592 kg
    //Therefore, to convert a weight or mass value given in pounds to kilograms, you can multiply the value by 0.453592.
  const float naturalGasEmissionFactor = 0.0053;     // kg CO2 per cubic foot
  const float carEmissionFactor = 0.4117;            // kg CO2 per mile
  const float airTravelEmissionFactor = 0.1;         // kg CO2 per passenger-mile
  const float foodEmissionFactor = 3.3;              // kg CO2 per kg of food




string str = "WELCOME to Carbon Foot Print Calculator";
    int length = str.length();

    for(int i = 1; i <= 5; i++)
    {
        for(int j = 1; j <= 50; j++)
        {
            if(i == 1 || i == 5 || j == 1 || j == 50)
            {
                cout << "* ";
            }
            else if(j >= 4 && j <= (4 + length - 1) && i == 3)
            {
                cout << str[j-4] << " ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
cout<< endl;

  float electricityUsage, naturalGasUsage, carMiles, airTravelMiles, foodWeight;
  cout << "Enter your monthly electricity usage in kWh: "; 
  //1 kilowatt = 1000 watt
  // in a month i am uisng 130 watt so i have used 0.13 kwh
  cin >> electricityUsage;
  cout << "Enter your monthly natural gas usage in cubic feet: ";
  //1 cubic feet to gram = 28316.84671 gram so main 180 gram ek ghante me use karta hun
  // agar 2 ghante stove use kre to 0.00635663998299996 cubic feet gas use hota hai
  
  cin >> naturalGasUsage;
  cout << "Enter your monthly car miles driven: ";
  
  cin >> carMiles;
  cout << "Enter your annual air travel miles: ";
  cin >> airTravelMiles;
  cout << "Enter your monthly food weight in kg: ";
  cin >> foodWeight;

  float electricityEmission = electricityUsage * electricityEmissionFactor;
  float naturalGasEmission = naturalGasUsage * naturalGasEmissionFactor;
  float carEmission = carMiles * carEmissionFactor;
  float airTravelEmission = airTravelMiles * airTravelEmissionFactor;
  float foodEmission = foodWeight * foodEmissionFactor;

  float totalEmission = electricityEmission + naturalGasEmission + carEmission + airTravelEmission + foodEmission;

  cout << "Your carbon footprint is: " << totalEmission << " kg CO2 equivalent per month" << endl;
  cout << "Breakdown of your carbon footprint:" << endl;
  cout << "  - Electricity usage: " << electricityEmission << " kg CO2 equivalent per month" << endl;
  cout << "  - Natural gas usage: " << naturalGasEmission << " kg CO2 equivalent per month" << endl;
  cout << "  - Car usage: " << carEmission << " kg CO2 equivalent per month" << endl;
  cout << "  - Air travel: " << airTravelEmission << " kg CO2 equivalent per month" << endl;
  cout << "  - Food consumption: " << foodEmission << " kg CO2 equivalent per month" << endl;
//   cout << endl;
//   cout << "Here are some tips to reduce your carbon footprint:" << endl;
//   cout << "- Use energy-efficient light bulbs and appliances" << endl;
//   cout << "- Turn off lights and appliances when not in use" << endl;
//   cout << "- Use a programmable thermostat to reduce heating and cooling costs" << endl;
//   cout << "- Drive less or switch to a more fuel-efficient car" << endl;
//   cout << "- Use public transportation or carpool when possible" << endl;
//   cout << "- Fly less or choose a more fuel-efficient airline" << endl;
//   cout << "- Reduce food waste and choose more plant-based foods" << endl;

  return 0;
}
