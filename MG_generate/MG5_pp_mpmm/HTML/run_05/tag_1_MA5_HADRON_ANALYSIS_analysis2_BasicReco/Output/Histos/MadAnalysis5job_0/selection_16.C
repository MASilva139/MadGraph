void selection_16()
{

  // ROOT version
  Int_t root_version = gROOT->GetVersionInt();

  // Creating a new TCanvas
  TCanvas* canvas = new TCanvas("canvas_plotflow_tempo51","canvas_plotflow_tempo51",0,0,700,500);
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
  TH1F* S17_M_0 = new TH1F("S17_M_0","S17_M_0",40,0.0,500.0);
  // Content
  S17_M_0->SetBinContent(0,0.0); // underflow
  S17_M_0->SetBinContent(1,0.011725779210580791);
  S17_M_0->SetBinContent(2,0.07629191682576948);
  S17_M_0->SetBinContent(3,0.1113505483235501);
  S17_M_0->SetBinContent(4,0.15126930759422944);
  S17_M_0->SetBinContent(5,0.15258538449688747);
  S17_M_0->SetBinContent(6,0.13005595871995068);
  S17_M_0->SetBinContent(7,0.10284622938076396);
  S17_M_0->SetBinContent(8,0.06976559773531953);
  S17_M_0->SetBinContent(9,0.04532105519243975);
  S17_M_0->SetBinContent(10,0.03446863084738414);
  S17_M_0->SetBinContent(11,0.03454241416108402);
  S17_M_0->SetBinContent(12,0.016443088896837335);
  S17_M_0->SetBinContent(13,0.01734458791294907);
  S17_M_0->SetBinContent(14,0.005946409273787791);
  S17_M_0->SetBinContent(15,0.010734161309764853);
  S17_M_0->SetBinContent(16,0.005539225965562745);
  S17_M_0->SetBinContent(17,0.005347024532037252);
  S17_M_0->SetBinContent(18,0.0020912123012752923);
  S17_M_0->SetBinContent(19,0.002221322318033106);
  S17_M_0->SetBinContent(20,0.0011030461391064702);
  S17_M_0->SetBinContent(21,0.00272132076637541);
  S17_M_0->SetBinContent(22,0.0005523210902597119);
  S17_M_0->SetBinContent(23,0.002187702944868522);
  S17_M_0->SetBinContent(24,0.0026982087396958824);
  S17_M_0->SetBinContent(25,0.0015423710864283047);
  S17_M_0->SetBinContent(26,0.0);
  S17_M_0->SetBinContent(27,0.0011009303429524299);
  S17_M_0->SetBinContent(28,0.0005493290664837627);
  S17_M_0->SetBinContent(29,0.00110577858091099);
  S17_M_0->SetBinContent(30,0.0);
  S17_M_0->SetBinContent(31,0.0);
  S17_M_0->SetBinContent(32,0.0);
  S17_M_0->SetBinContent(33,0.0);
  S17_M_0->SetBinContent(34,0.0005491362447120978);
  S17_M_0->SetBinContent(35,0.0);
  S17_M_0->SetBinContent(36,0.0);
  S17_M_0->SetBinContent(37,0.0);
  S17_M_0->SetBinContent(38,0.0);
  S17_M_0->SetBinContent(39,0.0);
  S17_M_0->SetBinContent(40,0.0);
  S17_M_0->SetBinContent(41,0.0); // overflow
  S17_M_0->SetEntries(1885);
  // Style
  S17_M_0->SetLineColor(9);
  S17_M_0->SetLineStyle(1);
  S17_M_0->SetLineWidth(1);
  S17_M_0->SetFillColor(0);
  S17_M_0->SetFillStyle(1001);

  // Creating a new THStack
  THStack* stack = new THStack("mystack_52","mystack");
  stack->Add(S17_M_0);
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
  stack->GetXaxis()->SetTitle("M [ j_{1} mu_{2} ] (GeV/c^{2}) ");

  // Finalizing the TCanvas
  canvas->SetLogx(0);
  canvas->SetLogy(1);

  // Saving the image
  canvas->SaveAs("../../HTML/MadAnalysis5job_0/selection_16.png");

}
