void selection_8()
{

  // ROOT version
  Int_t root_version = gROOT->GetVersionInt();

  // Creating a new TCanvas
  TCanvas* canvas = new TCanvas("canvas_plotflow_tempo105","canvas_plotflow_tempo105",0,0,700,500);
  gStyle->SetOptStat(0);
  gStyle->SetOptTitle(0);
  canvas->SetHighLightColor(2);
  canvas->SetFillColor(0);
  canvas->SetBorderMode(0);
  canvas->SetBorderSize(3);
  canvas->SetFrameBorderMode(0);
  canvas->SetFrameBorderSize(0);
  canvas->SetTickx(1);
  canvas->SetTicky(1);
  canvas->SetLeftMargin(0.14);
  canvas->SetRightMargin(0.05);
  canvas->SetBottomMargin(0.15);
  canvas->SetTopMargin(0.05);

  // Creating a new TH1F
  TH1F* S9_PT_0 = new TH1F("S9_PT_0","S9_PT_0",40,0.0,500.0);
  // Content
  S9_PT_0->SetBinContent(0,0.0); // underflow
  S9_PT_0->SetBinContent(1,0.03507213536529585);
  S9_PT_0->SetBinContent(2,0.18200209234325904);
  S9_PT_0->SetBinContent(3,0.18592492921047743);
  S9_PT_0->SetBinContent(4,0.38493074197826116);
  S9_PT_0->SetBinContent(5,0.14403039682775962);
  S9_PT_0->SetBinContent(6,0.03830652271728727);
  S9_PT_0->SetBinContent(7,0.01466648544988817);
  S9_PT_0->SetBinContent(8,0.006171220665103439);
  S9_PT_0->SetBinContent(9,0.003452393508746678);
  S9_PT_0->SetBinContent(10,0.002088775309846307);
  S9_PT_0->SetBinContent(11,0.0011091322443219271);
  S9_PT_0->SetBinContent(12,0.0008218303961323271);
  S9_PT_0->SetBinContent(13,0.00035530944606783425);
  S9_PT_0->SetBinContent(14,0.0003196634313891857);
  S9_PT_0->SetBinContent(15,0.00020678678904342091);
  S9_PT_0->SetBinContent(16,0.00021426084514475244);
  S9_PT_0->SetBinContent(17,4.4087347776033835e-05);
  S9_PT_0->SetBinContent(18,7.411558070491076e-05);
  S9_PT_0->SetBinContent(19,6.20678570084359e-05);
  S9_PT_0->SetBinContent(20,6.701377064467284e-05);
  S9_PT_0->SetBinContent(21,2.1972542388336642e-05);
  S9_PT_0->SetBinContent(22,1.0649013196025574e-05);
  S9_PT_0->SetBinContent(23,0.0);
  S9_PT_0->SetBinContent(24,1.221525583796659e-05);
  S9_PT_0->SetBinContent(25,1.0581700703074442e-05);
  S9_PT_0->SetBinContent(26,0.0);
  S9_PT_0->SetBinContent(27,0.0);
  S9_PT_0->SetBinContent(28,0.0);
  S9_PT_0->SetBinContent(29,0.0);
  S9_PT_0->SetBinContent(30,0.0);
  S9_PT_0->SetBinContent(31,0.0);
  S9_PT_0->SetBinContent(32,0.0);
  S9_PT_0->SetBinContent(33,0.0);
  S9_PT_0->SetBinContent(34,0.0);
  S9_PT_0->SetBinContent(35,1.2195752339128444e-05);
  S9_PT_0->SetBinContent(36,1.242465137708161e-05);
  S9_PT_0->SetBinContent(37,0.0);
  S9_PT_0->SetBinContent(38,0.0);
  S9_PT_0->SetBinContent(39,0.0);
  S9_PT_0->SetBinContent(40,0.0);
  S9_PT_0->SetBinContent(41,0.0); // overflow
  S9_PT_0->SetEntries(99348);
  // Style
  S9_PT_0->SetLineColor(9);
  S9_PT_0->SetLineStyle(1);
  S9_PT_0->SetLineWidth(1);
  S9_PT_0->SetFillColor(0);
  S9_PT_0->SetFillStyle(1001);

  // Creating a new THStack
  THStack* stack = new THStack("mystack_106","mystack");
  stack->Add(S9_PT_0);
  stack->Draw("nostack");

  // Y axis
  stack->GetYaxis()->SetLabelSize(0.04);
  stack->GetYaxis()->SetLabelOffset(0.005);
  stack->GetYaxis()->SetTitleSize(0.06);
  stack->GetYaxis()->SetTitleFont(22);
  stack->GetYaxis()->SetTitleOffset(1);
  stack->GetYaxis()->SetTitle("Events  ( scaled to one )");

  // X axis
  stack->GetXaxis()->SetLabelSize(0.04);
  stack->GetXaxis()->SetLabelOffset(0.005);
  stack->GetXaxis()->SetTitleSize(0.06);
  stack->GetXaxis()->SetTitleFont(22);
  stack->GetXaxis()->SetTitleOffset(1);
  stack->GetXaxis()->SetTitle("p_{T} [ mu_{1} ] (GeV/c) ");

  // Finalizing the TCanvas
  canvas->SetLogx(0);
  canvas->SetLogy(1);

  // Saving the image
  canvas->SaveAs("../../HTML/MadAnalysis5job_0/selection_8.png");

}
