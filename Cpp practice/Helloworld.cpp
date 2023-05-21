#include <iostream>
#include <cmath>

// Gnuplot을 호출하여 그래프를 그리는 함수
void plotGraph(const double* x, const double* y, int size) {
    FILE* gnuplotPipe = popen("gnuplot -persistent", "w");
    if (gnuplotPipe) {
        fprintf(gnuplotPipe, "plot '-' with lines\n");
        for (int i = 0; i < size; ++i) {
            fprintf(gnuplotPipe, "%f %f\n", x[i], y[i]);
        }
        fprintf(gnuplotPipe, "e\n");
        fflush(gnuplotPipe);
        pclose(gnuplotPipe);
    }
}

int main() {
    const double pi = 3.14159;
    const int size = 100;
    double x[size], y[size];

    // x 값 생성
    for (int i = 0; i < size; ++i) {
        x[i] = i * 2.0 * pi / size;
    }

    // y 값 생성 (sin, cos, tan)
    for (int i = 0; i < size; ++i) {
        y[i] = sin(x[i]);
    }
    plotGraph(x, y, size); // sin 그래프 그리기

    for (int i = 0; i < size; ++i) {
        y[i] = cos(x[i]);
    }
    plotGraph(x, y, size); // cos 그래프 그리기

    for (int i = 0; i < size; ++i) {
        y[i] = tan(x[i]);
    }
    plotGraph(x, y, size); // tan 그래프 그리기

    return 0;
}
