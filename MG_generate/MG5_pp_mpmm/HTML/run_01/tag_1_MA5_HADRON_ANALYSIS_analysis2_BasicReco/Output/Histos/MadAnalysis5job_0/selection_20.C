void selection_20()
{

  // ROOT version
  Int_t root_version = gROOT->GetVersionInt();

  // Creating a new TCanvas
  TCanvas* canvas = new TCanvas("canvas_plotflow_tempo59","canvas_plotflow_tempo59",0,0,700,500);
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
  TH1F* S21_DELTAR_0 = new TH1F("S21_DELTAR_0","S21_DELTAR_0",40,0.0,10.0);
  // Content
  S21_DELTAR_0->SetBinContent(0,0.0); // underflow
  S21_DELTAR_0->SetBinContent(1,0.0);
  S21_DELTAR_0->SetBinContent(2,0.00908213168741218);
  S21_DELTAR_0->SetBinContent(3,0.051964156461293265);
  S21_DELTAR_0->SetBinContent(4,0.04735840158129139);
  S21_DELTAR_0->SetBinContent(5,0.04565070291475757);
  S21_DELTAR_0->SetBinContent(6,0.053951268881843324);
  S21_DELTAR_0->SetBinContent(7,0.059432291963407234);
  S21_DELTAR_0->SetBinContent(8,0.0671406971679108);
  S21_DELTAR_0->SetBinContent(9,0.07091924679581625);
  S21_DELTAR_0->SetBinContent(10,0.08967005833387563);
  S21_DELTAR_0->SetBinContent(11,0.09585049417678246);
  S21_DELTAR_0->SetBinContent(12,0.10493272496305951);
  S21_DELTAR_0->SetBinContent(13,0.10781042086428906);
  S21_DELTAR_0->SetBinContent(14,0.06513083705337747);
  S21_DELTAR_0->SetBinContent(15,0.0487962360207881);
  S21_DELTAR_0->SetBinContent(16,0.02982627184754577);
  S21_DELTAR_0->SetBinContent(17,0.019488836820753693);
  S21_DELTAR_0->SetBinContent(18,0.014784712803879241);
  S21_DELTAR_0->SetBinContent(19,0.009042577726844444);
  S21_DELTAR_0->SetBinContent(20,0.005872999632599517);
  S21_DELTAR_0->SetBinContent(21,0.0020199330636987453);
  S21_DELTAR_0->SetBinContent(22,0.0012749992387743217);
  S21_DELTAR_0->SetBinContent(23,0.0);
  S21_DELTAR_0->SetBinContent(24,0.0);
  S21_DELTAR_0->SetBinContent(25,0.0);
  S21_DELTAR_0->SetBinContent(26,0.0);
  S21_DELTAR_0->SetBinContent(27,0.0);
  S21_DELTAR_0->SetBinContent(28,0.0);
  S21_DELTAR_0->SetBinContent(29,0.0);
  S21_DELTAR_0->SetBinContent(30,0.0);
  S21_DELTAR_0->SetBinContent(31,0.0);
  S21_DELTAR_0->SetBinContent(32,0.0);
  S21_DELTAR_0->SetBinContent(33,0.0);
  S21_DELTAR_0->SetBinContent(34,0.0);
  S21_DELTAR_0->SetBinContent(35,0.0);
  S21_DELTAR_0->SetBinContent(36,0.0);
  S21_DELTAR_0->SetBinContent(37,0.0);
  S21_DELTAR_0->SetBinContent(38,0.0);
  S21_DELTAR_0->SetBinContent(39,0.0);
  S21_DELTAR_0->SetBinContent(40,0.0);
  S21_DELTAR_0->SetBinContent(41,0.0); // overflow
  S21_DELTAR_0->SetEntries(3091);
  // Style
  S21_DELTAR_0->SetLineColor(9);
  S21_DELTAR_0->SetLineStyle(1);
  S21_DELTAR_0->SetLineWidth(1);
  S21_DELTAR_0->SetFillColor(0);
  S21_DELTAR_0->SetFillStyle(1001);

  // Creating a new THStack
  THStack* stack = new THStack("mystack_60","mystack");
  stack->Add(S21_DELTAR_0);
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
  stack->GetXaxis()->SetTitle("#DeltaR [ j_{1}, j_{2} ] ");

  // Finalizing the TCanvas
  canvas->SetLogx(0);
  canvas->SetLogy(1);

  // Saving the image
  canvas->SaveAs("../../HTML/MadAnalysis5job_0/selection_20.png");

}
