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
    public partial class logowanie : Form
    {
        int telefon = 0;
        public int d;
        public logowanie()
        {
            InitializeComponent();
        }

        private void textBox2_TextChanged(object sender, EventArgs e)
        {
           
        }

        public logowanie(int tel)
        {
            InitializeComponent();
            
            telefon = tel;
            textTel2.Text = tel.ToString();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            telefon = int.Parse(textTel2.Text);
            SqlConnection con = new SqlConnection(@"Data Source=(LocalDB)\MSSQLLocalDB;AttachDbFilename=C:\Users\BartD\Desktop\wersja finalna 2015\zip\newb.mdf;Integrated Security=True;Connect Timeout=30;");
            con.Open();           
            SqlDataAdapter sda = new SqlDataAdapter("Select Count(*) From Login where tel='" + textTel2.Text + "' and pin ='" +textBox1.Text + "'", con);
            DataTable dt = new DataTable();
            sda.Fill(dt);
            if (dt.Rows[0][0].ToString() == "1")
           {
               this.Hide();
               ekran ss = new ekran(telefon);
               ss.Show();

               using (SqlConnection sqlConn = new SqlConnection(@"Data Source=(LocalDB)\v11.0;AttachDbFilename=F:\bankomat\bankomat\zip\dataB.mdf;Integrated Security=True;Connect Timeout=30;"))
               {
                   sqlConn.Open();
           
                   string sqlQuery = ("SELECT stan_konta FROM LOGIN where tel='" + textTel2.Text + "'");
            

                   using (SqlCommand cmd = new SqlCommand(sqlQuery, sqlConn))
                   {

                       using (SqlDataReader reader = cmd.ExecuteReader())
                       {
                           if (reader.Read())
                           {
                               d = reader.GetInt32(reader.GetOrdinal("stan_konta"));
                               
                           }
                           else
                               MessageBox.Show("nie ma takiej wartosci");
                       }


                   }

                   sqlConn.Close();
               }

           }
           else
           {
               MessageBox.Show("Proszę sprawdzic numer konta i pin:)");
           }

        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {

        }

        private void button2_Click(object sender, EventArgs e)
        {
            Close();
        }

        private void logowanie_Load(object sender, EventArgs e)
        {

        }
    }
}
