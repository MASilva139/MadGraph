void selection_17()
{

  // ROOT version
  Int_t root_version = gROOT->GetVersionInt();

  // Creating a new TCanvas
  TCanvas* canvas = new TCanvas("canvas_plotflow_tempo53","canvas_plotflow_tempo53",0,0,700,500);
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
  TH1F* S18_M_0 = new TH1F("S18_M_0","S18_M_0",40,0.0,500.0);
  // Content
  S18_M_0->SetBinContent(0,0.0); // underflow
  S18_M_0->SetBinContent(1,0.0024788958093601246);
  S18_M_0->SetBinContent(2,0.02112423530067549);
  S18_M_0->SetBinContent(3,0.0341955900014695);
  S18_M_0->SetBinContent(4,0.04258610860203002);
  S18_M_0->SetBinContent(5,0.10658078536204257);
  S18_M_0->SetBinContent(6,0.13031703913249942);
  S18_M_0->SetBinContent(7,0.1503555205889171);
  S18_M_0->SetBinContent(8,0.11626202264452587);
  S18_M_0->SetBinContent(9,0.09286307465197854);
  S18_M_0->SetBinContent(10,0.05567747972468856);
  S18_M_0->SetBinContent(11,0.04736367136161382);
  S18_M_0->SetBinContent(12,0.036774867917313124);
  S18_M_0->SetBinContent(13,0.02215836172654746);
  S18_M_0->SetBinContent(14,0.02709364392374059);
  S18_M_0->SetBinContent(15,0.023397021100484028);
  S18_M_0->SetBinContent(16,0.026018295296624642);
  S18_M_0->SetBinContent(17,0.019127490077846393);
  S18_M_0->SetBinContent(18,0.014405156031470195);
  S18_M_0->SetBinContent(19,0.004968906463697831);
  S18_M_0->SetBinContent(20,0.00963558987394912);
  S18_M_0->SetBinContent(21,0.002302401134153253);
  S18_M_0->SetBinContent(22,0.002490480417333831);
  S18_M_0->SetBinContent(23,0.002255647756019276);
  S18_M_0->SetBinContent(24,0.0);
  S18_M_0->SetBinContent(25,0.0022963344141587634);
  S18_M_0->SetBinContent(26,0.0024896737804493987);
  S18_M_0->SetBinContent(27,0.0);
  S18_M_0->SetBinContent(28,0.0);
  S18_M_0->SetBinContent(29,0.0);
  S18_M_0->SetBinContent(30,0.002296978594108893);
  S18_M_0->SetBinContent(31,0.0024847283123020916);
  S18_M_0->SetBinContent(32,0.0);
  S18_M_0->SetBinContent(33,0.0);
  S18_M_0->SetBinContent(34,0.0);
  S18_M_0->SetBinContent(35,0.0);
  S18_M_0->SetBinContent(36,0.0);
  S18_M_0->SetBinContent(37,0.0);
  S18_M_0->SetBinContent(38,0.0);
  S18_M_0->SetBinContent(39,0.0);
  S18_M_0->SetBinContent(40,0.0);
  S18_M_0->SetBinContent(41,0.0); // overflow
  S18_M_0->SetEntries(420);
  // Style
  S18_M_0->SetLineColor(9);
  S18_M_0->SetLineStyle(1);
  S18_M_0->SetLineWidth(1);
  S18_M_0->SetFillColor(0);
  S18_M_0->SetFillStyle(1001);

  // Creating a new THStack
  THStack* stack = new THStack("mystack_54","mystack");
  stack->Add(S18_M_0);
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
  stack->GetXaxis()->SetTitle("M [ j_{2} mu_{1} ] (GeV/c^{2}) ");

  // Finalizing the TCanvas
  canvas->SetLogx(0);
  canvas->SetLogy(1);

  // Saving the image
  canvas->SaveAs("../../HTML/MadAnalysis5job_0/selection_17.png");

}
