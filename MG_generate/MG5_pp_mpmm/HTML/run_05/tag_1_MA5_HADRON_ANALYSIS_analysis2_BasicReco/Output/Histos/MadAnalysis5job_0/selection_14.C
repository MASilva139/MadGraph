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
  S15_M_0->SetBinContent(2,0.03535064680760293);
  S15_M_0->SetBinContent(3,0.08396193094369782);
  S15_M_0->SetBinContent(4,0.09123832219298247);
  S15_M_0->SetBinContent(5,0.12268797063251755);
  S15_M_0->SetBinContent(6,0.12142266939321086);
  S15_M_0->SetBinContent(7,0.09936135515044095);
  S15_M_0->SetBinContent(8,0.07288361923338929);
  S15_M_0->SetBinContent(9,0.06202362934427483);
  S15_M_0->SetBinContent(10,0.05980444290982378);
  S15_M_0->SetBinContent(11,0.044777527831065894);
  S15_M_0->SetBinContent(12,0.033263465072126415);
  S15_M_0->SetBinContent(13,0.03303160557894887);
  S15_M_0->SetBinContent(14,0.026800887916169146);
  S15_M_0->SetBinContent(15,0.021445004700678068);
  S15_M_0->SetBinContent(16,0.02081548146507756);
  S15_M_0->SetBinContent(17,0.013879922183107633);
  S15_M_0->SetBinContent(18,0.0071318439550707175);
  S15_M_0->SetBinContent(19,0.007414353185112503);
  S15_M_0->SetBinContent(20,0.007170000685237613);
  S15_M_0->SetBinContent(21,0.004429866780986724);
  S15_M_0->SetBinContent(22,0.0);
  S15_M_0->SetBinContent(23,0.00689109158334968);
  S15_M_0->SetBinContent(24,0.0024620297896957954);
  S15_M_0->SetBinContent(25,0.006930762417000933);
  S15_M_0->SetBinContent(26,0.0);
  S15_M_0->SetBinContent(27,0.0);
  S15_M_0->SetBinContent(28,0.002487720621568347);
  S15_M_0->SetBinContent(29,0.0);
  S15_M_0->SetBinContent(30,0.00492370254188873);
  S15_M_0->SetBinContent(31,0.0);
  S15_M_0->SetBinContent(32,0.0);
  S15_M_0->SetBinContent(33,0.002460729578122876);
  S15_M_0->SetBinContent(34,0.0);
  S15_M_0->SetBinContent(35,0.0024704991820900576);
  S15_M_0->SetBinContent(36,0.0);
  S15_M_0->SetBinContent(37,0.0);
  S15_M_0->SetBinContent(38,0.0024789183247616946);
  S15_M_0->SetBinContent(39,0.0);
  S15_M_0->SetBinContent(40,0.0);
  S15_M_0->SetBinContent(41,0.0); // overflow
  S15_M_0->SetEntries(422);
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
