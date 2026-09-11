void selection_15()
{

  // ROOT version
  Int_t root_version = gROOT->GetVersionInt();

  // Creating a new TCanvas
  TCanvas* canvas = new TCanvas("canvas_plotflow_tempo49","canvas_plotflow_tempo49",0,0,700,500);
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
  TH1F* S16_M_0 = new TH1F("S16_M_0","S16_M_0",40,0.0,500.0);
  // Content
  S16_M_0->SetBinContent(0,0.0); // underflow
  S16_M_0->SetBinContent(1,0.0012760783671985532);
  S16_M_0->SetBinContent(2,0.007924550860607822);
  S16_M_0->SetBinContent(3,0.019371646934765858);
  S16_M_0->SetBinContent(4,0.04248024369918896);
  S16_M_0->SetBinContent(5,0.08447910636342064);
  S16_M_0->SetBinContent(6,0.13684641565960087);
  S16_M_0->SetBinContent(7,0.14229290726352076);
  S16_M_0->SetBinContent(8,0.11819994740179603);
  S16_M_0->SetBinContent(9,0.09363143003790658);
  S16_M_0->SetBinContent(10,0.07356954562293501);
  S16_M_0->SetBinContent(11,0.058163324500869536);
  S16_M_0->SetBinContent(12,0.04485537992112143);
  S16_M_0->SetBinContent(13,0.035919801439181186);
  S16_M_0->SetBinContent(14,0.02811474184320668);
  S16_M_0->SetBinContent(15,0.020588560627511802);
  S16_M_0->SetBinContent(16,0.018054347072108734);
  S16_M_0->SetBinContent(17,0.014270511291533842);
  S16_M_0->SetBinContent(18,0.010596615623646406);
  S16_M_0->SetBinContent(19,0.008445103060947827);
  S16_M_0->SetBinContent(20,0.007237933087446162);
  S16_M_0->SetBinContent(21,0.0047698156989617255);
  S16_M_0->SetBinContent(22,0.003970687458303372);
  S16_M_0->SetBinContent(23,0.004526489707297576);
  S16_M_0->SetBinContent(24,0.0035638039200809406);
  S16_M_0->SetBinContent(25,0.003249875500659964);
  S16_M_0->SetBinContent(26,0.001432775122327914);
  S16_M_0->SetBinContent(27,0.002053587905210572);
  S16_M_0->SetBinContent(28,0.0009564594445679884);
  S16_M_0->SetBinContent(29,0.0008795123429530552);
  S16_M_0->SetBinContent(30,0.0007581601526011708);
  S16_M_0->SetBinContent(31,0.0009067343818724506);
  S16_M_0->SetBinContent(32,0.0013710010214403028);
  S16_M_0->SetBinContent(33,0.0009354128621560657);
  S16_M_0->SetBinContent(34,0.0005353732773524048);
  S16_M_0->SetBinContent(35,0.00047746903494142747);
  S16_M_0->SetBinContent(36,0.0005516131195184645);
  S16_M_0->SetBinContent(37,0.000535699246344499);
  S16_M_0->SetBinContent(38,0.00020154688828930798);
  S16_M_0->SetBinContent(39,0.00027229471831058795);
  S16_M_0->SetBinContent(40,0.0002158569642533126);
  S16_M_0->SetBinContent(41,0.001517640554042467); // overflow
  S16_M_0->SetEntries(14982);
  // Style
  S16_M_0->SetLineColor(9);
  S16_M_0->SetLineStyle(1);
  S16_M_0->SetLineWidth(1);
  S16_M_0->SetFillColor(0);
  S16_M_0->SetFillStyle(1001);

  // Creating a new THStack
  THStack* stack = new THStack("mystack_50","mystack");
  stack->Add(S16_M_0);
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
  stack->GetXaxis()->SetTitle("M [ j_{1} mu_{1} ] (GeV/c^{2}) ");

  // Finalizing the TCanvas
  canvas->SetLogx(0);
  canvas->SetLogy(1);

  // Saving the image
  canvas->SaveAs("../../HTML/MadAnalysis5job_0/selection_15.png");

}
