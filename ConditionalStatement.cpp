

int main() {
    double berat, tinggi, bmi;

  
    masukanData(berat, tinggi);


    bmi = hitungBMI(berat, tinggi);


    cout << endl;
    cout << "--- Hasil ---" << endl;
    cout << "BMI Anda : " << bmi << endl;
    cout << "Status   : " << cekKondisi(bmi) << endl;

    return 0;
}       