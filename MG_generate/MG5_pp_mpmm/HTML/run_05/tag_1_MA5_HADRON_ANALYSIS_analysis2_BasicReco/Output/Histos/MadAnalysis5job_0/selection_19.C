void selection_19()
{

  // ROOT version
  Int_t root_version = gROOT->GetVersionInt();

  // Creating a new TCanvas
  TCanvas* canvas = new TCanvas("canvas_plotflow_tempo57","canvas_plotflow_tempo57",0,0,700,500);
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
  TH1F* S20_M_0 = new TH1F("S20_M_0","S20_M_0",40,0.0,500.0);
  // Content
  S20_M_0->SetBinContent(0,0.0); // underflow
  S20_M_0->SetBinContent(1,0.0);
  S20_M_0->SetBinContent(2,0.022884429856573706);
  S20_M_0->SetBinContent(3,0.07566242948895929);
  S20_M_0->SetBinContent(4,0.03799481509800751);
  S20_M_0->SetBinContent(5,0.025910016240988227);
  S20_M_0->SetBinContent(6,0.03118358541388114);
  S20_M_0->SetBinContent(7,0.11902682266731766);
  S20_M_0->SetBinContent(8,0.652704364450075);
  S20_M_0->SetBinContent(9,0.019668082489251858);
  S20_M_0->SetBinContent(10,0.005977021312574243);
  S20_M_0->SetBinContent(11,0.0035081755984591816);
  S20_M_0->SetBinContent(12,0.0013942122347755956);
  S20_M_0->SetBinContent(13,0.001259647149019156);
  S20_M_0->SetBinContent(14,0.0005134095097181019);
  S20_M_0->SetBinContent(15,0.0005094607720621642);
  S20_M_0->SetBinContent(16,0.0008839916506355383);
  S20_M_0->SetBinContent(17,0.00013018228402773287);
  S20_M_0->SetBinContent(18,0.0);
  S20_M_0->SetBinContent(19,0.00013217036375034032);
  S20_M_0->SetBinContent(20,0.0);
  S20_M_0->SetBinContent(21,0.00012141909629937446);
  S20_M_0->SetBinContent(22,0.00013299123827685634);
  S20_M_0->SetBinContent(23,0.0);
  S20_M_0->SetBinContent(24,0.00013311943514172795);
  S20_M_0->SetBinContent(25,0.0);
  S20_M_0->SetBinContent(26,0.0);
  S20_M_0->SetBinContent(27,0.00013407162412939648);
  S20_M_0->SetBinContent(28,0.0);
  S20_M_0->SetBinContent(29,0.0);
  S20_M_0->SetBinContent(30,0.0);
  S20_M_0->SetBinContent(31,0.0);
  S20_M_0->SetBinContent(32,0.0);
  S20_M_0->SetBinContent(33,0.00013558202607628878);
  S20_M_0->SetBinContent(34,0.0);
  S20_M_0->SetBinContent(35,0.0);
  S20_M_0->SetBinContent(36,0.0);
  S20_M_0->SetBinContent(37,0.0);
  S20_M_0->SetBinContent(38,0.0);
  S20_M_0->SetBinContent(39,0.0);
  S20_M_0->SetBinContent(40,0.0);
  S20_M_0->SetBinContent(41,0.0); // overflow
  S20_M_0->SetEntries(8575);
  // Style
  S20_M_0->SetLineColor(9);
  S20_M_0->SetLineStyle(1);
  S20_M_0->SetLineWidth(1);
  S20_M_0->SetFillColor(0);
  S20_M_0->SetFillStyle(1001);

  // Creating a new THStack
  THStack* stack = new THStack("mystack_58","mystack");
  stack->Add(S20_M_0);
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
  stack->GetXaxis()->SetTitle("M [ mu_{1} mu_{2} ] (GeV/c^{2}) ");

  // Finalizing the TCanvas
  canvas->SetLogx(0);
  canvas->SetLogy(1);

  // Saving the image
  canvas->SaveAs("../../HTML/MadAnalysis5job_0/selection_19.png");

}
