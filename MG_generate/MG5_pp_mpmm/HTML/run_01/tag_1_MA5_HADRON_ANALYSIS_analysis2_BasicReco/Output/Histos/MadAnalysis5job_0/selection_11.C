void selection_11()
{

  // ROOT version
  Int_t root_version = gROOT->GetVersionInt();

  // Creating a new TCanvas
  TCanvas* canvas = new TCanvas("canvas_plotflow_tempo41","canvas_plotflow_tempo41",0,0,700,500);
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
  TH1F* S12_PT_0 = new TH1F("S12_PT_0","S12_PT_0",40,0.0,500.0);
  // Content
  S12_PT_0->SetBinContent(0,0.0); // underflow
  S12_PT_0->SetBinContent(1,0.07195220296459709);
  S12_PT_0->SetBinContent(2,0.23218565964298313);
  S12_PT_0->SetBinContent(3,0.3558856783866065);
  S12_PT_0->SetBinContent(4,0.3228608212905324);
  S12_PT_0->SetBinContent(5,0.01099723331736184);
  S12_PT_0->SetBinContent(6,0.0033617562400084355);
  S12_PT_0->SetBinContent(7,0.0011869643441229723);
  S12_PT_0->SetBinContent(8,0.000729950069172648);
  S12_PT_0->SetBinContent(9,0.0003197944434430413);
  S12_PT_0->SetBinContent(10,0.00014421314460525577);
  S12_PT_0->SetBinContent(11,0.00012553973001852944);
  S12_PT_0->SetBinContent(12,5.743571351027327e-05);
  S12_PT_0->SetBinContent(13,1.896797340076464e-05);
  S12_PT_0->SetBinContent(14,3.6316330441329385e-05);
  S12_PT_0->SetBinContent(15,1.9351589228405554e-05);
  S12_PT_0->SetBinContent(16,3.8898048823737045e-05);
  S12_PT_0->SetBinContent(17,1.9817255250821226e-05);
  S12_PT_0->SetBinContent(18,1.9887129510670767e-05);
  S12_PT_0->SetBinContent(19,0.0);
  S12_PT_0->SetBinContent(20,0.0);
  S12_PT_0->SetBinContent(21,0.0);
  S12_PT_0->SetBinContent(22,0.0);
  S12_PT_0->SetBinContent(23,1.9576306103999133e-05);
  S12_PT_0->SetBinContent(24,0.0);
  S12_PT_0->SetBinContent(25,0.0);
  S12_PT_0->SetBinContent(26,1.993608027825122e-05);
  S12_PT_0->SetBinContent(27,0.0);
  S12_PT_0->SetBinContent(28,0.0);
  S12_PT_0->SetBinContent(29,0.0);
  S12_PT_0->SetBinContent(30,0.0);
  S12_PT_0->SetBinContent(31,0.0);
  S12_PT_0->SetBinContent(32,0.0);
  S12_PT_0->SetBinContent(33,0.0);
  S12_PT_0->SetBinContent(34,0.0);
  S12_PT_0->SetBinContent(35,0.0);
  S12_PT_0->SetBinContent(36,0.0);
  S12_PT_0->SetBinContent(37,0.0);
  S12_PT_0->SetBinContent(38,0.0);
  S12_PT_0->SetBinContent(39,0.0);
  S12_PT_0->SetBinContent(40,0.0);
  S12_PT_0->SetBinContent(41,0.0); // overflow
  S12_PT_0->SetEntries(60747);
  // Style
  S12_PT_0->SetLineColor(9);
  S12_PT_0->SetLineStyle(1);
  S12_PT_0->SetLineWidth(1);
  S12_PT_0->SetFillColor(0);
  S12_PT_0->SetFillStyle(1001);

  // Creating a new THStack
  THStack* stack = new THStack("mystack_42","mystack");
  stack->Add(S12_PT_0);
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
  stack->GetXaxis()->SetTitle("p_{T} [ mu_{2} ] (GeV/c) ");

  // Finalizing the TCanvas
  canvas->SetLogx(0);
  canvas->SetLogy(1);

  // Saving the image
  canvas->SaveAs("../../HTML/MadAnalysis5job_0/selection_11.png");

}
