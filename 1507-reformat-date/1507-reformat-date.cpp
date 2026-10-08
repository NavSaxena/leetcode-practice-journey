class Solution {
public:
    string reformatDate(string date) {
        string day, month, year;
        stringstream ss(date);
        ss >> day >> month >> year;
        day = day.substr(0, day.size() - 2);
        if(day.size() == 1)
            day = "0" + day;
        if(month == "Jan") month = "01";
        else if(month == "Feb") month = "02";
        else if(month == "Mar") month = "03";
        else if(month == "Apr") month = "04";
        else if(month == "May") month = "05";
        else if(month == "Jun") month = "06";
        else if(month == "Jul") month = "07";
        else if(month == "Aug") month = "08";
        else if(month == "Sep") month = "09";
        else if(month == "Oct") month = "10";
        else if(month == "Nov") month = "11";
        else if(month == "Dec") month = "12";
        return year + "-" + month + "-" + day;
    }
};