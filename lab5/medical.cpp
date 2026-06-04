#include <iostream>
#include <string>
using namespace std;

class MedicalRecord {
public:
    int patientID;
    string name;
    int age;
    string diagnosis;

    MedicalRecord(int id, string n, int a, string diag)
        : patientID(id), name(n), age(a), diagnosis(diag) {}

    void displayRecord() {
        cout << "Patient ID: " << patientID << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Diagnosis: " << diagnosis << endl;
    }
};

class Client {
public:
    void processRecord(MedicalRecord& record) {
        cout << "Processing Record for Patient: " << record.name << endl;
        record.displayRecord();
    }
};

int main() {
    MedicalRecord patient1(101, "John Doe", 45, "Hypertension");
    MedicalRecord patient2(102, "Jane Smith", 30, "Diabetes");

    Client client;

    client.processRecord(patient1);
    client.processRecord(patient2);

    return 0;
}