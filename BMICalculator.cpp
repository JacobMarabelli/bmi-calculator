#include <iostream>
using namespace std;

float bmiCalc(float weight, float height) {
    return (703 * weight) / (height * height);
}

int main()
{
    float weight;
    float height;

    cout << "Please enter your weight (in lbs): " << endl;
    cin >> weight;
    cout << "Please enter your height (in inches): " << endl;
    cin >> height;
    float bmi = bmiCalc(weight, height);
    cout << "Your BMI is: " << bmi << endl;

    if (bmi < 18.5) {
        cout << "You are underweight. Go eat some food." << endl;
    }
    else if (bmi >= 18.5 && bmi <= 24.9) {
        cout << "You are a normal weight. Keep it up!" << endl;
    }
    else {
        cout << "You are overweight. Go hit the gym." << endl;
    }

    system("pause>0");
}