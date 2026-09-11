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
  S18_M_0->SetBinContent(1,0.004032289412410772);
  S18_M_0->SetBinContent(2,0.023429221089239435);
  S18_M_0->SetBinContent(3,0.043034670497654845);
  S18_M_0->SetBinContent(4,0.06185208867098904);
  S18_M_0->SetBinContent(5,0.10390532701681639);
  S18_M_0->SetBinContent(6,0.13393299727992755);
  S18_M_0->SetBinContent(7,0.1226875044521442);
  S18_M_0->SetBinContent(8,0.1059569109079733);
  S18_M_0->SetBinContent(9,0.09131170738221081);
  S18_M_0->SetBinContent(10,0.06189752555420262);
  S18_M_0->SetBinContent(11,0.057864323331100205);
  S18_M_0->SetBinContent(12,0.037464325843796054);
  S18_M_0->SetBinContent(13,0.029730008896616405);
  S18_M_0->SetBinContent(14,0.0260541152631915);
  S18_M_0->SetBinContent(15,0.017623523336623415);
  S18_M_0->SetBinContent(16,0.01871730768592705);
  S18_M_0->SetBinContent(17,0.010878359190948783);
  S18_M_0->SetBinContent(18,0.011229232397366373);
  S18_M_0->SetBinContent(19,0.007542364217946155);
  S18_M_0->SetBinContent(20,0.0038852178244328335);
  S18_M_0->SetBinContent(21,0.006561882439173928);
  S18_M_0->SetBinContent(22,0.002263247357556565);
  S18_M_0->SetBinContent(23,0.004280310983994672);
  S18_M_0->SetBinContent(24,0.0028397775947746964);
  S18_M_0->SetBinContent(25,0.0010044225811515297);
  S18_M_0->SetBinContent(26,0.002967591004184198);
  S18_M_0->SetBinContent(27,0.0013638188236404468);
  S18_M_0->SetBinContent(28,0.0016815823904884205);
  S18_M_0->SetBinContent(29,0.00033316992867928345);
  S18_M_0->SetBinContent(30,0.0003496719801315932);
  S18_M_0->SetBinContent(31,0.0003370231936039225);
  S18_M_0->SetBinContent(32,0.00029734973464433666);
  S18_M_0->SetBinContent(33,0.0006940646831970532);
  S18_M_0->SetBinContent(34,0.0);
  S18_M_0->SetBinContent(35,0.0009842855337862733);
  S18_M_0->SetBinContent(36,0.0);
  S18_M_0->SetBinContent(37,0.0);
  S18_M_0->SetBinContent(38,0.00033721200105090164);
  S18_M_0->SetBinContent(39,0.0);
  S18_M_0->SetBinContent(40,0.0);
  S18_M_0->SetBinContent(41,0.0006755695184244153); // overflow
  S18_M_0->SetEntries(3076);
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
