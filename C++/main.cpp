#include <iostream>
#include <string>
using namespace std;

class Human
{
    private:
    string NIK;
    string nama;
    string jenis_kelamin;

    public:
    string getNIK()
    {
        return NIK;
    }
    string getNama()
    {
        return nama;
    }
    string getJenis_kelamin()
    {
        return jenis_kelamin;
    }
    void setNIK(string NIK)
    {
        this->NIK = NIK;
    }
    void setNama(string nama)
    {
        this->nama = nama;
    }
    void setJenis_kelamin(string jenis_kelamin)
    {
        this->jenis_kelamin = jenis_kelamin;
    }
};

class SivitasAkademik : public Human
{
    private:
    string asal_universitas;
    string email_edu;

    public:
    string getAsal_universitas()
    {
        return asal_universitas;
    }
    string getEmail_edu()
    {
        return email_edu;
    }
    void setAsal_universitas(string asal_universitas)
    {
        this->asal_universitas = asal_universitas;
    }
    void setEmail_edu(string email_edu)
    {
        this->email_edu = email_edu;
    }
};

class Mahasiswa : public SivitasAkademik
{
    private:
    string NIM;
    string fakultas;
    string prodi;

    public:
    string getNIM()
    {
        return NIM;
    }
    string getFakultas()
    {
        return fakultas;
    }
    string getProdi()
    {
        return prodi;
    }
    void setNIM(string NIM)
    {
        this->NIM = NIM;
    }
    void setFakultas(string fakultas)
    {
        this->fakultas = fakultas;
    }
    void setProdi(string prodi)
    {
        this->prodi = prodi;
    }
};

int main()
{
    int n;
    cout << "Masukan jumlah data yang ingin dimasukkan: ";
    cin >> n;
    Mahasiswa* mahasiswa = new Mahasiswa[n];

    cin.ignore(); // to clear the newline character from the previous input

    cout << endl;

    for (int i = 0; i < n; i++)
    {
        mahasiswa[i] = Mahasiswa();
        cout << "MASUKAN DATA MAHASISWA KE-" << (i + 1) << endl;

        cout << "NIK              : ";
        string nik;
        getline(cin, nik);
        mahasiswa[i].setNIK(nik);

        cout << "Nama             : ";
        string nama;
        getline(cin, nama);
        mahasiswa[i].setNama(nama);

        cout << "Jenis Kelamin    : ";
        string jenis_kelamin;
        getline(cin, jenis_kelamin);
        mahasiswa[i].setJenis_kelamin(jenis_kelamin);

        cout << "Asal Universitas : ";
        string asal_universitas;
        getline(cin, asal_universitas);
        mahasiswa[i].setAsal_universitas(asal_universitas);

        cout << "Email (.edu)     : ";
        string email_edu;
        getline(cin, email_edu);
        mahasiswa[i].setEmail_edu(email_edu);

        cout << "NIM              : ";
        string nim;
        getline(cin, nim);
        mahasiswa[i].setNIM(nim);

        cout << "Fakultas         : ";
        string fakultas;
        getline(cin, fakultas);
        mahasiswa[i].setFakultas(fakultas);

        cout << "Program Studi    : ";
        string prodi;
        getline(cin, prodi);
        mahasiswa[i].setProdi(prodi);

        cout << endl;
    }

    cout << "LIST DATA MAHASISWA" << endl;

    for(int i = 0; i < n; i++)
    {
        std::cout << (i + 1) << ". | NIK: " << mahasiswa[i].getNIK() << " | Nama: " << mahasiswa[i].getNama() << " | Jenis Kelamin: " << mahasiswa[i].getJenis_kelamin() << " | Asal Universitas: " << mahasiswa[i].getAsal_universitas() << " | Email (.edu): " << mahasiswa[i].getEmail_edu() << " | NIM: " << mahasiswa[i].getNIM() << " | Fakultas: " << mahasiswa[i].getFakultas() << " | Program Studi: " << mahasiswa[i].getProdi() << std::endl;
    }
}