#include "SeatingChart.h"

int main() {
    SeatingChart chart(2, 3);

    chart.assignStudent(0, 0, "Liam", 1010);
    chart.assignStudent(0, 1, "Emma", 1011);
    chart.assignStudent(0, 2, "Noah", 1012);
    chart.assignStudent(1, 0, "Olivia", 1013);
    chart.assignStudent(1, 1, "William", 1014);
    
    chart.assignStudent(3, 3, "Ethan", 1015);

    chart.printChart();

    return 0;
}
