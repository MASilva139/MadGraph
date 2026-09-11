void selection_14()
{

  // ROOT version
  Int_t root_version = gROOT->GetVersionInt();

  // Creating a new TCanvas
  TCanvas* canvas = new TCanvas("canvas_plotflow_tempo47","canvas_plotflow_tempo47",0,0,700,500);
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
  TH1F* S15_M_0 = new TH1F("S15_M_0","S15_M_0",40,0.0,500.0);
  // Content
  S15_M_0->SetBinContent(0,0.0); // underflow
  S15_M_0->SetBinContent(1,0.0);
  S15_M_0->SetBinContent(2,0.03593284395670648);
  S15_M_0->SetBinContent(3,0.06836348032051526);
  S15_M_0->SetBinContent(4,0.11231184057703471);
  S15_M_0->SetBinContent(5,0.12611004984560611);
  S15_M_0->SetBinContent(6,0.1224988875660274);
  S15_M_0->SetBinContent(7,0.09441165942657084);
  S15_M_0->SetBinContent(8,0.0842070899582004);
  S15_M_0->SetBinContent(9,0.0627674130183635);
  S15_M_0->SetBinContent(10,0.053410994614784345);
  S15_M_0->SetBinContent(11,0.04140880344648586);
  S15_M_0->SetBinContent(12,0.03686113896830728);
  S15_M_0->SetBinContent(13,0.023924332984149123);
  S15_M_0->SetBinContent(14,0.02569448628324283);
  S15_M_0->SetBinContent(15,0.016852800846495503);
  S15_M_0->SetBinContent(16,0.01658713032947216);
  S15_M_0->SetBinContent(17,0.014727328602466845);
  S15_M_0->SetBinContent(18,0.011372544069999824);
  S15_M_0->SetBinContent(19,0.01002392576901665);
  S15_M_0->SetBinContent(20,0.006560970331722511);
  S15_M_0->SetBinContent(21,0.005266221267469059);
  S15_M_0->SetBinContent(22,0.004844681764865107);
  S15_M_0->SetBinContent(23,0.00425970437639817);
  S15_M_0->SetBinContent(24,0.00229699344332182);
  S15_M_0->SetBinContent(25,0.0009441674950412787);
  S15_M_0->SetBinContent(26,0.002300951992133433);
  S15_M_0->SetBinContent(27,0.0019762901789201013);
  S15_M_0->SetBinContent(28,0.0013441863299138216);
  S15_M_0->SetBinContent(29,0.0006840875047931899);
  S15_M_0->SetBinContent(30,0.0010048844626579056);
  S15_M_0->SetBinContent(31,0.002557268027685364);
  S15_M_0->SetBinContent(32,0.0013140517194281495);
  S15_M_0->SetBinContent(33,0.00033683709855002343);
  S15_M_0->SetBinContent(34,0.0);
  S15_M_0->SetBinContent(35,0.0);
  S15_M_0->SetBinContent(36,0.000977530475956267);
  S15_M_0->SetBinContent(37,0.001356093507802553);
  S15_M_0->SetBinContent(38,0.0003369264676993434);
  S15_M_0->SetBinContent(39,0.0006310561038383448);
  S15_M_0->SetBinContent(40,0.0002959638658568993);
  S15_M_0->SetBinContent(41,0.003244383002501636); // overflow
  S15_M_0->SetEntries(3091);
  // Style
  S15_M_0->SetLineColor(9);
  S15_M_0->SetLineStyle(1);
  S15_M_0->SetLineWidth(1);
  S15_M_0->SetFillColor(0);
  S15_M_0->SetFillStyle(1001);

  // Creating a new THStack
  THStack* stack = new THStack("mystack_48","mystack");
  stack->Add(S15_M_0);
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
  stack->GetXaxis()->SetTitle("M [ j_{1} j_{2} ] (GeV/c^{2}) ");

  // Finalizing the TCanvas
  canvas->SetLogx(0);
  canvas->SetLogy(1);

  // Saving the image
  canvas->SaveAs("../../HTML/MadAnalysis5job_0/selection_14.png");

}
