namespace EV_XldMain_CSharp
{
    partial class Form1
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(Form1));
            this.evWorkspace1 = new AtlasTree.EVWorkspace();
            this.globeWidget1 = new AtlasTree.GlobeWidget();
            this.menuStrip1 = new System.Windows.Forms.MenuStrip();
            this.水下地形ToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.加载地形ToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.treeView1 = new System.Windows.Forms.TreeView();
            this.tabControl1 = new System.Windows.Forms.TabControl();
            this.tabPage1 = new System.Windows.Forms.TabPage();
            this.tabPage2 = new System.Windows.Forms.TabPage();
            this.treeView2 = new System.Windows.Forms.TreeView();
            this.splitContainer1 = new System.Windows.Forms.SplitContainer();
            this.加载碎片地形ToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.加载缓存ToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.menuStrip1.SuspendLayout();
            this.tabControl1.SuspendLayout();
            this.tabPage1.SuspendLayout();
            this.tabPage2.SuspendLayout();
            this.splitContainer1.Panel1.SuspendLayout();
            this.splitContainer1.Panel2.SuspendLayout();
            this.splitContainer1.SuspendLayout();
            this.SuspendLayout();
            // 
            // evWorkspace1
            // 
            this.evWorkspace1.BackgroundImage = ((System.Drawing.Image)(resources.GetObject("evWorkspace1.BackgroundImage")));
            this.evWorkspace1.BackgroundImageLayout = System.Windows.Forms.ImageLayout.Stretch;
            this.evWorkspace1.IsOpenLink = false;
            this.evWorkspace1.Location = new System.Drawing.Point(13, 39);
            this.evWorkspace1.Name = "evWorkspace1";
            this.evWorkspace1.RelativeFilePath = "";
            this.evWorkspace1.RuntimeFilePath = "D:\\Projects\\XiaolangdiSystem\\System\\EV_Xld\\bin64\\MyData\\xld.evproj";
            this.evWorkspace1.Size = new System.Drawing.Size(54, 52);
            this.evWorkspace1.TabIndex = 0;
            this.evWorkspace1.ToolBar_Project = false;
            // 
            // globeWidget1
            // 
            this.globeWidget1.BackgroundImage = ((System.Drawing.Image)(resources.GetObject("globeWidget1.BackgroundImage")));
            this.globeWidget1.BackgroundImageLayout = System.Windows.Forms.ImageLayout.Stretch;
            this.globeWidget1.Dock = System.Windows.Forms.DockStyle.Fill;
            this.globeWidget1.Location = new System.Drawing.Point(0, 0);
            this.globeWidget1.Name = "globeWidget1";
            this.globeWidget1.SceneName = "新场景1";
            this.globeWidget1.Size = new System.Drawing.Size(432, 386);
            this.globeWidget1.TabIndex = 1;
            this.globeWidget1.Toolbar3D_Analysis = false;
            this.globeWidget1.Toolbar3D_Attribute = false;
            this.globeWidget1.Toolbar3D_Measure = false;
            this.globeWidget1.Toolbar3D_ModelLayerSelection = false;
            this.globeWidget1.Toolbar3D_Query = false;
            this.globeWidget1.Toolbar3D_ShowAll = false;
            // 
            // menuStrip1
            // 
            this.menuStrip1.Items.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.水下地形ToolStripMenuItem});
            this.menuStrip1.Location = new System.Drawing.Point(0, 0);
            this.menuStrip1.Name = "menuStrip1";
            this.menuStrip1.Size = new System.Drawing.Size(654, 25);
            this.menuStrip1.TabIndex = 2;
            this.menuStrip1.Text = "menuStrip1";
            // 
            // 水下地形ToolStripMenuItem
            // 
            this.水下地形ToolStripMenuItem.DropDownItems.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.加载地形ToolStripMenuItem,
            this.加载碎片地形ToolStripMenuItem,
            this.加载缓存ToolStripMenuItem});
            this.水下地形ToolStripMenuItem.Name = "水下地形ToolStripMenuItem";
            this.水下地形ToolStripMenuItem.Size = new System.Drawing.Size(68, 21);
            this.水下地形ToolStripMenuItem.Text = "水下地形";
           
            // 
            // 加载地形ToolStripMenuItem
            // 
            this.加载地形ToolStripMenuItem.Name = "加载地形ToolStripMenuItem";
            this.加载地形ToolStripMenuItem.Size = new System.Drawing.Size(152, 22);
            this.加载地形ToolStripMenuItem.Text = "加载地形";
            // 
            // treeView1
            // 
            this.treeView1.Dock = System.Windows.Forms.DockStyle.Fill;
            this.treeView1.Location = new System.Drawing.Point(3, 3);
            this.treeView1.Name = "treeView1";
            this.treeView1.Size = new System.Drawing.Size(204, 354);
            this.treeView1.TabIndex = 3;
            // 
            // tabControl1
            // 
            this.tabControl1.Controls.Add(this.tabPage1);
            this.tabControl1.Controls.Add(this.tabPage2);
            this.tabControl1.Dock = System.Windows.Forms.DockStyle.Fill;
            this.tabControl1.Location = new System.Drawing.Point(0, 0);
            this.tabControl1.Name = "tabControl1";
            this.tabControl1.SelectedIndex = 0;
            this.tabControl1.Size = new System.Drawing.Size(218, 386);
            this.tabControl1.TabIndex = 4;
            // 
            // tabPage1
            // 
            this.tabPage1.Controls.Add(this.treeView1);
            this.tabPage1.Location = new System.Drawing.Point(4, 22);
            this.tabPage1.Name = "tabPage1";
            this.tabPage1.Padding = new System.Windows.Forms.Padding(3);
            this.tabPage1.Size = new System.Drawing.Size(210, 360);
            this.tabPage1.TabIndex = 0;
            this.tabPage1.Text = "地形图层";
            this.tabPage1.UseVisualStyleBackColor = true;
            // 
            // tabPage2
            // 
            this.tabPage2.Controls.Add(this.treeView2);
            this.tabPage2.Location = new System.Drawing.Point(4, 22);
            this.tabPage2.Name = "tabPage2";
            this.tabPage2.Padding = new System.Windows.Forms.Padding(3);
            this.tabPage2.Size = new System.Drawing.Size(210, 360);
            this.tabPage2.TabIndex = 1;
            this.tabPage2.Text = "grd文件图层";
            this.tabPage2.UseVisualStyleBackColor = true;
            // 
            // treeView2
            // 
            this.treeView2.Dock = System.Windows.Forms.DockStyle.Fill;
            this.treeView2.Location = new System.Drawing.Point(3, 3);
            this.treeView2.Name = "treeView2";
            this.treeView2.Size = new System.Drawing.Size(204, 354);
            this.treeView2.TabIndex = 4;
            // 
            // splitContainer1
            // 
            this.splitContainer1.Dock = System.Windows.Forms.DockStyle.Fill;
            this.splitContainer1.Location = new System.Drawing.Point(0, 25);
            this.splitContainer1.Name = "splitContainer1";
            // 
            // splitContainer1.Panel1
            // 
            this.splitContainer1.Panel1.Controls.Add(this.tabControl1);
            // 
            // splitContainer1.Panel2
            // 
            this.splitContainer1.Panel2.Controls.Add(this.globeWidget1);
            this.splitContainer1.Size = new System.Drawing.Size(654, 386);
            this.splitContainer1.SplitterDistance = 218;
            this.splitContainer1.TabIndex = 5;
            // 
            // 加载碎片地形ToolStripMenuItem
            // 
            this.加载碎片地形ToolStripMenuItem.Name = "加载碎片地形ToolStripMenuItem";
            this.加载碎片地形ToolStripMenuItem.Size = new System.Drawing.Size(152, 22);
            this.加载碎片地形ToolStripMenuItem.Text = "加载碎片地形";
            // 
            // 加载缓存ToolStripMenuItem
            // 
            this.加载缓存ToolStripMenuItem.Name = "加载缓存ToolStripMenuItem";
            this.加载缓存ToolStripMenuItem.Size = new System.Drawing.Size(152, 22);
            this.加载缓存ToolStripMenuItem.Text = "加载缓存";
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 12F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(654, 411);
            this.Controls.Add(this.splitContainer1);
            this.Controls.Add(this.evWorkspace1);
            this.Controls.Add(this.menuStrip1);
            this.MainMenuStrip = this.menuStrip1;
            this.Name = "Form1";
            this.Text = "Form1";
            this.menuStrip1.ResumeLayout(false);
            this.menuStrip1.PerformLayout();
            this.tabControl1.ResumeLayout(false);
            this.tabPage1.ResumeLayout(false);
            this.tabPage2.ResumeLayout(false);
            this.splitContainer1.Panel1.ResumeLayout(false);
            this.splitContainer1.Panel2.ResumeLayout(false);
            this.splitContainer1.ResumeLayout(false);
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private AtlasTree.EVWorkspace evWorkspace1;
        private AtlasTree.GlobeWidget globeWidget1;
        private System.Windows.Forms.MenuStrip menuStrip1;
        private System.Windows.Forms.ToolStripMenuItem 水下地形ToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem 加载地形ToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem 加载碎片地形ToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem 加载缓存ToolStripMenuItem;
        private System.Windows.Forms.TreeView treeView1;
        private System.Windows.Forms.TabControl tabControl1;
        private System.Windows.Forms.TabPage tabPage1;
        private System.Windows.Forms.TabPage tabPage2;
        private System.Windows.Forms.TreeView treeView2;
        private System.Windows.Forms.SplitContainer splitContainer1;
    }
}

