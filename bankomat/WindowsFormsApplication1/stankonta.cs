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
    public partial class stankonta : Form
    {
        int d;
        int telefon;
        int tel;
        int nrk;
        string t;
        public stankonta()
        {
            InitializeComponent();
        }

        public stankonta(int nrk)
        {
            InitializeComponent();
            textBox2.Text = nrk.ToString();
        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {
            
        }

        private void button1_Click(object sender, EventArgs e)
        {
            using (SqlConnection sqlConn = new SqlConnection(@"Data Source=(LocalDB)\MSSQLLocalDB;AttachDbFilename=C:\Users\BartD\Desktop\wersja finalna 2015\zip\newb.mdf;Integrated Security=True;Connect Timeout=30;"))
            {
                sqlConn.Open();
                string sqlQuery = @"SELECT stan_konta FROM LOGIN where tel='" + textBox2.Text + "'";

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
            }
        }

        private void button3_Click(object sender, EventArgs e)
        {
            
        }

        private void button2_Click(object sender, EventArgs e)
        {
            Close();

        }

        private void textBox2_TextChanged(object sender, EventArgs e)
        {

        }


    }
}
