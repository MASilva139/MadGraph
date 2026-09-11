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
  S20_M_0->SetBinContent(1,3.447230667001253e-05);
  S20_M_0->SetBinContent(2,0.02325077511891487);
  S20_M_0->SetBinContent(3,0.0754440331756999);
  S20_M_0->SetBinContent(4,0.03783301754184262);
  S20_M_0->SetBinContent(5,0.02647924525354238);
  S20_M_0->SetBinContent(6,0.03309645353914872);
  S20_M_0->SetBinContent(7,0.11760998957908547);
  S20_M_0->SetBinContent(8,0.6507883427549579);
  S20_M_0->SetBinContent(9,0.020841428767138057);
  S20_M_0->SetBinContent(10,0.005615740963898544);
  S20_M_0->SetBinContent(11,0.002766804977183369);
  S20_M_0->SetBinContent(12,0.0016951507918584212);
  S20_M_0->SetBinContent(13,0.001156858499140345);
  S20_M_0->SetBinContent(14,0.0008038394501590785);
  S20_M_0->SetBinContent(15,0.0006703541078338365);
  S20_M_0->SetBinContent(16,0.0004523773696339821);
  S20_M_0->SetBinContent(17,0.00027134238611638484);
  S20_M_0->SetBinContent(18,0.00021566917427442276);
  S20_M_0->SetBinContent(19,0.00020229081199852117);
  S20_M_0->SetBinContent(20,9.169468365648714e-05);
  S20_M_0->SetBinContent(21,0.00016581778701029755);
  S20_M_0->SetBinContent(22,3.755339117853996e-05);
  S20_M_0->SetBinContent(23,5.640125158492358e-05);
  S20_M_0->SetBinContent(24,0.0);
  S20_M_0->SetBinContent(25,7.408607225351836e-05);
  S20_M_0->SetBinContent(26,7.456708408306022e-05);
  S20_M_0->SetBinContent(27,3.79128975960886e-05);
  S20_M_0->SetBinContent(28,1.8967975997779855e-05);
  S20_M_0->SetBinContent(29,0.0);
  S20_M_0->SetBinContent(30,1.9187768506576947e-05);
  S20_M_0->SetBinContent(31,0.0);
  S20_M_0->SetBinContent(32,0.0);
  S20_M_0->SetBinContent(33,1.9319058070879257e-05);
  S20_M_0->SetBinContent(34,0.0);
  S20_M_0->SetBinContent(35,3.853695474820505e-05);
  S20_M_0->SetBinContent(36,0.0);
  S20_M_0->SetBinContent(37,0.0);
  S20_M_0->SetBinContent(38,0.0);
  S20_M_0->SetBinContent(39,0.0);
  S20_M_0->SetBinContent(40,0.0);
  S20_M_0->SetBinContent(41,0.00013776850621656685); // overflow
  S20_M_0->SetEntries(60747);
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
