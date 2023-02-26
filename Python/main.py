class Human:
    def __init__(self):
        self.__NIK = ''
        self.__nama = ''
        self.__jenis_kelamin = ''
    
    def getNIK(self):
        return self.__NIK
    
    def getNama(self):
        return self.__nama
    
    def getJenis_kelamin(self):
        return self.__jenis_kelamin
    
    def setNIK(self, NIK):
        self.__NIK = NIK
    
    def setNama(self, nama):
        self.__nama = nama
    
    def setJenis_kelamin(self, jenis_kelamin):
        self.__jenis_kelamin = jenis_kelamin

class SivitasAkademik(Human):
    def __init__(self):
        super().__init__()
        self.__asal_universitas = ''
        self.__email_edu = ''
    
    def getAsal_universitas(self):
        return self.__asal_universitas
    
    def getEmail_edu(self):
        return self.__email_edu
    
    def setAsal_universitas(self, asal_universitas):
        self.__asal_universitas = asal_universitas
    
    def setEmail_edu(self, email_edu):
        self.__email_edu = email_edu

class Mahasiswa(SivitasAkademik):
    def __init__(self):
        super().__init__()
        self.__NIM = ''
        self.__fakultas = ''
        self.__prodi = ''
    
    def getNIM(self):
        return self.__NIM
    
    def getFakultas(self):
        return self.__fakultas
    
    def getProdi(self):
        return self.__prodi
    
    def setNIM(self, NIM):
        self.__NIM = NIM
    
    def setFakultas(self, fakultas):
        self.__fakultas = fakultas
    
    def setProdi(self, prodi):
        self.__prodi = prodi

if __name__ == '__main__':
    n = int(input("Masukan jumlah data yang ingin dimasukkan: "))
    mahasiswa = [Mahasiswa() for i in range(n)]
    
    print()
    
    for i in range(n):
        mahasiswa[i] = Mahasiswa()
        print(f"MASUKAN DATA MAHASISWA KE-{i+1}")
        
        nik = input("NIK              : ")
        mahasiswa[i].setNIK(nik)
        
        nama = input("Nama             : ")
        mahasiswa[i].setNama(nama)
        
        jenis_kelamin = input("Jenis Kelamin    : ")
        mahasiswa[i].setJenis_kelamin(jenis_kelamin)
        
        asal_universitas = input("Asal Universitas : ")
        mahasiswa[i].setAsal_universitas(asal_universitas)
        
        email_edu = input("Email (.edu)     : ")
        mahasiswa[i].setEmail_edu(email_edu)
        
        nim = input("NIM              : ")
        mahasiswa[i].setNIM(nim)
        
        fakultas = input("Fakultas         : ")
        mahasiswa[i].setFakultas(fakultas)
        
        prodi = input("Program Studi    : ")
        mahasiswa[i].setProdi(prodi)
        
        print()
    
    print("LIST DATA MAHASISWA")

    for i in range(n):
        print(f"{i + 1}. | NIK: {mahasiswa[i].getNIK()} | Nama: {mahasiswa[i].getNama()} | Jenis Kelamin: {mahasiswa[i].getJenis_kelamin()} | Asal Universitas: {mahasiswa[i].getAsal_universitas()} | Email (.edu): {mahasiswa[i].getEmail_edu()} | NIM: {mahasiswa[i].getNIM()} | Fakultas: {mahasiswa[i].getFakultas()} | Program Studi: {mahasiswa[i].getProdi()}")