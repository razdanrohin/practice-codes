//This code uses sakamoto algorithm for calculating the day from the week

string dayOfTheWeek(int day, int month, int year) {
    //Using Sakamoto's algorithm to figure out the day of the week.
    const string dayOfWeek[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    
    //array with leading number of days
    int lead[] = { 0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4 };
    
    //If month is less than 3, reduce the year by 1
    if(month < 3) year -= 1;
    
    return dayOfWeek[(year + year/4 - year/100 + year/400 + lead[month - 1] + day) % 7];
}
