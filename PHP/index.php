<?php

    class Human
    {
        private $NIK = ["1234123412341234", "1256125612561256", "1290129012901290"];
        private $nama = ["Aldo Sukmajaya", "Dika Putra Salman", "Rina Andini Putri"];
        private $jenis_kelamin = ["Laki-laki", "Laki-laki", "Perempuan"];

        public function getNIK($i) {
            return $this->NIK[$i];
        }

        public function getNama($i) {
            return $this->nama[$i];
        }

        public function getJenisKelamin($i) {
            return $this->jenis_kelamin[$i];
        }
    }

    class SivitasAkademik extends Human
    {
        private $asal_universitas = ["Universitas Pendidikan Indonesia", "Universitas Pendidikan Indonesia", "Universitas Pendidikan Indonesia"];
        private $email_edu = ["aldo_sukma@upi.edu", "dikaps_456@upi.edu", "rinaap@upi.edu"];

        public function getAsalUniversitas($i) {
            return $this->asal_universitas[$i];
        }

        public function getEmailEdu($i) {
            return $this->email_edu[$i];
        }
    }

    class Mahasiswa extends SivitasAkademik
    {
        private $NIM = ["2100001", "2100002", "2100003"];
        private $fakultas = ["FPMIPA", "FPMIPA", "FPIPS"];
        private $prodi = ["Ilmu Komputer", "Ilmu Komputer", "Akuntansi"];

        public function getNIM($i) {
            return $this->NIM[$i];
        }

        public function getFakultas($i) {
            return $this->fakultas[$i];
        }

        public function getProdi($i) {
            return $this->prodi[$i];
        }
    }

    $n = 3;
    $mahasiswa = array();

    for ($i = 0; $i < $n; $i++) {
        $mahasiswa[$i] = new Mahasiswa();
    }

    echo "LIST DATA MAHASISWA\n";

    echo "1. | NIK: " . $mahasiswa[0]->getNIK(0) . " | Nama: " . $mahasiswa[0]->getNama(0) . " | Jenis Kelamin: " . $mahasiswa[0]->getJenisKelamin(0) . " | Asal Universitas: " . $mahasiswa[0]->getAsalUniversitas(0) . " | Email (.edu): " . $mahasiswa[0]->getEmailEdu(0) . " | NIM: " . $mahasiswa[0]->getNIM(0) . " | Fakultas: " . $mahasiswa[0]->getFakultas(0) . " | Program Studi: " . $mahasiswa[0]->getProdi(0) . "\n";
    echo "2. | NIK: " . $mahasiswa[1]->getNIK(1) . " | Nama: " . $mahasiswa[1]->getNama(1) . " | Jenis Kelamin: " . $mahasiswa[1]->getJenisKelamin(1) . " | Asal Universitas: " . $mahasiswa[1]->getAsalUniversitas(1) . " | Email (.edu): " . $mahasiswa[1]->getEmailEdu(1) . " | NIM: " . $mahasiswa[1]->getNIM(1) . " | Fakultas: " . $mahasiswa[1]->getFakultas(1) . " | Program Studi: " . $mahasiswa[1]->getProdi(1) . "\n";
    echo "3. | NIK: " . $mahasiswa[2]->getNIK(2) . " | Nama: " . $mahasiswa[2]->getNama(2) . " | Jenis Kelamin: " . $mahasiswa[2]->getJenisKelamin(2) . " | Asal Universitas: " . $mahasiswa[2]->getAsalUniversitas(2) . " | Email (.edu): " . $mahasiswa[2]->getEmailEdu(2) . " | NIM: " . $mahasiswa[2]->getNIM(2) . " | Fakultas: " . $mahasiswa[2]->getFakultas(2) . " | Program Studi: " . $mahasiswa[2]->getProdi(2) . "\n";

?>