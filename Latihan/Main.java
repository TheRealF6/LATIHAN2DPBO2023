import java.util.ArrayList;
import java.util.Scanner;

class Human
{
    String NIK;
    String nama;
    String jenis_kelamin;
}

class SivitasAkademik extends Human
{
    String asal_universitas;
    String email_edu;
}

class Mahasiswa extends SivitasAkademik
{
    String NIM;
    String fakultas;
    String prodi;
}

public class Main
{
    public static void main(String[] args)
    {
        Mahasiswa mahasiswa[] = new Mahasiswa[100];
        
        Scanner scan = new Scanner(System.in);

        System.out.print("Masukan jumlah data yang ingin dimasukkan : ");

        int n;
        n = scan.nextInt();

        System.out.println(" ");

        int i;

        for(i = 1; i <= n; i++)
        {
            mahasiswa[i] = new Mahasiswa();
            System.out.println("MASUKAN DATA MAHASISWA KE-" + i);
            
            System.out.print("NIK              : ");
            mahasiswa[i].NIK = scan.next();

            System.out.print("Nama             : ");
            mahasiswa[i].nama = scan.next();

            System.out.print("Jenis Kelamin    : ");
            mahasiswa[i].jenis_kelamin = scan.next();

            System.out.print("Asal Universitas : ");
            mahasiswa[i].asal_universitas = scan.next();

            System.out.print("Email (.edu)     : ");
            mahasiswa[i].email_edu = scan.next();

            System.out.print("NIM              : ");
            mahasiswa[i].NIM = scan.next();

            System.out.print("Fakultas         : ");
            mahasiswa[i].fakultas = scan.next();

            System.out.print("Program Studi    : ");
            mahasiswa[i].prodi = scan.next();

            System.out.println(" ");
        }

        System.out.println("LIST DATA MAHASISWA");

        for(i = 1; i <= n; i++)
        {
            System.out.print(i + ". | NIK: " + mahasiswa[i].NIK + " | Nama: " + mahasiswa[i].nama + " | Jenis Kelamin: " + mahasiswa[i].jenis_kelamin);
            System.out.print(" | Asal Universitas: " + mahasiswa[i].asal_universitas + " | Email (.edu): " + mahasiswa[i].email_edu);
            System.out.println(" | NIM: " + mahasiswa[i].NIM + " | Fakultas: " + mahasiswa[i].fakultas + " | Program Studi: " + mahasiswa[i].prodi);
        }
    }
}