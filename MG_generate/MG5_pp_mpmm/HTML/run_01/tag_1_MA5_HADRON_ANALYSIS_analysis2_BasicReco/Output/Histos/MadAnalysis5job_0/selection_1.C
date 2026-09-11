void selection_1()
{

  // ROOT version
  Int_t root_version = gROOT->GetVersionInt();

  // Creating a new TCanvas
  TCanvas* canvas = new TCanvas("canvas_plotflow_tempo21","canvas_plotflow_tempo21",0,0,700,500);
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
  TH1F* S2_THT_0 = new TH1F("S2_THT_0","S2_THT_0",40,0.0,500.0);
  // Content
  S2_THT_0->SetBinContent(0,0.0); // underflow
  S2_THT_0->SetBinContent(1,0.2500210410576683);
  S2_THT_0->SetBinContent(2,0.14979097524046364);
  S2_THT_0->SetBinContent(3,0.12517500261472753);
  S2_THT_0->SetBinContent(4,0.10268285398891376);
  S2_THT_0->SetBinContent(5,0.08356884142862625);
  S2_THT_0->SetBinContent(6,0.0648535476455975);
  S2_THT_0->SetBinContent(7,0.05129420445790104);
  S2_THT_0->SetBinContent(8,0.04053837914849047);
  S2_THT_0->SetBinContent(9,0.031657455967537475);
  S2_THT_0->SetBinContent(10,0.024546480255622977);
  S2_THT_0->SetBinContent(11,0.019231068372923082);
  S2_THT_0->SetBinContent(12,0.014214241704276822);
  S2_THT_0->SetBinContent(13,0.01079873104851961);
  S2_THT_0->SetBinContent(14,0.007851205614286616);
  S2_THT_0->SetBinContent(15,0.0054935604651829804);
  S2_THT_0->SetBinContent(16,0.004876343152484005);
  S2_THT_0->SetBinContent(17,0.0028559992423855714);
  S2_THT_0->SetBinContent(18,0.0023592770599141304);
  S2_THT_0->SetBinContent(19,0.0019010691828874);
  S2_THT_0->SetBinContent(20,0.0012945264630524226);
  S2_THT_0->SetBinContent(21,0.0011680301774958139);
  S2_THT_0->SetBinContent(22,0.0009887606397131078);
  S2_THT_0->SetBinContent(23,0.0006401566532995464);
  S2_THT_0->SetBinContent(24,0.0005457981178563077);
  S2_THT_0->SetBinContent(25,0.00037919434618981137);
  S2_THT_0->SetBinContent(26,0.0003331488429564967);
  S2_THT_0->SetBinContent(27,0.00015053701466463332);
  S2_THT_0->SetBinContent(28,0.00022091291621782294);
  S2_THT_0->SetBinContent(29,4.5101677832669145e-05);
  S2_THT_0->SetBinContent(30,0.0001304943661825668);
  S2_THT_0->SetBinContent(31,8.654517240843881e-05);
  S2_THT_0->SetBinContent(32,4.516370658102848e-05);
  S2_THT_0->SetBinContent(33,4.5064016800738454e-05);
  S2_THT_0->SetBinContent(34,0.0);
  S2_THT_0->SetBinContent(35,1.3773446255082215e-05);
  S2_THT_0->SetBinContent(36,0.0);
  S2_THT_0->SetBinContent(37,0.0);
  S2_THT_0->SetBinContent(38,1.4996622914802329e-05);
  S2_THT_0->SetBinContent(39,2.8832575993475136e-05);
  S2_THT_0->SetBinContent(40,4.209167986716172e-05);
  S2_THT_0->SetBinContent(41,0.00011659391530877069); // overflow
  S2_THT_0->SetEntries(70286);
  // Style
  S2_THT_0->SetLineColor(9);
  S2_THT_0->SetLineStyle(1);
  S2_THT_0->SetLineWidth(1);
  S2_THT_0->SetFillColor(0);
  S2_THT_0->SetFillStyle(1001);

  // Creating a new THStack
  THStack* stack = new THStack("mystack_22","mystack");
  stack->Add(S2_THT_0);
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
  stack->GetXaxis()->SetTitle("H_{T} (GeV) ");

  // Finalizing the TCanvas
  canvas->SetLogx(0);
  canvas->SetLogy(0);

  // Saving the image
  canvas->SaveAs("../../HTML/MadAnalysis5job_0/selection_1.png");

}
