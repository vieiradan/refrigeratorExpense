#include <stdio.h>
//Quilowatt-hour = watt*hour / 1000  ou  kWh = W*h / 1000

int main() {

  float rateWatts;
  float timeHours;
  float kWHourRate;
  float totalEnergykW;
  float totalPrice;

  printf("Enter the power comsumption rate of the refriregator in watts: ");
  scanf("%f", &rateWatts);

  printf("\nEnter the amount of time it was used in hours: ");
  scanf("%f", &timeHours);

  printf("\nEnter the value of the kw/hour at your local: $");
  scanf("%f", &kWHourRate);

  // converting watts to kilowatts: watts/1000 = kilowatts
  totalEnergykW = rateWatts/1000;
  totalEnergykW = totalEnergykW*timeHours;
  printf("\n\nTotal energy consumed in kWh: %.2f", totalEnergykW);

  totalPrice = totalEnergykW*kWHourRate;
  printf("\nTotal price: $%.2f ", totalPrice);
}
