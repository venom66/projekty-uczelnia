using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Data.SqlClient;

namespace WindowsFormsApplication1
{
    public partial class wyplata1 : Form
    {
        int d=0;
        int sto = 100;
        int piecdziesiat = 40;
        int dwadziescia = 30;
        int dziesiec = 2;
        int banknoty = 5;
        int wybanknoty = 0; // banknoty wyplacone przez maszyne


        int stan_konta = 0; // ile jest na koncie wogóle kasy
        int wyplata = 0; // ile wyplacamy
        int n_stan_konta = 0;
        int telefon;

        
        public wyplata1()
        {
            InitializeComponent();
        }

        public wyplata1(int tel)
        {
            InitializeComponent();
            telefon = tel;
            textBox4.Text = tel.ToString();
        }

        public wyplata1(int sk, int w, int tel)
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            wyplata = int.Parse(textBox1.Text);
            using (SqlConnection sqlConn = new SqlConnection(@"Data Source=(LocalDB)\MSSQLLocalDB;AttachDbFilename=C:\Users\BartD\Desktop\wersja finalna 2015\zip\newb.mdf;Integrated Security=True;Connect Timeout=30;"))
            {
                sqlConn.Open();
                string sqlQuery = @"SELECT stan_konta FROM LOGIN where tel='" + textBox4.Text + "'";

                using (SqlCommand cmd = new SqlCommand(sqlQuery, sqlConn))
                {

                    using (SqlDataReader reader = cmd.ExecuteReader())
                    {
                        if (reader.Read())
                        {

                            d = reader.GetInt32(reader.GetOrdinal("stan_konta"));
                            textBox1.Text = d.ToString();

                        }
                        else
                            MessageBox.Show("nie ma takiej wartosci");
                    }


                }
                sqlConn.Close();
            }

            

         stan_konta=d;

         if (stan_konta >= wyplata)
         {
             if (wyplata >= 10)
             {
                 if (wyplata % 10 == 0)
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
                             wybanknoty = wybanknoty + 1;
                             banknoty = banknoty--;
                             Console.WriteLine("1");
                         }

                         if (banknoty < 5 && banknoty >= 2 && dwadziescia > 0)// warunek dla 20
                         {
                             dwadziescia = dwadziescia - 1;
                             wybanknoty = wybanknoty + 2;
                             banknoty = banknoty - 2;
                             Console.WriteLine("2");
                         }
                         if (banknoty >= 5 && banknoty < 10 && piecdziesiat > 0) // warunek dla 50
                         {
                             piecdziesiat = piecdziesiat - 1;
                             wybanknoty = wybanknoty + 5;
                             banknoty = banknoty - 5;
                             Console.WriteLine("5");
                         }
                         if (banknoty >= 10 && sto > 0 && piecdziesiat >= 0 && dwadziescia >= 0 && dziesiec >= 0) //warunek dla 100
                         {
                             sto = sto - 1;
                             banknoty = banknoty - 10;
                             wybanknoty = wybanknoty + 10;
                             Console.WriteLine("10");
                         }

                         if (banknoty >= 10 && sto == 0 && piecdziesiat > 1 && dwadziescia >= 0 && dziesiec >= 0) // warunek dla 100/ 50
                         {
                             piecdziesiat = piecdziesiat - 2;
                             banknoty = banknoty - 10;
                             wybanknoty = wybanknoty + 10;
                             Console.WriteLine("100/50");
                         }


                         if (banknoty >= 10 && sto == 0 && piecdziesiat == 0 && dwadziescia > 4) // warunek dla 100/ 20
                         {
                             dwadziescia = dwadziescia - 5;
                             banknoty = banknoty - 10;
                             wybanknoty = wybanknoty + 10;
                             Console.WriteLine("100/20");

                         }

                         if (banknoty >= 10 && dziesiec >= 10 && sto == 0 && piecdziesiat == 0 && dwadziescia == 0) // warunek dla 100 / 10
                         {
                             dziesiec = dziesiec - 10;
                             banknoty = banknoty - 10;
                             wybanknoty = wybanknoty + 10;
                             Console.WriteLine("100/10");
                         }

                         if (banknoty >= 5 && sto == 0 && piecdziesiat == 0 && dwadziescia > 1 && dziesiec > 0) //warunek dla 50 / 20/10
                         {
                             dwadziescia = dwadziescia - 2;
                             dziesiec = dziesiec - 1;
                             banknoty = banknoty - 5;
                             wybanknoty = wybanknoty + 5;
                             Console.WriteLine("50/20/10");
                         }

                         if (banknoty >= 5 && sto == 0 && piecdziesiat == 0 && dwadziescia == 0 && dziesiec >= 5) // warunek dla 50 / 10
                         {
                             dziesiec = dziesiec - 5;
                             banknoty = banknoty - 5;
                             wybanknoty = wybanknoty + 5;
                             Console.WriteLine("50/10");
                         }

                     } while (wybanknoty * 10 < wyplata);

                    }
                    else
                     MessageBox.Show("próbujesz wypłacić złotówki, sprobuj jeszcze raz");
                 }
                 else
                     MessageBox.Show("nie mozesz wyplacac ponizej 10 zl");
             }
             else
                 MessageBox.Show("nie możesz wyplacic wiecej niż masz");
         

        textBox2.Text = n_stan_konta.ToString();
        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {

        }

        private void textBox2_TextChanged(object sender, EventArgs e)
        {

        }

        private void button2_Click(object sender, EventArgs e)
        {
            System.Threading.Thread.Sleep(1000);
            this.Hide();
            wyplacono w1 = new wyplacono(stan_konta, wyplata, telefon);
            w1.Show();
        }

        private void button3_Click(object sender, EventArgs e)
        {
            this.Hide();
            ekran ek = new ekran(telefon);
            ek.Show();
        }

        private void textBox4_TextChanged(object sender, EventArgs e)
        {

        }
    }
}
