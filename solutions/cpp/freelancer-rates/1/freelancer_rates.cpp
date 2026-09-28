#include <cmath>

// daily_rate calculates the daily rate given an hourly rate
double daily_rate(double hourly_rate) {
    return 8 * hourly_rate;
}

double apply_discount(double before_discount, double discount) {
    return before_discount - (before_discount * (discount/100.0));
}

int monthly_rate(double hourly_rate, double discount) {
    double monthly_rates = hourly_rate * 8.0 * 22.0;
    return static_cast<int>(std::ceil(apply_discount(monthly_rates, discount)));
}

int days_in_budget(int budget, double hourly_rate, double discount) {
    double discount_rate = hourly_rate * (1.0 - discount / 100.0);
    double daily_rates = daily_rate(discount_rate);
    return static_cast<int>(std::floor(budget/daily_rates));
}
