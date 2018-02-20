using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Media;
using System.Data.SqlClient;

namespace WindowsFormsApplication1
{
    public partial class wyplacono : Form
    {

        SoundPlayer player = new SoundPlayer();
      //  string tel;
        int telefon;
        int sto = 100;
        int nsto = 0;
        int piecdziesiat = 40;
        int npiecdziesiat = 0;
        int dwadziescia = 30;
        int ndwadziescia = 0;
        int dziesiec = 2;
        int ndziesiec = 0;
        int banknoty = 0; // czemu było 5????????
        int wybanknoty = 0; // banknoty wyplacone przez maszyne


        int stan_konta; // ile jest na koncie wogóle kasy
        int wyplata = 0; // ile wyplacamy
        int n_stan_konta = 0;
        public wyplacono()
        {
            InitializeComponent();
        }
        public wyplacono (string tel)
        {
            InitializeComponent();
        }

         public wyplacono(int sk, int w, int tel)
        {
            InitializeComponent();
            textBox2.Text = w.ToString();
            stan_konta = sk;
            wyplata = w;
            telefon = tel;
            textTel2.Text = tel.ToString(); 


        }

        private void button1_Click(object sender, EventArgs e)
         {

             if (stan_konta >= wyplata)
             {
                 if (wyplata >= 10)
                 {


                     n_stan_konta = stan_konta - wyplata;

                     Console.WriteLine("saldo po operacji: ");
                     Console.WriteLine(n_stan_konta);

                     banknoty = wyplata / 10;

                     Console.WriteLine("liczba banknotow: ");
                     Console.WriteLine(banknoty);
                     Console.WriteLine();
                     Console.WriteLine("wyplacone banknoty:): ");

                  
                     do
                     {
                         if (banknoty == 0)
                         {
                             Console.WriteLine("koniec operacji");
                             break;
                         }

                         if (banknoty <= 1 && banknoty > 0 && dziesiec > 0) // warunek dla 10
                         {
                             dziesiec = dziesiec - 1;
                             ndziesiec = ndziesiec + 1;
                             wybanknoty = wybanknoty + 1;
                             banknoty = banknoty--;
                             Console.WriteLine("1");
                         }

                         if (banknoty < 5 && banknoty >= 2 && dwadziescia > 0)// warunek dla 20
                         {
                             dwadziescia = dwadziescia - 1;
                             ndwadziescia = ndwadziescia + 1;
                             wybanknoty = wybanknoty + 2;
                             banknoty = banknoty - 2;
                             Console.WriteLine("2");
                         }
                         if (banknoty >= 5 && banknoty < 10 && piecdziesiat > 0) // warunek dla 50
                         {
                             piecdziesiat = piecdziesiat - 1;
                             npiecdziesiat = npiecdziesiat + 1;
                             wybanknoty = wybanknoty + 5;
                             banknoty = banknoty - 5;
                             Console.WriteLine("5");
                         }
                         if (banknoty >= 10 && sto > 0 && piecdziesiat >= 0 && dwadziescia >= 0 && dziesiec >= 0) //warunek dla 100
                         {
                             sto = sto - 1;
                             nsto = nsto + 1;
                             banknoty = banknoty - 10;
                             wybanknoty = wybanknoty + 10;
                             Console.WriteLine("10");
                         }

                         if (banknoty >= 10 && sto == 0 && piecdziesiat > 1 && dwadziescia >= 0 && dziesiec >= 0) // warunek dla 100/ 50
                         {
                             piecdziesiat = piecdziesiat - 2;
                             npiecdziesiat = npiecdziesiat + 2;
                             banknoty = banknoty - 10;
                             wybanknoty = wybanknoty + 10;
                             Console.WriteLine("100/50");
                         }


                         if (banknoty >= 10 && sto == 0 && piecdziesiat == 0 && dwadziescia > 4) // warunek dla 100/ 20
                         {
                             dwadziescia = dwadziescia - 5;
                             ndwadziescia = ndwadziescia + 5;
                             banknoty = banknoty - 10;
                             wybanknoty = wybanknoty + 10;
                             Console.WriteLine("100/20");

                         }

                         if (banknoty >= 10 && dziesiec >= 10 && sto == 0 && piecdziesiat == 0 && dwadziescia == 0) // warunek dla 100 / 10
                         {
                             dziesiec = dziesiec - 10;
                             ndziesiec = ndziesiec + 10;
                             banknoty = banknoty - 10;
                             wybanknoty = wybanknoty + 10;
                             Console.WriteLine("100/10");
                         }

                         if (banknoty >= 5 && sto == 0 && piecdziesiat == 0 && dwadziescia > 1 && dziesiec > 0) //warunek dla 50 / 20/10
                         {
                             dwadziescia = dwadziescia - 2;
                             ndwadziescia = ndwadziescia + 2;
                             dziesiec = dziesiec - 1;
                             banknoty = banknoty - 5;
                             wybanknoty = wybanknoty + 5;
                             Console.WriteLine("50/20/10");
                         }

                         if (banknoty >= 5 && sto == 0 && piecdziesiat == 0 && dwadziescia == 0 && dziesiec >= 5) // warunek dla 50 / 10
                         {
                             dziesiec = dziesiec - 5;
                             ndziesiec = ndziesiec + 5;
                             banknoty = banknoty - 5;
                             wybanknoty = wybanknoty + 5;
                             Console.WriteLine("50/10");
                         }

                     } while (wybanknoty * 10 < wyplata);

                 }
                 else
                     MessageBox.Show("nie mozesz wyplacac ponizej 10 zl");
             }
             else
                 MessageBox.Show("nie możesz wyplacic wiecej niż masz");
               
             textBox7.Text = nsto.ToString();
             if (nsto > 0)
             {
                 pictureBox1.Image = new Bitmap(@"F:\bankomat\bankomat\zip\WindowsFormsApplication1\sto.jpg");
             }
             textBox6.Text = npiecdziesiat.ToString();
             if (npiecdziesiat > 0)
             {
                 pictureBox2.Image = new Bitmap(@"F:\bankomat\bankomat\zip\WindowsFormsApplication1\50.jpg");
             }
             textBox5.Text = ndwadziescia.ToString();
             if (ndwadziescia > 0)
             {
                 pictureBox3.Image = new Bitmap(@"F:\bankomat\bankomat\zip\WindowsFormsApplication1\20.jpg");
             }
             textBox4.Text = ndziesiec.ToString();
             if (ndziesiec > 0)
             {
                 pictureBox4.Image = new Bitmap(@"F:\bankomat\bankomat\zip\WindowsFormsApplication1\10.jpg");
             }

             player.SoundLocation = @"C:\Windows\Media\Alarm10.wav";
             player.PlayLooping();
             MessageBox.Show("Pieniadze odebrane:)");
             this.player.Stop();
             textBox1.Text = n_stan_konta.ToString();

                 SqlConnection con = new SqlConnection(@"Data Source=(LocalDB)\MSSQLLocalDB;AttachDbFilename=C:\Users\BartD\Desktop\wersja finalna 2015\zip\newb.mdf;Integrated Security=True;Connect Timeout=30;");
                 con.Open();
                //SqlCommand cmd = new SqlCommand("Update LOGIN set stan_konta=@stan_konta", con);
                // SqlCommand cmd = new SqlCommand("Update LOGIN set stan_konta=@stan_konta WHERE tel='" + textTel2.Text + "'", con); // błąd
                SqlCommand cmd = new SqlCommand("Update LOGIN set stan_konta=@stan_konta where tel=@tel", con); // błąd
                 cmd.Parameters.AddWithValue("@stan_konta", textBox1.Text);
                 cmd.Parameters.AddWithValue("@tel", textTel2.Text);
                 cmd.ExecuteNonQuery();

                 con.Close();
                 MessageBox.Show("Record Updated Successfully!");
            
         }

        private void textBox11_TextChanged(object sender, EventArgs e)
        {

        }

        private void button2_Click(object sender, EventArgs e)
        {
            Close();
        }

        private void pictureBox1_Click(object sender, EventArgs e)
        {

        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {

        }

        private void button3_Click(object sender, EventArgs e)
        {
            ekran ekr = new ekran(telefon);
            ekr.Show();
        }
        }
    }
