void selection_21()
{

  // ROOT version
  Int_t root_version = gROOT->GetVersionInt();

  // Creating a new TCanvas
  TCanvas* canvas = new TCanvas("canvas_plotflow_tempo131","canvas_plotflow_tempo131",0,0,700,500);
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
  TH1F* S22_DELTAR_0 = new TH1F("S22_DELTAR_0","S22_DELTAR_0",40,0.0,10.0);
  // Content
  S22_DELTAR_0->SetBinContent(0,0.0); // underflow
  S22_DELTAR_0->SetBinContent(1,0.0012634902376687457);
  S22_DELTAR_0->SetBinContent(2,0.002834877196254793);
  S22_DELTAR_0->SetBinContent(3,0.0045646340853252535);
  S22_DELTAR_0->SetBinContent(4,0.00849125579737298);
  S22_DELTAR_0->SetBinContent(5,0.011515849870808595);
  S22_DELTAR_0->SetBinContent(6,0.015242124257272557);
  S22_DELTAR_0->SetBinContent(7,0.023709395830967504);
  S22_DELTAR_0->SetBinContent(8,0.0392959522205977);
  S22_DELTAR_0->SetBinContent(9,0.06815162191077653);
  S22_DELTAR_0->SetBinContent(10,0.10453292053693453);
  S22_DELTAR_0->SetBinContent(11,0.14825939600392746);
  S22_DELTAR_0->SetBinContent(12,0.19133105879943257);
  S22_DELTAR_0->SetBinContent(13,0.18744234550389693);
  S22_DELTAR_0->SetBinContent(14,0.08421704884481888);
  S22_DELTAR_0->SetBinContent(15,0.0486722625652172);
  S22_DELTAR_0->SetBinContent(16,0.028436749697636165);
  S22_DELTAR_0->SetBinContent(17,0.015923829948411603);
  S22_DELTAR_0->SetBinContent(18,0.007899956285666756);
  S22_DELTAR_0->SetBinContent(19,0.005365951334916024);
  S22_DELTAR_0->SetBinContent(20,0.002079469553567501);
  S22_DELTAR_0->SetBinContent(21,0.00037980769476141156);
  S22_DELTAR_0->SetBinContent(22,0.0002450587220359005);
  S22_DELTAR_0->SetBinContent(23,0.00014494310173247387);
  S22_DELTAR_0->SetBinContent(24,0.0);
  S22_DELTAR_0->SetBinContent(25,0.0);
  S22_DELTAR_0->SetBinContent(26,0.0);
  S22_DELTAR_0->SetBinContent(27,0.0);
  S22_DELTAR_0->SetBinContent(28,0.0);
  S22_DELTAR_0->SetBinContent(29,0.0);
  S22_DELTAR_0->SetBinContent(30,0.0);
  S22_DELTAR_0->SetBinContent(31,0.0);
  S22_DELTAR_0->SetBinContent(32,0.0);
  S22_DELTAR_0->SetBinContent(33,0.0);
  S22_DELTAR_0->SetBinContent(34,0.0);
  S22_DELTAR_0->SetBinContent(35,0.0);
  S22_DELTAR_0->SetBinContent(36,0.0);
  S22_DELTAR_0->SetBinContent(37,0.0);
  S22_DELTAR_0->SetBinContent(38,0.0);
  S22_DELTAR_0->SetBinContent(39,0.0);
  S22_DELTAR_0->SetBinContent(40,0.0);
  S22_DELTAR_0->SetBinContent(41,0.0); // overflow
  S22_DELTAR_0->SetEntries(20920);
  // Style
  S22_DELTAR_0->SetLineColor(9);
  S22_DELTAR_0->SetLineStyle(1);
  S22_DELTAR_0->SetLineWidth(1);
  S22_DELTAR_0->SetFillColor(0);
  S22_DELTAR_0->SetFillStyle(1001);

  // Creating a new THStack
  THStack* stack = new THStack("mystack_132","mystack");
  stack->Add(S22_DELTAR_0);
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
  stack->GetXaxis()->SetTitle("#DeltaR [ j_{1}, mu_{1} ] ");

  // Finalizing the TCanvas
  canvas->SetLogx(0);
  canvas->SetLogy(1);

  // Saving the image
  canvas->SaveAs("../../HTML/MadAnalysis5job_0/selection_21.png");

}
