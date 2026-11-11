void selection_9()
{

  // ROOT version
  Int_t root_version = gROOT->GetVersionInt();

  // Creating a new TCanvas
  TCanvas* canvas = new TCanvas("canvas_plotflow_tempo37","canvas_plotflow_tempo37",0,0,700,500);
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
  TH1F* S10_DELTAR_0 = new TH1F("S10_DELTAR_0","S10_DELTAR_0",40,0.0,10.0);
  // Content
  S10_DELTAR_0->SetBinContent(0,0.0); // underflow
  S10_DELTAR_0->SetBinContent(1,0.000596844955295565);
  S10_DELTAR_0->SetBinContent(2,0.0005871872184623374);
  S10_DELTAR_0->SetBinContent(3,0.011440092558268377);
  S10_DELTAR_0->SetBinContent(4,0.007940381392025483);
  S10_DELTAR_0->SetBinContent(5,0.003702033993278476);
  S10_DELTAR_0->SetBinContent(6,0.00510921941798746);
  S10_DELTAR_0->SetBinContent(7,0.013679108933370161);
  S10_DELTAR_0->SetBinContent(8,0.01258319551371188);
  S10_DELTAR_0->SetBinContent(9,0.029405655803243214);
  S10_DELTAR_0->SetBinContent(10,0.05502407799271531);
  S10_DELTAR_0->SetBinContent(11,0.07972941177655445);
  S10_DELTAR_0->SetBinContent(12,0.19494044095791527);
  S10_DELTAR_0->SetBinContent(13,0.31040972740614037);
  S10_DELTAR_0->SetBinContent(14,0.11757448221799484);
  S10_DELTAR_0->SetBinContent(15,0.06501207057202207);
  S10_DELTAR_0->SetBinContent(16,0.04249787630473934);
  S10_DELTAR_0->SetBinContent(17,0.022977304958617748);
  S10_DELTAR_0->SetBinContent(18,0.014589984841357822);
  S10_DELTAR_0->SetBinContent(19,0.006499823891151807);
  S10_DELTAR_0->SetBinContent(20,0.0037775855335386473);
  S10_DELTAR_0->SetBinContent(21,0.0012730092292547125);
  S10_DELTAR_0->SetBinContent(22,0.0006504845323548332);
  S10_DELTAR_0->SetBinContent(23,0.0);
  S10_DELTAR_0->SetBinContent(24,0.0);
  S10_DELTAR_0->SetBinContent(25,0.0);
  S10_DELTAR_0->SetBinContent(26,0.0);
  S10_DELTAR_0->SetBinContent(27,0.0);
  S10_DELTAR_0->SetBinContent(28,0.0);
  S10_DELTAR_0->SetBinContent(29,0.0);
  S10_DELTAR_0->SetBinContent(30,0.0);
  S10_DELTAR_0->SetBinContent(31,0.0);
  S10_DELTAR_0->SetBinContent(32,0.0);
  S10_DELTAR_0->SetBinContent(33,0.0);
  S10_DELTAR_0->SetBinContent(34,0.0);
  S10_DELTAR_0->SetBinContent(35,0.0);
  S10_DELTAR_0->SetBinContent(36,0.0);
  S10_DELTAR_0->SetBinContent(37,0.0);
  S10_DELTAR_0->SetBinContent(38,0.0);
  S10_DELTAR_0->SetBinContent(39,0.0);
  S10_DELTAR_0->SetBinContent(40,0.0);
  S10_DELTAR_0->SetBinContent(41,0.0); // overflow
  S10_DELTAR_0->SetEntries(1638);
  // Style
  S10_DELTAR_0->SetLineColor(9);
  S10_DELTAR_0->SetLineStyle(1);
  S10_DELTAR_0->SetLineWidth(1);
  S10_DELTAR_0->SetFillColor(0);
  S10_DELTAR_0->SetFillStyle(1001);

  // Creating a new THStack
  THStack* stack = new THStack("mystack_38","mystack");
  stack->Add(S10_DELTAR_0);
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
  canvas->SaveAs("../../HTML/MadAnalysis5job_0/selection_9.png");

}
