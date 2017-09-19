/* Created by Alex Ortega
    09-16-17
    Assignment 1.0 - Calculators
    This program will out put a persons matinance calories needed to maintain their current bodyweight.
    It will take in user input of a persons Name,Age,Height, and weight. Using both the St Jeor equation and Harris-Benedict equation
    a user's necessary caloric intate will be outputed along with the user's BMI
    */
    
    #include <iostream>
    #include <string>
    using namespace std;
    
    struct UserHealth {
        string userName;
        int age1;
        int heightFeet;
        int heightInches;
        double weight1;
    };
    
    int main() {
        UserHealth user1;
        
        double stJeorCal;
        double harrisBenCal;
        double cmHeight;
        double cmFeet;
        double cmInches;
        double weightKg;
        double ageYears;
        double bMI;
        double totalHeightInches;
        double totalHeightInchesRoot;
        
        
        //Code for the users input will go here
        cout << "Patient Name: ";
        cin >> user1.userName;
        cout << "Patient Age(months): ";
        cin >> user1.age1;
        cout << "Height in feet: ";
        cin >> user1.heightFeet;
        cout << "Inches: ";
        cin >> user1.heightInches;
        cout << "Weight LBS: ";
        cin >> user1.weight1;
        cout << endl;
        // We will need to do some extra math in order to convert US units to metric units
        // First is converting feet to cm, inches to cm and adding the two
        cmInches = user1.heightInches * 2.54;
        cmFeet = user1.heightFeet * 30.48;
        cmHeight = cmFeet + cmInches;
         cout << "User Height in centimeters: "<< cmHeight;
         cout << endl;
         //Convert lbs to kg
        weightKg = user1.weight1 * .45;
        cout << "User Weight in kilograms: " << weightKg;
        cout << endl;
        //Convert age in months to years for both equations divide by 12
        ageYears = user1.age1 / 12;
        //now we have everything converted so it will be easier to use both equations
        //The St Jeor equation is as follows 10 x weight(kg) + 6.25 x height(cm) - 5 x age(y) + 5
        stJeorCal = 10 * weightKg + 6.25 * cmHeight - 5 * ageYears +5;
        cout << "St Jeor equation. User needs " << stJeorCal << " calories to maintain their bodyweight.";
        cout << endl;
        //The Harris-Benedict formula is: 66.5 +(5.003 x Height(cm))-(6.775 x age(years))
        //However first, for this equation we will need to transfer age into years to do that
        harrisBenCal = 66.5 +(13.75 * weightKg) + (5.003 * cmHeight) - (6.775 * ageYears);
        cout << "Harris-Benedict equation. User needs " << harrisBenCal << " calories to maintain their bodyweight.";
        cout << endl;
        //Next we will calculate the users BMI in US units
        // first convert inputed height in feet to inches then add to inputed height in inches
        totalHeightInches = user1.heightFeet*12 + user1.heightInches;
        //To calculate BMI we need the total height in inches to the second power
        totalHeightInchesRoot = totalHeightInches*totalHeightInches;
        //Now input data into BMI formula
        bMI = user1.weight1 * 703 / (totalHeightInchesRoot);
        cout << "The users BMI is: " << bMI << ".";
        cout << endl;
        //Now we determine how many cups of food our user will need to eat in order to maintain 
        //their current body weight. In this example we use steak. Declare a steak variable.
        int caloriesCupSteak = 679;
        double cupsFoodNeeded;
        //We will calculate using the St Jeor calorie output first
        cupsFoodNeeded = stJeorCal / caloriesCupSteak;
        cout << "The user will need to consume: " << cupsFoodNeeded << " cups of Steak in order to maintain their current Bodyweight.";
        cout << endl;
        
        /* Here is our output for our patient Named Alex:
        
        Patient Name: Alex
Patient Age(months): 100
Height in feet: 6
Inches: 9
Weight LBS: 230

User Height in centimeters: 205.74
User Weight in kilograms: 103.5
St Jeor equation. User needs 2285.88 calories to maintain their bodyweight.
Harris-Benedict equation. User needs 2464.74 calories to maintain their bodyweight.
The users BMI is: 24.6441.
The user will need to consume: 3.36653 cups of Steak in order to maintain their current Bodyweight.
*/
        
    }
    
    