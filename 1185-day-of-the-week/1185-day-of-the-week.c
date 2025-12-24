char* dayOfTheWeek(int day, int month, int year) {
    int sum = 0;

    for (int i = 1971; i < year; i++) {
        if (i % 4 == 0 && (i % 100 != 0 || i % 400 == 0)) {
            sum += 366;
        } else
            sum += 365;
    }

    for (int i = 1; i < month; i++) {
        if (i == 2) {
            sum += (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) ? 29 : 28;
        } else if (i == 4 || i == 6 || i == 9 || i == 11) {
            sum += 30;
        } else { 
            sum += 31;
        }
    }

    sum += day;

    char *arr[]={"Thursday","Friday","Saturday","Sunday","Monday","Tuesday","Wednesday"};

    return arr[sum % 7];
}