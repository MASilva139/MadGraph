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
  S2_THT_0->SetBinContent(1,0.0354378774370782);
  S2_THT_0->SetBinContent(2,0.08783627185858099);
  S2_THT_0->SetBinContent(3,0.11711777205185112);
  S2_THT_0->SetBinContent(4,0.11833452880195353);
  S2_THT_0->SetBinContent(5,0.10660084797754234);
  S2_THT_0->SetBinContent(6,0.09579929576545111);
  S2_THT_0->SetBinContent(7,0.08759231167831927);
  S2_THT_0->SetBinContent(8,0.06559831921331193);
  S2_THT_0->SetBinContent(9,0.05767401310459604);
  S2_THT_0->SetBinContent(10,0.04196808596198377);
  S2_THT_0->SetBinContent(11,0.036255141662711855);
  S2_THT_0->SetBinContent(12,0.027896273456334206);
  S2_THT_0->SetBinContent(13,0.022400771926426005);
  S2_THT_0->SetBinContent(14,0.019560945100455984);
  S2_THT_0->SetBinContent(15,0.014020390132695586);
  S2_THT_0->SetBinContent(16,0.012756743941044726);
  S2_THT_0->SetBinContent(17,0.010836892905001045);
  S2_THT_0->SetBinContent(18,0.0074366854068267894);
  S2_THT_0->SetBinContent(19,0.006014733839479483);
  S2_THT_0->SetBinContent(20,0.0049638262522814615);
  S2_THT_0->SetBinContent(21,0.003958883921351625);
  S2_THT_0->SetBinContent(22,0.0027696168079387224);
  S2_THT_0->SetBinContent(23,0.0030147589750359935);
  S2_THT_0->SetBinContent(24,0.002533599008433498);
  S2_THT_0->SetBinContent(25,0.0017776078387977277);
  S2_THT_0->SetBinContent(26,0.0015404361157258918);
  S2_THT_0->SetBinContent(27,0.0010984424839319195);
  S2_THT_0->SetBinContent(28,0.0007756815958051889);
  S2_THT_0->SetBinContent(29,0.000841338229540045);
  S2_THT_0->SetBinContent(30,0.0008005247235397765);
  S2_THT_0->SetBinContent(31,0.00021351086756196737);
  S2_THT_0->SetBinContent(32,0.000126423076381218);
  S2_THT_0->SetBinContent(33,9.9908757199273e-05);
  S2_THT_0->SetBinContent(34,0.0005268184295069284);
  S2_THT_0->SetBinContent(35,0.00010448035883809059);
  S2_THT_0->SetBinContent(36,0.00011114733536890853);
  S2_THT_0->SetBinContent(37,0.00024255896697447231);
  S2_THT_0->SetBinContent(38,0.0001171252397352789);
  S2_THT_0->SetBinContent(39,0.00022114093743065614);
  S2_THT_0->SetBinContent(40,0.00022964191993350206);
  S2_THT_0->SetBinContent(41,0.002794625937043775); // overflow
  S2_THT_0->SetEntries(10000);
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
