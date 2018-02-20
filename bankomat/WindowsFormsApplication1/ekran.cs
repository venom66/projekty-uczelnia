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
    public partial class ekran : Form
    {
        int stan_konta = 0; // ile jest na koncie wogóle kasy
        int d = 0;
        int nrk;
        int telefon;

        public ekran()
        {
            InitializeComponent();
        }

        public ekran(int tel)
        {
            InitializeComponent();
            telefon=tel;
            textBox1.Text=telefon.ToString();
        }

        public ekran(string t)
        {
            InitializeComponent();
            textBox1.Text = t;
        }
        private void button1_Click(object sender, EventArgs e)
        {
            //this.Hide();
            stankonta sk= new stankonta(telefon);
            sk.Show();
        }

        private void button2_Click_1(object sender, EventArgs e)
        {
            this.Hide();
            wyplata1 wy = new wyplata1(telefon);
            wy.Show();

        }

        private void button4_Click(object sender, EventArgs e)
        {
            Close();
        }

        public void textBox1_TextChanged(object sender, EventArgs e)
        {

        }

        private void textBox1_TextChanged_1(object sender, EventArgs e)
        {

        }
    }
}
