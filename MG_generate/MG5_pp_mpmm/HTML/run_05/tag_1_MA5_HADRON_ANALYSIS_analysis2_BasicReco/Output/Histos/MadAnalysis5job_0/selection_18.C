void selection_18()
{

  // ROOT version
  Int_t root_version = gROOT->GetVersionInt();

  // Creating a new TCanvas
  TCanvas* canvas = new TCanvas("canvas_plotflow_tempo55","canvas_plotflow_tempo55",0,0,700,500);
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
  TH1F* S19_M_0 = new TH1F("S19_M_0","S19_M_0",40,0.0,500.0);
  // Content
  S19_M_0->SetBinContent(0,0.0); // underflow
  S19_M_0->SetBinContent(1,0.010495164143407128);
  S19_M_0->SetBinContent(2,0.043965556616904156);
  S19_M_0->SetBinContent(3,0.12643226884614533);
  S19_M_0->SetBinContent(4,0.1690038842615162);
  S19_M_0->SetBinContent(5,0.13226584219187107);
  S19_M_0->SetBinContent(6,0.10381535574732587);
  S19_M_0->SetBinContent(7,0.09067270563347575);
  S19_M_0->SetBinContent(8,0.09110725782241054);
  S19_M_0->SetBinContent(9,0.0502385789453127);
  S19_M_0->SetBinContent(10,0.05302125850502206);
  S19_M_0->SetBinContent(11,0.032781972133688816);
  S19_M_0->SetBinContent(12,0.026959171734208684);
  S19_M_0->SetBinContent(13,0.010646069554488399);
  S19_M_0->SetBinContent(14,0.008562005612195424);
  S19_M_0->SetBinContent(15,0.011120247516580915);
  S19_M_0->SetBinContent(16,0.008076741003007802);
  S19_M_0->SetBinContent(17,0.011442112239389608);
  S19_M_0->SetBinContent(18,0.005507741454857149);
  S19_M_0->SetBinContent(19,0.0028686263237891804);
  S19_M_0->SetBinContent(20,0.0);
  S19_M_0->SetBinContent(21,0.0);
  S19_M_0->SetBinContent(22,0.0);
  S19_M_0->SetBinContent(23,0.002644280865910108);
  S19_M_0->SetBinContent(24,0.0);
  S19_M_0->SetBinContent(25,0.0028612206883693375);
  S19_M_0->SetBinContent(26,0.0026450226536505294);
  S19_M_0->SetBinContent(27,0.0028669155064734693);
  S19_M_0->SetBinContent(28,0.0);
  S19_M_0->SetBinContent(29,0.0);
  S19_M_0->SetBinContent(30,0.0);
  S19_M_0->SetBinContent(31,0.0);
  S19_M_0->SetBinContent(32,0.0);
  S19_M_0->SetBinContent(33,0.0);
  S19_M_0->SetBinContent(34,0.0);
  S19_M_0->SetBinContent(35,0.0);
  S19_M_0->SetBinContent(36,0.0);
  S19_M_0->SetBinContent(37,0.0);
  S19_M_0->SetBinContent(38,0.0);
  S19_M_0->SetBinContent(39,0.0);
  S19_M_0->SetBinContent(40,0.0);
  S19_M_0->SetBinContent(41,0.0); // overflow
  S19_M_0->SetEntries(363);
  // Style
  S19_M_0->SetLineColor(9);
  S19_M_0->SetLineStyle(1);
  S19_M_0->SetLineWidth(1);
  S19_M_0->SetFillColor(0);
  S19_M_0->SetFillStyle(1001);

  // Creating a new THStack
  THStack* stack = new THStack("mystack_56","mystack");
  stack->Add(S19_M_0);
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
  stack->GetXaxis()->SetTitle("M [ j_{2} mu_{2} ] (GeV/c^{2}) ");

  // Finalizing the TCanvas
  canvas->SetLogx(0);
  canvas->SetLogy(1);

  // Saving the image
  canvas->SaveAs("../../HTML/MadAnalysis5job_0/selection_18.png");

}
