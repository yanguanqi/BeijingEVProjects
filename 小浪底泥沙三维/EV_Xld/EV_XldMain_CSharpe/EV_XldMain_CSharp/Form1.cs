using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Text;
using System.Windows.Forms;

namespace EV_XldMain_CSharp
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
            string[] fileNames = System.IO.Directory.GetFiles(".\\qtdll");
            for (int i = 0; i < fileNames.Length; i++)
            {
                EarthView.World.Core.LoadDll.Load(fileNames[i]);
            }
            EarthView.World.Core.LoadDll.Load(".\\qtdll\\QtCore4.dll");
            globeWidget1.LoadEnd += GlobeWidget1_LoadEnd;
            this.加载地形ToolStripMenuItem.Click += 加载地形ToolStripMenuItem_Click;
            this.加载碎片地形ToolStripMenuItem.Click += 加载碎片地形ToolStripMenuItem_Click;
        }

        private void 加载碎片地形ToolStripMenuItem_Click(object sender, EventArgs e)
        {
            //EarthView.XldManager.WaterConservancyManager.GetSingletonPtr()
        }

        private void 加载地形ToolStripMenuItem_Click(object sender, EventArgs e)
        {
            OpenFileDialog ofd = new OpenFileDialog();
            ofd.InitialDirectory = Application.StartupPath;
            ofd.Filter = "grd地形文件|*.grd";
            if(ofd.ShowDialog() == DialogResult.OK)
            {
                EarthView.XldManager.WaterConservancyManager.GetSingletonPtr().CreateTerrain(ofd.FileName);
            }
        }

        private void GlobeWidget1_LoadEnd(object sender, EventArgs e)
        {
            EarthView.XldManager.WaterConservancyManager.GetSingletonPtr().Initialise(globeWidget1.GetGlobeControl());
        }

      
    }
}
