
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class GaussJord {

    public static void main(String[] args) throws IOException {
        BufferedReader input = new BufferedReader(new InputStreamReader(System.in));
        System.out.println("GAUSS JORDAN\n");

        System.out.print("Jumlah baris matriks : ");
        String txtBaris = input.readLine();
        int baris = Integer.parseInt(txtBaris);

        System.out.print("Jumlah kolom matriks : ");
        String txtKolom = input.readLine();
        int kolom = Integer.parseInt(txtKolom);

        String txtNilai[][] = new String[baris + 1][kolom + 1];
        int nilai[][] = new int[baris + 1][kolom + 1];

        for (int brs = 1; brs <= baris; brs++) {
            for (int klm = 1; klm <= kolom; klm++) {
                System.out.print("Nilai matrik ordo [" + brs + "][" + klm + "] = ");
                txtNilai[brs][klm] = input.readLine();
                nilai[brs][klm] = Integer.parseInt(txtNilai[brs][klm]);
            }
        }

        System.out.print("Matrik yang di masukan = \n");

        for (int brs = 1; brs <= baris; brs++) {
            for (int klm = 1; klm <= kolom; klm++) {
                System.out.print(nilai[brs][klm] + " ");
            }
            System.out.println();
        }

        //metode gauss
        for (int brs = 1; brs <= baris; brs++) {
            for (int klm = 1; klm <= kolom; klm++) {
                nilai[brs][klm]=nilai[brs][klm]/nilai[brs][brs];
            }
            for (int j = brs + 1; j <= baris; j++) {
                for (int klm = 1; klm <= kolom; klm++) {
                    nilai[j][klm]=nilai[j][klm]-(nilai[j][brs]*nilai[brs][klm]);
                }
            }
        }
        
        //metode jordan
        for (int i = baris; i >= 2; i--) {
            for (int j = i-1; j >= 1; j--) {
                for (int klm = 1; klm <= kolom; klm++) {
                    nilai[j][klm]=nilai[j][klm]-(nilai[j][i]*nilai[i][klm]);
                }
            }
        }
        
        System.out.println("Hasil = ");

        for (int brs = 1; brs <= baris; brs++) {
            for (int klm = 1; klm <= kolom; klm++) {
                System.out.print(nilai[brs][klm] + " ");
            }
            System.out.println();
        }
    }
}