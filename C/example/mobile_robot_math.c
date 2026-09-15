#include <stdio.h>
#include <math.h>

int main(){
    
    // double x, y;
    // printf("x: ");
    // scanf("%lf", &x);
    // printf("y: ");
    // scanf("%lf", &y);

    // printf("sqrt(x) = %.4lf\n", sqrt(x));

    // return 0;

//2-2
    double m, T_m, N_m, G, eta, r;
    double w, F_avail;
    //double F_grade, F_roll;
    const double c = 0.015;
    const double sf = 1.3;
    const double g = 9.81;

    
    printf("총 질량: ");
    if(scanf("%lf", &m) != 1) return 1;
    printf("정격 토크: ");
    if(scanf("%lf", &T_m) != 1) return 1;
    printf("모터 수: ");
    if(scanf("%lf", &N_m) != 1) return 1;
    printf("감속비: ");
    if(scanf("%lf", &G) != 1) return 1;
    printf("구동 효율: ");
    if(scanf("%lf", &eta) != 1) return 1;
    printf("바퀴 반지름: ");
    if(scanf("%lf", &r) != 1) return 1;

    if(m <= 0 || T_m <= 0 || N_m <= 0|| G <= 0 || eta <= 0 || eta > 1 || r <= 0 || c < 0 || sf < 1)
    {
        printf("입력값의 범위를 다시 확인 하세요\n");
        return 1;
    }

    /*
    w = m * g;
    F_avail = (T_m * G * eta * N_m) / (r * sf);
    //F_grade = w * sin();
    //F_roll = c * w;
    // F_need = F_grade + F_roll < F_avail/sf
    //(w * sin) + (w * c) <= F_avail/sf
    //sin + c <= F_avail*w / sf
    //sin <= (F_avial*w/sf - c)
    //sin <= clip(F_avail*w/sf -c)
    double sin = clip((F_avail*w)/sf-c);
    double grade = asin(sin)*(180/M_PI)*100;
    */
    double T_tot = N_m * T_m * G * eta;
    F_avail = (T_tot)/r;
    w = m * g;
    double sin = (F_avail/sf - c*w)/w;
    if (sin < 0.0) sin = 0.0;
    if (sin >1.0) sin = 1.0;

    double theta_rad = asin(sin);
    double theta_deg = theta_rad*180/ M_PI;
    double grade_pct = tan(theta_rad)*100;


    printf ("\n[결과]\n");
    printf("총 구동토크: %.2f\n", T_tot);
    printf("가용 견인력: %.2f\n", F_avail);
    printf("등판 가능 최대각: %.2f\n", theta_deg);
    printf("등판율: %.f\n", grade_pct);

    return 0;


}