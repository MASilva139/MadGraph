void selection_5()
{

  // ROOT version
  Int_t root_version = gROOT->GetVersionInt();

  // Creating a new TCanvas
  TCanvas* canvas = new TCanvas("canvas_plotflow_tempo29","canvas_plotflow_tempo29",0,0,700,500);
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
  TH1F* S6_PT_0 = new TH1F("S6_PT_0","S6_PT_0",40,0.0,500.0);
  // Content
  S6_PT_0->SetBinContent(0,0.0); // underflow
  S6_PT_0->SetBinContent(1,0.0);
  S6_PT_0->SetBinContent(2,0.3016787188936085);
  S6_PT_0->SetBinContent(3,0.3494064647871847);
  S6_PT_0->SetBinContent(4,0.15425671660792586);
  S6_PT_0->SetBinContent(5,0.08306189882553962);
  S6_PT_0->SetBinContent(6,0.03950100426808914);
  S6_PT_0->SetBinContent(7,0.020330588301710476);
  S6_PT_0->SetBinContent(8,0.015058962272768601);
  S6_PT_0->SetBinContent(9,0.00782622845683136);
  S6_PT_0->SetBinContent(10,0.006888149402801584);
  S6_PT_0->SetBinContent(11,0.005901088664956126);
  S6_PT_0->SetBinContent(12,0.001348493077943576);
  S6_PT_0->SetBinContent(13,0.002672204195888676);
  S6_PT_0->SetBinContent(14,0.0027508441387253976);
  S6_PT_0->SetBinContent(15,0.0021385242399936857);
  S6_PT_0->SetBinContent(16,0.0);
  S6_PT_0->SetBinContent(17,0.0013338386192874373);
  S6_PT_0->SetBinContent(18,0.000621529455031186);
  S6_PT_0->SetBinContent(19,0.0005943248244833197);
  S6_PT_0->SetBinContent(20,0.0);
  S6_PT_0->SetBinContent(21,0.0012888115972220144);
  S6_PT_0->SetBinContent(22,0.0014319181501374046);
  S6_PT_0->SetBinContent(23,0.0);
  S6_PT_0->SetBinContent(24,0.0);
  S6_PT_0->SetBinContent(25,0.0);
  S6_PT_0->SetBinContent(26,0.0006702947173980237);
  S6_PT_0->SetBinContent(27,0.0);
  S6_PT_0->SetBinContent(28,0.0004751652196771673);
  S6_PT_0->SetBinContent(29,0.0);
  S6_PT_0->SetBinContent(30,0.0);
  S6_PT_0->SetBinContent(31,0.0);
  S6_PT_0->SetBinContent(32,0.00076423128279618);
  S6_PT_0->SetBinContent(33,0.0);
  S6_PT_0->SetBinContent(34,0.0);
  S6_PT_0->SetBinContent(35,0.0);
  S6_PT_0->SetBinContent(36,0.0);
  S6_PT_0->SetBinContent(37,0.0);
  S6_PT_0->SetBinContent(38,0.0);
  S6_PT_0->SetBinContent(39,0.0);
  S6_PT_0->SetBinContent(40,0.0);
  S6_PT_0->SetBinContent(41,0.0); // overflow
  S6_PT_0->SetEntries(1638);
  // Style
  S6_PT_0->SetLineColor(9);
  S6_PT_0->SetLineStyle(1);
  S6_PT_0->SetLineWidth(1);
  S6_PT_0->SetFillColor(0);
  S6_PT_0->SetFillStyle(1001);

  // Creating a new THStack
  THStack* stack = new THStack("mystack_30","mystack");
  stack->Add(S6_PT_0);
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
  stack->GetXaxis()->SetTitle("p_{T} [ j_{2} ] (GeV/c) ");

  // Finalizing the TCanvas
  canvas->SetLogx(0);
  canvas->SetLogy(1);

  // Saving the image
  canvas->SaveAs("../../HTML/MadAnalysis5job_0/selection_5.png");

}
